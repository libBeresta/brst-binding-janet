//    JanetArray *array = janet_getarray(argv, 0);
//    Janet x = (argc == 2) ? argv[1] : janet_wrap_nil();
//    for (int32_t i = 0; i < array->count; i++) {
//        array->data[i] = x;
//    }

#define BRST_MAX_DASH_ELEMENTS 32

static Janet br_Page_SetDash(int32_t argc, Janet *argv) {
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
  
  BRST_STATUS ret = BRST_Page_SetDash(page, dash, num_elem, phase);

  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetDash(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_DASH_PATTERN dash_pattern = (BRST_DASH_PATTERN)janet_getpointer(argv, 1);
  BRST_UINT num_elem = (BRST_UINT)janet_getuinteger(argv, 2);
  BRST_REAL phase = (BRST_REAL)janet_getnumber(argv, 3);
  BRST_STATUS ret = BRST_Stream_SetDash(page, dash_pattern, num_elem, phase);
  return janet_wrap_integer(ret);
}
