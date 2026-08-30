// Separate implementation for functions with dash pattern
// They made in this way, 'cause we do not want to use native
// for BRST_REAL* (aka pointer to float array) in Janet code.

#define BRST_MAX_DASH_ELEMENTS 32

typedef void*
(BRST_STDCALL *BRST_Alloc_Func) (
    BRST_UINT size
);

typedef BRST_STATUS
(*SetDashFn)(
    BRST_Stream      stream,
    const BRST_REAL* dash_pattern,
    BRST_UINT        num_elem,
    BRST_REAL        phase
);

static Janet br_Page_SetDash_common(int32_t argc, Janet *argv, SetDashFn fn) {
  BRST_REAL dash[BRST_MAX_DASH_ELEMENTS];
  janet_arity(argc, 2, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);

  int is_arr = janet_checktype(argv[1], JANET_ARRAY);
  if (!is_arr) {
      janet_panic("`dash` must be an array of numbers");
  }

  JanetArray *dash_pattern = janet_getarray(argv, 1);
  BRST_UINT num_elem = (BRST_UINT)dash_pattern->count;
  
  if (num_elem == 0) {
      janet_panicf("`dash` must not be empty array");
  }

  if (num_elem >= BRST_MAX_DASH_ELEMENTS) {
      janet_panicf("`dash` must be no more than %d elements, but it has %d.", BRST_MAX_DASH_ELEMENTS, num_elem);
  }
  for (int i = 0; i <= num_elem; i++) {
      int is_num = janet_checktype(dash_pattern->data[i], JANET_NUMBER);
      if (!is_num) {
          janet_panic("`dash` should hold only numeric values");
      }
      dash[i] = (BRST_REAL)janet_unwrap_number(dash_pattern->data[i]);
  }
  
  BRST_REAL phase;

  if (argc == 3) {
      phase = (BRST_REAL)janet_getnumber(argv, 2);
  } else {
      phase = 0.0f;
  }
  
  BRST_STATUS ret = fn(page, dash, num_elem, phase);

  return janet_wrap_integer(ret);
}

static Janet br_Page_SetDash(int32_t argc, Janet *argv) {
    br_Page_SetDash_common(argc, argv, BRST_Page_SetDash);
}

static Janet br_Stream_SetDash(int32_t argc, Janet *argv) {
    br_Page_SetDash_common(argc, argv, BRST_Stream_SetDash);
}
