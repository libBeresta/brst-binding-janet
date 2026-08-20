//
// libBeresta
//
// Janet native для libBeresta
//
// Дмитрий Соломенников, (с) 2026
//

#include <janet.h>
#include <brst.h>

// asian.lsp
static Janet br_Doc_UseKRFonts(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_UseKRFonts(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_UseCNTFonts(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_UseCNTFonts(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_UseJPEncodings(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_UseJPEncodings(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_UseCNSFonts(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_UseCNSFonts(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_UseJPFonts(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_UseJPFonts(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_UseKREncodings(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_UseKREncodings(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_UseCNTEncodings(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_UseCNTEncodings(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_UseCNSEncodings(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_UseCNSEncodings(pdf);
  return janet_wrap_integer(ret);
}

// base.lsp
static Janet br_PageSize_Width(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_PageSizes size = (BRST_PageSizes)janet_getinteger(argv, 0);
  BRST_PageOrientation orientation = (BRST_PageOrientation)janet_getinteger(argv, 1);
  BRST_REAL ret = BRST_PageSize_Width(size, orientation);
  return janet_wrap_number(ret);
}

static Janet br_Doc_Destroy_All(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Doc_Destroy_All(pdf);
  return janet_wrap_nil();
}

static Janet br_Doc_Destroy(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Doc_Destroy(pdf);
  return janet_wrap_nil();
}

static Janet br_Doc_Initialized(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_BOOL ret = BRST_Doc_Initialized(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Free(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Doc_Free(pdf);
  return janet_wrap_nil();
}

static Janet br_Version(int32_t argc, Janet *argv) {
  (void) argv; janet_fixarity(argc, 0);
  BRST_CSTR ret = BRST_Version();
  return janet_cstringv(ret);
}

static Janet br_PageSize_Height(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_PageSizes size = (BRST_PageSizes)janet_getinteger(argv, 0);
  BRST_PageOrientation orientation = (BRST_PageOrientation)janet_getinteger(argv, 1);
  BRST_REAL ret = BRST_PageSize_Height(size, orientation);
  return janet_wrap_number(ret);
}

static Janet br_Doc_New_Empty(int32_t argc, Janet *argv) {
  (void) argv; janet_fixarity(argc, 0);
  BRST_Doc ret = BRST_Doc_New_Empty();
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_MMgr(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_MMgr ret = BRST_Doc_MMgr(pdf);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Initialize(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_Initialize(pdf);
  return janet_wrap_integer(ret);
}

// date.lsp
static Janet br_Date_Free(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Date date = (BRST_Date)janet_getpointer(argv, 0);
  BRST_Date_Free(date);
  return janet_wrap_nil();
}

static Janet br_Date_Part(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Date date = (BRST_Date)janet_getpointer(argv, 0);
  BRST_Date_Parts part = (BRST_Date_Parts)janet_getinteger(argv, 1);
  BRST_INT ret = BRST_Date_Part(date, part);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Date_Now(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Date ret = BRST_Doc_Date_Now(pdf);
  return janet_wrap_pointer(ret);
}

static Janet br_Date_Validate(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Date date = (BRST_Date)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Date_Validate(date);
  return janet_wrap_integer(ret);
}

// destination.lsp
static Janet br_Destination_SetFitH(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Destination dst = (BRST_Destination)janet_getpointer(argv, 0);
  BRST_REAL top = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Destination_SetFitH(dst, top);
  return janet_wrap_integer(ret);
}

static Janet br_Destination_SetFitBH(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Destination dst = (BRST_Destination)janet_getpointer(argv, 0);
  BRST_REAL top = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Destination_SetFitBH(dst, top);
  return janet_wrap_integer(ret);
}

static Janet br_Destination_SetFitB(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Destination dst = (BRST_Destination)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Destination_SetFitB(dst);
  return janet_wrap_integer(ret);
}

static Janet br_Destination_SetFitR(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Destination dst = (BRST_Destination)janet_getpointer(argv, 0);
  BRST_REAL left = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL bottom = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL right = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL top = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Destination_SetFitR(dst, left, bottom, right, top);
  return janet_wrap_integer(ret);
}

static Janet br_Destination_SetFitV(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Destination dst = (BRST_Destination)janet_getpointer(argv, 0);
  BRST_REAL left = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Destination_SetFitV(dst, left);
  return janet_wrap_integer(ret);
}

static Janet br_Destination_SetFit(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Destination dst = (BRST_Destination)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Destination_SetFit(dst);
  return janet_wrap_integer(ret);
}

static Janet br_Destination_SetFitBV(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Destination dst = (BRST_Destination)janet_getpointer(argv, 0);
  BRST_REAL left = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Destination_SetFitBV(dst, left);
  return janet_wrap_integer(ret);
}

static Janet br_Destination_SetXYZ(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Destination dst = (BRST_Destination)janet_getpointer(argv, 0);
  BRST_REAL left = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL top = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL zoom = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Destination_SetXYZ(dst, left, top, zoom);
  return janet_wrap_integer(ret);
}

// doc_compression.lsp
static Janet br_Doc_SetCompressionMode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_UINT mode = (BRST_UINT)janet_getuinteger(argv, 1);
  BRST_STATUS ret = BRST_Doc_SetCompressionMode(pdf, mode);
  return janet_wrap_integer(ret);
}

// doc_embedded_file.lsp
static Janet br_Doc_AttachFile(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR file = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_EmbeddedFile ret = BRST_Doc_AttachFile(pdf, file);
  return janet_wrap_pointer(ret);
}

// doc_encoder.lsp
static Janet br_Doc_Encoder_SetCurrent(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR encoding_name = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_STATUS ret = BRST_Doc_Encoder_SetCurrent(pdf, encoding_name);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Encoder_Current(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Encoder ret = BRST_Doc_Encoder_Current(pdf);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Encoder_Prepare(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR encoding_name = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_Encoder ret = BRST_Doc_Encoder_Prepare(pdf, encoding_name);
  return janet_wrap_pointer(ret);
}

// doc_encoding_utf.lsp
static Janet br_Doc_UseUTFEncodings(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_UseUTFEncodings(pdf);
  return janet_wrap_integer(ret);
}

// doc_ext_gstate.lsp
static Janet br_Doc_ExtGState_New(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_ExtGState ret = BRST_Doc_ExtGState_New(pdf);
  return janet_wrap_pointer(ret);
}

// doc_font.lsp
static Janet br_Doc_Type1Font_LoadFromFile(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR afm_filename = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_CSTR data_filename = (BRST_CSTR)janet_getstring(argv, 2);
  BRST_CSTR ret = BRST_Doc_Type1Font_LoadFromFile(pdf, afm_filename, data_filename);
  return janet_cstringv(ret);
}

static Janet br_Doc_TTFont_LoadFromFile(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR filename = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_BOOL embedding = (BRST_BOOL)janet_getinteger(argv, 2);
  BRST_CSTR ret = BRST_Doc_TTFont_LoadFromFile(pdf, filename, embedding);
  return janet_cstringv(ret);
}

static Janet br_Doc_Font(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR font_name = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_CSTR encoding_name = (BRST_CSTR)janet_getstring(argv, 2);
  BRST_Font ret = BRST_Doc_Font(pdf, font_name, encoding_name);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_TTFont_LoadFromFile2(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR filename = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_UINT index = (BRST_UINT)janet_getuinteger(argv, 2);
  BRST_BOOL embedding = (BRST_BOOL)janet_getinteger(argv, 3);
  BRST_CSTR ret = BRST_Doc_TTFont_LoadFromFile2(pdf, filename, index, embedding);
  return janet_cstringv(ret);
}

// doc_image_jpeg.lsp
static Janet br_Doc_Image_Jpeg_LoadFromFile(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR filename = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_Image ret = BRST_Doc_Image_Jpeg_LoadFromFile(pdf, filename);
  return janet_wrap_pointer(ret);
}

// doc_image_png.lsp
static Janet br_Doc_Image_Png_LoadFromFile2(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR filename = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_Image ret = BRST_Doc_Image_Png_LoadFromFile2(pdf, filename);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Image_Png_LoadFromFile(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR filename = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_Image ret = BRST_Doc_Image_Png_LoadFromFile(pdf, filename);
  return janet_wrap_pointer(ret);
}

// doc_image_tiff.lsp
static Janet br_Doc_Image_Raw_LoadFromFile(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR filename = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_UINT width = (BRST_UINT)janet_getuinteger(argv, 2);
  BRST_UINT height = (BRST_UINT)janet_getuinteger(argv, 3);
  BRST_ColorSpace color_space = (BRST_ColorSpace)janet_getinteger(argv, 4);
  BRST_Image ret = BRST_Doc_Image_Raw_LoadFromFile(pdf, filename, width, height, color_space);
  return janet_wrap_pointer(ret);
}

// doc_info.lsp
static Janet br_Doc_SetInfoAttr(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_InfoType type = (BRST_InfoType)janet_getinteger(argv, 1);
  BRST_CSTR value = (BRST_CSTR)janet_getstring(argv, 2);
  BRST_STATUS ret = BRST_Doc_SetInfoAttr(pdf, type, value);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_SetInfoDateAttr(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_InfoType type = (BRST_InfoType)janet_getinteger(argv, 1);
  BRST_Date value = (BRST_Date)janet_getpointer(argv, 2);
  BRST_STATUS ret = BRST_Doc_SetInfoDateAttr(pdf, type, value);
  return janet_wrap_integer(ret);
}

// doc_matrix.lsp
static Janet br_Doc_Matrix_Skew(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Matrix m = (BRST_Matrix)janet_getpointer(argv, 1);
  BRST_REAL a = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_Matrix ret = BRST_Doc_Matrix_Skew(pdf, m, a, b);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Matrix_Translate(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Matrix m = (BRST_Matrix)janet_getpointer(argv, 1);
  BRST_REAL dx = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL dy = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_Matrix ret = BRST_Doc_Matrix_Translate(pdf, m, dx, dy);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Matrix_RotateDeg(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Matrix m = (BRST_Matrix)janet_getpointer(argv, 1);
  BRST_REAL degrees = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_Matrix ret = BRST_Doc_Matrix_RotateDeg(pdf, m, degrees);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Matrix_Identity(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Matrix ret = BRST_Doc_Matrix_Identity(pdf);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Matrix_Scale(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Matrix m = (BRST_Matrix)janet_getpointer(argv, 1);
  BRST_REAL sx = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL sy = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_Matrix ret = BRST_Doc_Matrix_Scale(pdf, m, sx, sy);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Matrix_Multiply(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Matrix m = (BRST_Matrix)janet_getpointer(argv, 1);
  BRST_Matrix n = (BRST_Matrix)janet_getpointer(argv, 2);
  BRST_Matrix ret = BRST_Doc_Matrix_Multiply(pdf, m, n);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Matrix_Free(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Matrix m = (BRST_Matrix)janet_getpointer(argv, 0);
  BRST_Doc_Matrix_Free(m);
  return janet_wrap_nil();
}

static Janet br_Doc_Matrix_Rotate(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Matrix m = (BRST_Matrix)janet_getpointer(argv, 1);
  BRST_REAL angle = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_Matrix ret = BRST_Doc_Matrix_Rotate(pdf, m, angle);
  return janet_wrap_pointer(ret);
}

// doc_output_intent.lsp
static Janet br_Doc_OutputIntent_Add(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_OutputIntent intent = (BRST_OutputIntent)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Doc_OutputIntent_Add(pdf, intent);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_OutputIntent_New(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 6);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR identifier = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_CSTR condition = (BRST_CSTR)janet_getstring(argv, 2);
  BRST_CSTR registry = (BRST_CSTR)janet_getstring(argv, 3);
  BRST_CSTR info = (BRST_CSTR)janet_getstring(argv, 4);
  BRST_Array outputProfile = (BRST_Array)janet_getpointer(argv, 5);
  BRST_OutputIntent ret = BRST_Doc_OutputIntent_New(pdf, identifier, condition, registry, info, outputProfile);
  return janet_wrap_pointer(ret);
}

// doc_page.lsp
static Janet br_Doc_Page_AddLabel(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_UINT page_num = (BRST_UINT)janet_getuinteger(argv, 1);
  BRST_PageNum style = (BRST_PageNum)janet_getinteger(argv, 2);
  BRST_UINT first_page = (BRST_UINT)janet_getuinteger(argv, 3);
  BRST_CSTR prefix = (BRST_CSTR)janet_getstring(argv, 4);
  BRST_STATUS ret = BRST_Doc_Page_AddLabel(pdf, page_num, style, first_page, prefix);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Page_Layout(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_PageLayout ret = BRST_Doc_Page_Layout(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Page_Add(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Page ret = BRST_Doc_Page_Add(pdf);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Page_SetLayout(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_PageLayout layout = (BRST_PageLayout)janet_getinteger(argv, 1);
  BRST_STATUS ret = BRST_Doc_Page_SetLayout(pdf, layout);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Page_ByIndex(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_UINT index = (BRST_UINT)janet_getuinteger(argv, 1);
  BRST_Page ret = BRST_Doc_Page_ByIndex(pdf, index);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Page_Current(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Page ret = BRST_Doc_Page_Current(pdf);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Page_Mode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_PageMode ret = BRST_Doc_Page_Mode(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Page_Insert(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 1);
  BRST_Page ret = BRST_Doc_Page_Insert(pdf, page);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Page_SetMode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_PageMode mode = (BRST_PageMode)janet_getinteger(argv, 1);
  BRST_STATUS ret = BRST_Doc_Page_SetMode(pdf, mode);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Pages_SetConfiguration(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_UINT page_per_pages = (BRST_UINT)janet_getuinteger(argv, 1);
  BRST_STATUS ret = BRST_Doc_Pages_SetConfiguration(pdf, page_per_pages);
  return janet_wrap_integer(ret);
}

// doc_page_pattern.lsp
static Janet br_Doc_Dict_RGBPatternFill_Select(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 6);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Dict dict = (BRST_Dict)janet_getpointer(argv, 1);
  BRST_REAL r = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL g = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_Pattern pattern = (BRST_Pattern)janet_getpointer(argv, 5);
  BRST_STATUS ret = BRST_Doc_Dict_RGBPatternFill_Select(pdf, dict, r, g, b, pattern);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Page_RGBPatternFill_Select(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 6);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 1);
  BRST_REAL r = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL g = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_Pattern pattern = (BRST_Pattern)janet_getpointer(argv, 5);
  BRST_STATUS ret = BRST_Doc_Page_RGBPatternFill_Select(pdf, page, r, g, b, pattern);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Dict_RGBPatternFillUint_Select(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 6);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Dict dict = (BRST_Dict)janet_getpointer(argv, 1);
  BRST_UINT8 r = (BRST_UINT8)janet_getuinteger8(argv, 2);
  BRST_UINT8 g = (BRST_UINT8)janet_getuinteger8(argv, 3);
  BRST_UINT8 b = (BRST_UINT8)janet_getuinteger8(argv, 4);
  BRST_Pattern pattern = (BRST_Pattern)janet_getpointer(argv, 5);
  BRST_STATUS ret = BRST_Doc_Dict_RGBPatternFillUint_Select(pdf, dict, r, g, b, pattern);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Dict_RGBPatternFillHex_Select(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Dict dict = (BRST_Dict)janet_getpointer(argv, 1);
  BRST_UINT8 rgb = (BRST_UINT8)janet_getuinteger8(argv, 2);
  BRST_Pattern pattern = (BRST_Pattern)janet_getpointer(argv, 3);
  BRST_STATUS ret = BRST_Doc_Dict_RGBPatternFillHex_Select(pdf, dict, rgb, pattern);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Page_RGBPatternFillHex_Select(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 1);
  BRST_UINT8 rgb = (BRST_UINT8)janet_getuinteger8(argv, 2);
  BRST_Pattern pattern = (BRST_Pattern)janet_getpointer(argv, 3);
  BRST_STATUS ret = BRST_Doc_Page_RGBPatternFillHex_Select(pdf, page, rgb, pattern);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Page_RGBPatternFillUint_Select(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 6);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 1);
  BRST_UINT8 r = (BRST_UINT8)janet_getuinteger8(argv, 2);
  BRST_UINT8 g = (BRST_UINT8)janet_getuinteger8(argv, 3);
  BRST_UINT8 b = (BRST_UINT8)janet_getuinteger8(argv, 4);
  BRST_Pattern pattern = (BRST_Pattern)janet_getpointer(argv, 5);
  BRST_STATUS ret = BRST_Doc_Page_RGBPatternFillUint_Select(pdf, page, r, g, b, pattern);
  return janet_wrap_integer(ret);
}

// doc_pattern.lsp
static Janet br_Doc_Pattern_Tiling_New(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 8);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_REAL left = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL bottom = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL right = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL top = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_REAL xstep = (BRST_REAL)janet_getfloat(argv, 5);
  BRST_REAL ystep = (BRST_REAL)janet_getfloat(argv, 6);
  BRST_Matrix matrix = (BRST_Matrix)janet_getpointer(argv, 7);
  BRST_Pattern ret = BRST_Doc_Pattern_Tiling_New(pdf, left, bottom, right, top, xstep, ystep, matrix);
  return janet_wrap_pointer(ret);
}

static Janet br_Doc_Pattern_Stream(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Pattern pat = (BRST_Pattern)janet_getpointer(argv, 0);
  BRST_Stream ret = BRST_Doc_Pattern_Stream(pat);
  return janet_wrap_pointer(ret);
}

// doc_pdfa.lsp
static Janet br_Doc_PDFA_SetConformance(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_PDFAType pdfa_type = (BRST_PDFAType)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Doc_PDFA_SetConformance(pdf, pdfa_type);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_PDFA_AddXmpExtension(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR xmp_description = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_STATUS ret = BRST_Doc_PDFA_AddXmpExtension(pdf, xmp_description);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_PDFA_AppendOutputIntents(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR iccname = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_Dict iccdict = (BRST_Dict)janet_getpointer(argv, 2);
  BRST_STATUS ret = BRST_Doc_PDFA_AppendOutputIntents(pdf, iccname, iccdict);
  return janet_wrap_integer(ret);
}

// doc_save.lsp
static Janet br_Doc_SaveToStream(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_SaveToStream(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_SaveToFile(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR filename = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_STATUS ret = BRST_Doc_SaveToFile(pdf, filename);
  return janet_wrap_integer(ret);
}

// doc_security.lsp
static Janet br_Doc_SetPassword(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_CSTR owner_password = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_CSTR user_password = (BRST_CSTR)janet_getstring(argv, 2);
  BRST_STATUS ret = BRST_Doc_SetPassword(pdf, owner_password, user_password);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_SetEncryptionMode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_EncryptMode mode = (BRST_EncryptMode)janet_getinteger(argv, 1);
  BRST_UINT key_len = (BRST_UINT)janet_getuinteger(argv, 2);
  BRST_STATUS ret = BRST_Doc_SetEncryptionMode(pdf, mode, key_len);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_SetPermission(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_UINT permission = (BRST_UINT)janet_getuinteger(argv, 1);
  BRST_STATUS ret = BRST_Doc_SetPermission(pdf, permission);
  return janet_wrap_integer(ret);
}

// doc_viewer.lsp
static Janet br_Doc_ViewerPreference(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_UINT ret = BRST_Doc_ViewerPreference(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_SetViewerPreference(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_UINT value = (BRST_UINT)janet_getuinteger(argv, 1);
  BRST_STATUS ret = BRST_Doc_SetViewerPreference(pdf, value);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_SetOpenAction(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Destination open_action = (BRST_Destination)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Doc_SetOpenAction(pdf, open_action);
  return janet_wrap_integer(ret);
}

// doc_xobject.lsp
static Janet br_Doc_XObject_New(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_REAL width = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL height = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL scalex = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL scaley = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_XObject ret = BRST_Doc_XObject_New(pdf, width, height, scalex, scaley);
  return janet_wrap_pointer(ret);
}

// error.lsp
static Janet br_Doc_Error_SetHandler(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Error_Handler user_error_fn = (BRST_Error_Handler)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Doc_Error_SetHandler(pdf, user_error_fn);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Error_DetailCode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_Error_DetailCode(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Doc_Error_Reset(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_Doc_Error_Reset(pdf);
  return janet_wrap_nil();
}

static Janet br_Doc_Error_Code(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Doc pdf = (BRST_Doc)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Doc_Error_Code(pdf);
  return janet_wrap_integer(ret);
}

static Janet br_Error_Check(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Error error = (BRST_Error)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Error_Check(error);
  return janet_wrap_integer(ret);
}

// ext_gstate.lsp
static Janet br_ExtGState_SetBlendMode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_ExtGState ext_gstate = (BRST_ExtGState)janet_getpointer(argv, 0);
  BRST_BlendMode mode = (BRST_BlendMode)janet_getinteger(argv, 1);
  BRST_STATUS ret = BRST_ExtGState_SetBlendMode(ext_gstate, mode);
  return janet_wrap_integer(ret);
}

static Janet br_ExtGState_SetAlphaFill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_ExtGState ext_gstate = (BRST_ExtGState)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_ExtGState_SetAlphaFill(ext_gstate, value);
  return janet_wrap_integer(ret);
}

static Janet br_ExtGState_SetAlphaStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_ExtGState ext_gstate = (BRST_ExtGState)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_ExtGState_SetAlphaStroke(ext_gstate, value);
  return janet_wrap_integer(ret);
}

// font.lsp
static Janet br_Font_Descent(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Font font = (BRST_Font)janet_getpointer(argv, 0);
  BRST_REAL font_size = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL ret = BRST_Font_Descent(font, font_size);
  return janet_wrap_number(ret);
}

static Janet br_Font_TextWidth2(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Font font = (BRST_Font)janet_getpointer(argv, 0);
  BRST_REAL font_size = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL word_space = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL char_space = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_CSTR text = (BRST_CSTR)janet_getstring(argv, 4);
  BRST_REAL ret = BRST_Font_TextWidth2(font, font_size, word_space, char_space, text);
  return janet_wrap_number(ret);
}

// geometry.lsp
static Janet br_Page_Arc(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 6);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL radius = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL angle1 = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_REAL angle2 = (BRST_REAL)janet_getfloat(argv, 5);
  BRST_STATUS ret = BRST_Page_Arc(page, x, y, radius, angle1, angle2);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetRGBStrokeUint(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_UINT8 r = (BRST_UINT8)janet_getuinteger8(argv, 1);
  BRST_UINT8 g = (BRST_UINT8)janet_getuinteger8(argv, 2);
  BRST_UINT8 b = (BRST_UINT8)janet_getuinteger8(argv, 3);
  BRST_STATUS ret = BRST_Page_SetRGBStrokeUint(page, r, g, b);
  return janet_wrap_integer(ret);
}

static Janet br_Page_CurveTo3(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x1 = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y1 = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL x3 = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL y3 = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Page_CurveTo3(page, x1, y1, x3, y3);
  return janet_wrap_integer(ret);
}

static Janet br_Page_FillColorSpace(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_ColorSpace ret = BRST_Page_FillColorSpace(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_MoveTo(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Page_MoveTo(page, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Ellipse(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL a = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Page_Ellipse(page, x, y, a, b);
  return janet_wrap_integer(ret);
}

static Janet br_Page_LineJoin(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_LineJoin ret = BRST_Page_LineJoin(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Concat(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 7);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL a = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL c = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL d = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 5);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 6);
  BRST_STATUS ret = BRST_Page_Concat(page, a, b, c, d, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Eoclip(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_Eoclip(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_LineTo(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Page_LineTo(page, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetLineCap(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_LineCap line_cap = (BRST_LineCap)janet_getinteger(argv, 1);
  BRST_STATUS ret = BRST_Page_SetLineCap(page, line_cap);
  return janet_wrap_integer(ret);
}

static Janet br_Page_LineWidth(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_LineWidth(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_ClosePath(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_ClosePath(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetRGBFillUint(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_UINT8 r = (BRST_UINT8)janet_getuinteger8(argv, 1);
  BRST_UINT8 g = (BRST_UINT8)janet_getuinteger8(argv, 2);
  BRST_UINT8 b = (BRST_UINT8)janet_getuinteger8(argv, 3);
  BRST_STATUS ret = BRST_Page_SetRGBFillUint(page, r, g, b);
  return janet_wrap_integer(ret);
}

static Janet br_Page_EofillStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_EofillStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_GrayFill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_GrayFill(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_SetDash(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_DASH_PATTERN dash_pattern = (BRST_DASH_PATTERN)janet_getpointer(argv, 1);
  BRST_UINT num_elem = (BRST_UINT)janet_getuinteger(argv, 2);
  BRST_REAL phase = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Page_SetDash(page, dash_pattern, num_elem, phase);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetRGBStrokeHex(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_UINT32 rgb = (BRST_UINT32)janet_getuinteger(argv, 1);
  BRST_STATUS ret = BRST_Page_SetRGBStrokeHex(page, rgb);
  return janet_wrap_integer(ret);
}

static Janet br_Page_ClosePathEofillStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_ClosePathEofillStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Skew(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL a = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Page_Skew(page, a, b);
  return janet_wrap_integer(ret);
}

static Janet br_Page_GRestore(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_GRestore(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_CurveTo(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 7);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x1 = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y1 = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL x2 = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL y2 = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_REAL x3 = (BRST_REAL)janet_getfloat(argv, 5);
  BRST_REAL y3 = (BRST_REAL)janet_getfloat(argv, 6);
  BRST_STATUS ret = BRST_Page_CurveTo(page, x1, y1, x2, y2, x3, y3);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Scale(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL sx = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL sy = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Page_Scale(page, sx, sy);
  return janet_wrap_integer(ret);
}

static Janet br_Page_FillStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_FillStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_LineCap(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_LineCap ret = BRST_Page_LineCap(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetGrayStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetGrayStroke(page, value);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Translate(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL dx = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL dy = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Page_Translate(page, dx, dy);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetLineJoin(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_LineJoin line_join = (BRST_LineJoin)janet_getinteger(argv, 1);
  BRST_STATUS ret = BRST_Page_SetLineJoin(page, line_join);
  return janet_wrap_integer(ret);
}

static Janet br_Page_GSave(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_GSave(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_EndPath(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_EndPath(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_StrokeColorSpace(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_ColorSpace ret = BRST_Page_StrokeColorSpace(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_ClosePathStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_ClosePathStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Flat(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_Flat(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_Matrix(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_Matrix ret = BRST_Page_Matrix(page);
  return janet_wrap_pointer(ret);
}

static Janet br_Page_ClosePathFillStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_ClosePathFillStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_CurveTo2(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x2 = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y2 = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL x3 = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL y3 = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Page_CurveTo2(page, x2, y2, x3, y3);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetLineWidth(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL line_width = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetLineWidth(page, line_width);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetCMYKStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL c = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL m = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL k = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Page_SetCMYKStroke(page, c, m, y, k);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Rectangle(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL width = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL height = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Page_Rectangle(page, x, y, width, height);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetMiterLimit(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL miter_limit = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetMiterLimit(page, miter_limit);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetCMYKFill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL c = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL m = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL k = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Page_SetCMYKFill(page, c, m, y, k);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Stroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_Stroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetFlat(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL flatness = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetFlat(page, flatness);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Circle(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL radius = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Page_Circle(page, x, y, radius);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetRGBStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL r = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL g = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Page_SetRGBStroke(page, r, g, b);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetRGBFill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL r = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL g = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Page_SetRGBFill(page, r, g, b);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetRGBFillHex(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_UINT32 rgb = (BRST_UINT32)janet_getuinteger(argv, 1);
  BRST_STATUS ret = BRST_Page_SetRGBFillHex(page, rgb);
  return janet_wrap_integer(ret);
}

static Janet br_Page_MiterLimit(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_MiterLimit(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_Eofill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_Eofill(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_RotateDeg(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL degrees = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_RotateDeg(page, degrees);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Fill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_Fill(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Rotate(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL radians = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_Rotate(page, radians);
  return janet_wrap_integer(ret);
}

static Janet br_Page_GrayStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_GrayStroke(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_Clip(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_Clip(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetGrayFill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetGrayFill(page, value);
  return janet_wrap_integer(ret);
}

// image.lsp
static Janet br_Image_Height(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Image image = (BRST_Image)janet_getpointer(argv, 0);
  BRST_UINT ret = BRST_Image_Height(image);
  return janet_wrap_integer(ret);
}

static Janet br_Image_ColorSpace(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Image image = (BRST_Image)janet_getpointer(argv, 0);
  BRST_CSTR ret = BRST_Image_ColorSpace(image);
  return janet_cstringv(ret);
}

static Janet br_Image_Width(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Image image = (BRST_Image)janet_getpointer(argv, 0);
  BRST_UINT ret = BRST_Image_Width(image);
  return janet_wrap_integer(ret);
}

static Janet br_Image_BitsPerComponent(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Image image = (BRST_Image)janet_getpointer(argv, 0);
  BRST_UINT ret = BRST_Image_BitsPerComponent(image);
  return janet_wrap_integer(ret);
}

static Janet br_Image_AddSMask(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Image image = (BRST_Image)janet_getpointer(argv, 0);
  BRST_Image smask = (BRST_Image)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Image_AddSMask(image, smask);
  return janet_wrap_integer(ret);
}

static Janet br_Image_SetColorMask(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 7);
  BRST_Image image = (BRST_Image)janet_getpointer(argv, 0);
  BRST_UINT rmin = (BRST_UINT)janet_getuinteger(argv, 1);
  BRST_UINT rmax = (BRST_UINT)janet_getuinteger(argv, 2);
  BRST_UINT gmin = (BRST_UINT)janet_getuinteger(argv, 3);
  BRST_UINT gmax = (BRST_UINT)janet_getuinteger(argv, 4);
  BRST_UINT bmin = (BRST_UINT)janet_getuinteger(argv, 5);
  BRST_UINT bmax = (BRST_UINT)janet_getuinteger(argv, 6);
  BRST_STATUS ret = BRST_Image_SetColorMask(image, rmin, rmax, gmin, gmax, bmin, bmax);
  return janet_wrap_integer(ret);
}

static Janet br_Image_SetMaskImage(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Image image = (BRST_Image)janet_getpointer(argv, 0);
  BRST_Image mask_image = (BRST_Image)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Image_SetMaskImage(image, mask_image);
  return janet_wrap_integer(ret);
}

// page_routines.lsp
static Janet br_Page_Destination_New(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_Destination ret = BRST_Page_Destination_New(page);
  return janet_wrap_pointer(ret);
}

static Janet br_Page_SetExtGState(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_ExtGState ext_gstate = (BRST_ExtGState)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Page_SetExtGState(page, ext_gstate);
  return janet_wrap_integer(ret);
}

static Janet br_Page_MMgr(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_MMgr ret = BRST_Page_MMgr(page);
  return janet_wrap_pointer(ret);
}

static Janet br_Page_Width(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_Width(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_SetRotate(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_UINT16 angle = (BRST_UINT16)janet_getuinteger16(argv, 1);
  BRST_STATUS ret = BRST_Page_SetRotate(page, angle);
  return janet_wrap_integer(ret);
}

static Janet br_Page_HorizontalScaling(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_HorizontalScaling(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_RawWrite(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_CSTR data = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_STATUS ret = BRST_Page_RawWrite(page, data);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetSlideShow(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_PageTransition type = (BRST_PageTransition)janet_getinteger(argv, 1);
  BRST_REAL disp_time = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL trans_time = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Page_SetSlideShow(page, type, disp_time, trans_time);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetBoundary(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 6);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_PageBoundary boundary = (BRST_PageBoundary)janet_getinteger(argv, 1);
  BRST_REAL left = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL bottom = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL right = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_REAL top = (BRST_REAL)janet_getfloat(argv, 5);
  BRST_STATUS ret = BRST_Page_SetBoundary(page, boundary, left, bottom, right, top);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetHorizontalScaling(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetHorizontalScaling(page, value);
  return janet_wrap_integer(ret);
}

static Janet br_Page_GMode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_UINT16 ret = BRST_Page_GMode(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Insert_Shared_Content_Stream(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_Dict shared_stream = (BRST_Dict)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Page_Insert_Shared_Content_Stream(page, shared_stream);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetHeight(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetHeight(page, value);
  return janet_wrap_integer(ret);
}

static Janet br_Page_GStateDepth(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_UINT ret = BRST_Page_GStateDepth(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_Height(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_Height(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_SetZoom(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL zoom = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetZoom(page, zoom);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetSize(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_PageSizes size = (BRST_PageSizes)janet_getinteger(argv, 1);
  BRST_PageOrientation orientation = (BRST_PageOrientation)janet_getinteger(argv, 2);
  BRST_STATUS ret = BRST_Page_SetSize(page, size, orientation);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetWidth(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetWidth(page, value);
  return janet_wrap_integer(ret);
}

// page_xobject.lsp
static Janet br_Dict_XObject_Execute(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Dict dict = (BRST_Dict)janet_getpointer(argv, 0);
  BRST_XObject xobj = (BRST_XObject)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Dict_XObject_Execute(dict, xobj);
  return janet_wrap_integer(ret);
}

static Janet br_Page_XObject_Execute(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_XObject xobj = (BRST_XObject)janet_getpointer(argv, 1);
  BRST_STATUS ret = BRST_Page_XObject_Execute(page, xobj);
  return janet_wrap_integer(ret);
}

// stream_geometry.lsp
static Janet br_Stream_FillStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_FillStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetGrayFill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetGrayFill(page, value);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Rectangle(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL width = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL height = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Stream_Rectangle(page, x, y, width, height);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_GSave(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_GSave(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetCMYKFill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL c = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL m = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL k = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Stream_SetCMYKFill(page, c, m, y, k);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetRGBFillUint(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_UINT8 r = (BRST_UINT8)janet_getuinteger8(argv, 1);
  BRST_UINT8 g = (BRST_UINT8)janet_getuinteger8(argv, 2);
  BRST_UINT8 b = (BRST_UINT8)janet_getuinteger8(argv, 3);
  BRST_STATUS ret = BRST_Stream_SetRGBFillUint(page, r, g, b);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Rotate(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL radians = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Stream_Rotate(page, radians);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_EofillStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_EofillStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_CurveTo(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 7);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL x1 = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y1 = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL x2 = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL y2 = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_REAL x3 = (BRST_REAL)janet_getfloat(argv, 5);
  BRST_REAL y3 = (BRST_REAL)janet_getfloat(argv, 6);
  BRST_STATUS ret = BRST_Stream_CurveTo(page, x1, y1, x2, y2, x3, y3);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Concat(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 7);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL a = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL c = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL d = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 5);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 6);
  BRST_STATUS ret = BRST_Stream_Concat(page, a, b, c, d, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Fill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_Fill(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_ClosePathFillStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_ClosePathFillStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetRGBFill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL r = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL g = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Stream_SetRGBFill(page, r, g, b);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetCMYKStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL c = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL m = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL k = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Stream_SetCMYKStroke(page, c, m, y, k);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_ClosePath(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_ClosePath(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetGrayStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetGrayStroke(page, value);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_CurveTo2(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL x2 = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y2 = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL x3 = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL y3 = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Stream_CurveTo2(page, x2, y2, x3, y3);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetDash(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_DASH_PATTERN dash_pattern = (BRST_DASH_PATTERN)janet_getpointer(argv, 1);
  BRST_UINT num_elem = (BRST_UINT)janet_getuinteger(argv, 2);
  BRST_REAL phase = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Stream_SetDash(page, dash_pattern, num_elem, phase);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_RotateDeg(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL degrees = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Stream_RotateDeg(page, degrees);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_CurveTo3(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL x1 = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y1 = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL x3 = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL y3 = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_STATUS ret = BRST_Stream_CurveTo3(page, x1, y1, x3, y3);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetLineCap(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_LineCap line_cap = (BRST_LineCap)janet_getinteger(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetLineCap(page, line_cap);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetFlat(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL flatness = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetFlat(page, flatness);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Eoclip(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_Eoclip(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Circle(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL radius = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Stream_Circle(page, x, y, radius);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetRGBStrokeUint(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_UINT8 r = (BRST_UINT8)janet_getuinteger8(argv, 1);
  BRST_UINT8 g = (BRST_UINT8)janet_getuinteger8(argv, 2);
  BRST_UINT8 b = (BRST_UINT8)janet_getuinteger8(argv, 3);
  BRST_STATUS ret = BRST_Stream_SetRGBStrokeUint(page, r, g, b);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Scale(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL sx = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL sy = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Stream_Scale(page, sx, sy);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_GRestore(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_GRestore(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_LineTo(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Stream_LineTo(page, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_MoveTo(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Stream_MoveTo(page, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_ClosePathEofillStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_ClosePathEofillStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetLineWidth(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL line_width = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetLineWidth(page, line_width);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Eofill(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_Eofill(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetRGBStrokeHex(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_UINT32 rgb = (BRST_UINT32)janet_getuinteger(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetRGBStrokeHex(page, rgb);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetLineJoin(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_LineJoin line_join = (BRST_LineJoin)janet_getinteger(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetLineJoin(page, line_join);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Translate(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL dx = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL dy = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Stream_Translate(page, dx, dy);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_ClosePathStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_ClosePathStroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetRGBFillHex(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_UINT32 rgb = (BRST_UINT32)janet_getuinteger(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetRGBFillHex(page, rgb);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetMiterLimit(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL miter_limit = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetMiterLimit(page, miter_limit);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Stroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_Stroke(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Skew(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL a = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Stream_Skew(page, a, b);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_EndPath(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_EndPath(page);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetRGBStroke(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL r = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL g = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_STATUS ret = BRST_Stream_SetRGBStroke(page, r, g, b);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_Clip(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream page = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_Clip(page);
  return janet_wrap_integer(ret);
}

// stream_text.lsp
static Janet br_Stream_SetTextMatrix(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 7);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL a = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL c = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL d = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 5);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 6);
  BRST_STATUS ret = BRST_Stream_SetTextMatrix(stream, a, b, c, d, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_TextOut(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 5);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_Font font = (BRST_Font)janet_getpointer(argv, 1);
  BRST_REAL xpos = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL ypos = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_CSTR text = (BRST_CSTR)janet_getstring(argv, 4);
  BRST_STATUS ret = BRST_Stream_TextOut(stream, font, xpos, ypos, text);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_MoveTextPos2(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Stream_MoveTextPos2(stream, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetTextRenderingMode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_TextRenderingMode mode = (BRST_TextRenderingMode)janet_getinteger(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetTextRenderingMode(stream, mode);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_BeginText(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_BeginText(stream);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_ShowText(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_Font font = (BRST_Font)janet_getpointer(argv, 1);
  BRST_CSTR text = (BRST_CSTR)janet_getstring(argv, 2);
  BRST_STATUS ret = BRST_Stream_ShowText(stream, font, text);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_MoveToNextLine(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_MoveToNextLine(stream);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_SetTextLeading(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Stream_SetTextLeading(stream, value);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_EndText(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Stream_EndText(stream);
  return janet_wrap_integer(ret);
}

static Janet br_Stream_MoveTextPos(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Stream stream = (BRST_Stream)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Stream_MoveTextPos(stream, x, y);
  return janet_wrap_integer(ret);
}

// text.lsp
static Janet br_Page_TextOut(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL xpos = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL ypos = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_CSTR text = (BRST_CSTR)janet_getstring(argv, 3);
  BRST_STATUS ret = BRST_Page_TextOut(page, xpos, ypos, text);
  return janet_wrap_integer(ret);
}

static Janet br_Page_TextWidth(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_CSTR text = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_REAL ret = BRST_Page_TextWidth(page, text);
  return janet_wrap_number(ret);
}

static Janet br_Page_ShowText(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_CSTR text = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_STATUS ret = BRST_Page_ShowText(page, text);
  return janet_wrap_integer(ret);
}

static Janet br_Page_WordSpace(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_WordSpace(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_SetTextRise(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetTextRise(page, value);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetFontAndSize(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_Font font = (BRST_Font)janet_getpointer(argv, 1);
  BRST_REAL size = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Page_SetFontAndSize(page, font, size);
  return janet_wrap_integer(ret);
}

static Janet br_Page_MoveTextPos2(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Page_MoveTextPos2(page, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Page_CharSpace(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_CharSpace(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_TextMatrix(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_Matrix ret = BRST_Page_TextMatrix(page);
  return janet_wrap_pointer(ret);
}

static Janet br_Page_CurrentFontSize(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_CurrentFontSize(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_SetCharSpace(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetCharSpace(page, value);
  return janet_wrap_integer(ret);
}

static Janet br_Page_EndText(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_EndText(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_TextLeading(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_TextLeading(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_MoveToNextLine(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_MoveToNextLine(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_ShowTextNextLineEx(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 4);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL word_space = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL char_space = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_CSTR text = (BRST_CSTR)janet_getstring(argv, 3);
  BRST_STATUS ret = BRST_Page_ShowTextNextLineEx(page, word_space, char_space, text);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetTextLeading(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetTextLeading(page, value);
  return janet_wrap_integer(ret);
}

static Janet br_Page_TextRenderingMode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_TextRenderingMode ret = BRST_Page_TextRenderingMode(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_CurrentFont(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_Font ret = BRST_Page_CurrentFont(page);
  return janet_wrap_pointer(ret);
}

static Janet br_Dict_SetFontAndSize(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Dict dict = (BRST_Dict)janet_getpointer(argv, 0);
  BRST_Font font = (BRST_Font)janet_getpointer(argv, 1);
  BRST_REAL size = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Dict_SetFontAndSize(dict, font, size);
  return janet_wrap_integer(ret);
}

static Janet br_Page_MoveTextPos(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 3);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_STATUS ret = BRST_Page_MoveTextPos(page, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetTextMatrix(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 7);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL a = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_REAL b = (BRST_REAL)janet_getfloat(argv, 2);
  BRST_REAL c = (BRST_REAL)janet_getfloat(argv, 3);
  BRST_REAL d = (BRST_REAL)janet_getfloat(argv, 4);
  BRST_REAL x = (BRST_REAL)janet_getfloat(argv, 5);
  BRST_REAL y = (BRST_REAL)janet_getfloat(argv, 6);
  BRST_STATUS ret = BRST_Page_SetTextMatrix(page, a, b, c, d, x, y);
  return janet_wrap_integer(ret);
}

static Janet br_Page_ShowTextNextLine(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_CSTR text = (BRST_CSTR)janet_getstring(argv, 1);
  BRST_STATUS ret = BRST_Page_ShowTextNextLine(page, text);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetWordSpace(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL value = (BRST_REAL)janet_getfloat(argv, 1);
  BRST_STATUS ret = BRST_Page_SetWordSpace(page, value);
  return janet_wrap_integer(ret);
}

static Janet br_Page_TextRise(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_REAL ret = BRST_Page_TextRise(page);
  return janet_wrap_number(ret);
}

static Janet br_Page_BeginText(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_STATUS ret = BRST_Page_BeginText(page);
  return janet_wrap_integer(ret);
}

static Janet br_Page_SetTextRenderingMode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 2);
  BRST_Page page = (BRST_Page)janet_getpointer(argv, 0);
  BRST_TextRenderingMode mode = (BRST_TextRenderingMode)janet_getinteger(argv, 1);
  BRST_STATUS ret = BRST_Page_SetTextRenderingMode(page, mode);
  return janet_wrap_integer(ret);
}

// unicode_glyph.lsp
static Janet br_GlyphNameToUnicode(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_CSTR glyph_name = (BRST_CSTR)janet_getstring(argv, 0);
  BRST_UNICODE ret = BRST_GlyphNameToUnicode(glyph_name);
  return janet_wrap_integer(ret);
}

static Janet br_UnicodeToGlyphName(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_UNICODE unicode = (BRST_UNICODE)janet_getuinteger16(argv, 0);
  BRST_CSTR ret = BRST_UnicodeToGlyphName(unicode);
  return janet_cstringv(ret);
}

// xobject.lsp
static Janet br_XObject_Stream(int32_t argc, Janet *argv) {
  janet_fixarity(argc, 1);
  BRST_XObject xobj = (BRST_XObject)janet_getpointer(argv, 0);
  BRST_Stream ret = BRST_XObject_Stream(xobj);
  return janet_wrap_pointer(ret);
}

static const JanetReg cfuns[] = {
  // asian.lsp
  {"doc-usekrfonts", br_Doc_UseKRFonts, "(brst/doc-usekrfonts pdf)\n\nEnable Korean fonts. Application can use following fonts after call:\\n\\n  | Font name            |\\n  | ---------            |\\n  | DotumChe             |\\n  | DotumChe,Bold        |\\n  | DotumChe,Italic      |\\n  | DotumChe,BoldItalic  |\\n  | Dotum                |\\n  | Dotum,Bold           |\\n  | Dotum,Italic         |\\n  | Dotum,BoldItalic     |\\n  | BatangChe            |\\n  | BatangChe,Bold       |\\n  | BatangChe,Italic     |\\n  | BatangChe,BoldItalic |\\n  | Batang               |\\n  | Batang,Bold          |\\n  | Batang,Italic        |\\n  | Batang,BoldItalic    |"},
  {"doc-usecntfonts", br_Doc_UseCNTFonts, "(brst/doc-usecntfonts pdf)\n\nEnable Chinese Traditional fonts. Application can use following fonts after call:\\n\\n  | Font name          |\\n  | ---------          |\\n  | MingLiU            |\\n  | MingLiU,Bold       |\\n  | MingLiU,Italic     |\\n  | MingLiU,BoldItalic |"},
  {"doc-usejpencodings", br_Doc_UseJPEncodings, "(brst/doc-usejpencodings pdf)\n\nEnable Japanese encodings. Application can use following encodings after call:\\n\\n  | Encoding     |\\n  | --------     |\\n  | 90ms-RKSJ-H  |\\n  | 90ms-RKSJ-V  |\\n  | 90msp-RKSJ-H |\\n  | EUC-H        |\\n  | EUC-V        |"},
  {"doc-usecnsfonts", br_Doc_UseCNSFonts, "(brst/doc-usecnsfonts pdf)\n\nEnable Chinese Simplified fonts. Application can use following fonts after call:\\n\\n  | Font name         |\\n  | ---------         |\\n  | SimSun            |\\n  | SimSun,Bold       |\\n  | SimSun,Italic     |\\n  | SimSun,BoldItalic |\\n  | SimHei            |\\n  | SimHei,Bold       |\\n  | SimHei,Italic     |\\n  | SimHei,BoldItalic |"},
  {"doc-usejpfonts", br_Doc_UseJPFonts, "(brst/doc-usejpfonts pdf)\n\nEnable Japanese fonts. Application can use following Japanese fonts after call:\\n\\n  | Font name             |\\n  | ---------             |\\n  | MS-Mincyo             |\\n  | MS-Mincyo,Bold        |\\n  | MS-Mincyo,Italic      |\\n  | MS-Mincyo,BoldItalic  |\\n  | MS-Gothic             |\\n  | MS-Gothic,Bold        |\\n  | MS-Gothic,Italic      |\\n  | MS-Gothic,BoldItalic  |\\n  | MS-PMincyo            |\\n  | MS-PMincyo,Bold       |\\n  | MS-PMincyo,Italic     |\\n  | MS-PMincyo,BoldItalic |\\n  | MS-PGothic            |\\n  | MS-PGothic,Bold       |\\n  | MS-PGothic,Italic     |\\n  | MS-PGothic,BoldItalic |"},
  {"doc-usekrencodings", br_Doc_UseKREncodings, "(brst/doc-usekrencodings pdf)\n\nEnable Korean encodings. Application can use following encodings after call:\\n\\n  | Encoding       |\\n  | --------       |\\n  | KSC-EUC-H      |\\n  | KSC-EUC-V      |\\n  | KSCms-UHC-H    |\\n  | KSCms-UHC-HW-H |\\n  | KSCms-UHC-HW-V |"},
  {"doc-usecntencodings", br_Doc_UseCNTEncodings, "(brst/doc-usecntencodings pdf)\n\nEnable Chinese Traditional encodings. Application can use following encodings after call:\\n\\n  | Encoding  |\\n  | --------  |\\n  | ETen-B5-H |\\n  | ETen-B5-V |"},
  {"doc-usecnsencodings", br_Doc_UseCNSEncodings, "(brst/doc-usecnsencodings pdf)\n\nEnable Chinese Simplified encodings. Application can use following encodings after call:\\n\\n  | Encoding  |\\n  | --------  |\\n  | GB-EUC-H  |\\n  | GB-EUC-V  |\\n  | GBK-EUC-H |\\n  | GBK-EUC-V |"},
  // base.lsp
  {"pagesize-width", br_PageSize_Width, "(brst/pagesize-width size orientation)\n\nPredefined page size width. May be used without document and page."},
  {"doc-destroy-all", br_Doc_Destroy_All, "(brst/doc-destroy-all pdf)\n\nReleases inner document structures and frees loaded resources (such as fonts and encodings)"},
  {"doc-destroy", br_Doc_Destroy, "(brst/doc-destroy pdf)\n\nReleases inner document structures."},
  {"doc-initialized", br_Doc_Initialized, "(brst/doc-initialized pdf)\n\nChecks if document handle is valid."},
  {"doc-free", br_Doc_Free, "(brst/doc-free pdf)\n\nFrees document data"},
  {"version", br_Version, "(brst/version)\n\nReturns library version"},
  {"pagesize-height", br_PageSize_Height, "(brst/pagesize-height size orientation)\n\nPredefined page size height. May be used without document and page."},
  {"doc-new-empty", br_Doc_New_Empty, "(brst/doc-new-empty)\n\nCreate document and set it up (with no additional options)"},
  {"doc-mmgr", br_Doc_MMgr, "(brst/doc-mmgr pdf)\n\nReturns document's memory manager"},
  {"doc-initialize", br_Doc_Initialize, "(brst/doc-initialize pdf)\n\nCreate a new document. If \\c doc object already has a document, the current document is revoked."},
  // date.lsp
  {"date-free", br_Date_Free, "(brst/date-free date)\n\nFrees date memory"},
  {"date-part", br_Date_Part, "(brst/date-part date part)\n\nDate elements (year, month, day and so on)"},
  {"doc-date-now", br_Doc_Date_Now, "(brst/doc-date-now pdf)\n\n"},
  {"date-validate", br_Date_Validate, "(brst/date-validate date)\n\nValidates internal date structure"},
  // destination.lsp
  {"destination-setfith", br_Destination_SetFitH, "(brst/destination-setfith dst top)\n\nDefine page appearance to fit page width within the window and set top position of the page \\c top parameter."},
  {"destination-setfitbh", br_Destination_SetFitBH, "(brst/destination-setfitbh dst top)\n\nDefine page appearance to fit page bounding box width within the window and set top position of the page \\c top parameter."},
  {"destination-setfitb", br_Destination_SetFitB, "(brst/destination-setfitb dst)\n\nSet page appearance to display page bounding box within the window"},
  {"destination-setfitr", br_Destination_SetFitR, "(brst/destination-setfitr dst left bottom right top)\n\nDefine page appearance with three parameters which are \\c left, \\c top, \\c right, \\c bottom"},
  {"destination-setfitv", br_Destination_SetFitV, "(brst/destination-setfitv dst left)\n\nDefine page appearance to fit page height within the window and set left position of the page \\c left parameter."},
  {"destination-setfit", br_Destination_SetFit, "(brst/destination-setfit dst)\n\nSet page appearance to display entire page within the window"},
  {"destination-setfitbv", br_Destination_SetFitBV, "(brst/destination-setfitbv dst left)\n\nDefine page appearance to fit page bounding box height within the window and set left position of the page \\c left parameter."},
  {"destination-setxyz", br_Destination_SetXYZ, "(brst/destination-setxyz dst left top zoom)\n\nDefine page appearance with three parameters which are \\c left, \\c top and \\c zoom."},
  // doc_compression.lsp
  {"doc-setcompressionmode", br_Doc_SetCompressionMode, "(brst/doc-setcompressionmode pdf mode)\n\nSet document compression mode."},
  // doc_embedded_file.lsp
  {"doc-attachfile", br_Doc_AttachFile, "(brst/doc-attachfile pdf file)\n\nAttaches file given to document."},
  // doc_encoder.lsp
  {"doc-encoder-setcurrent", br_Doc_Encoder_SetCurrent, "(brst/doc-encoder-setcurrent pdf encoding_name)\n\nSet current encoder for document"},
  {"doc-encoder-current", br_Doc_Encoder_Current, "(brst/doc-encoder-current pdf)\n\nGet current encoder handle of document object"},
  {"doc-encoder-prepare", br_Doc_Encoder_Prepare, "(brst/doc-encoder-prepare pdf encoding_name)\n\nGet encoder object handle by specified encoding name"},
  // doc_encoding_utf.lsp
  {"doc-useutfencodings", br_Doc_UseUTFEncodings, "(brst/doc-useutfencodings pdf)\n\nEnable UTF-8 encoding.\\n\\n  Application can include UTF-8 encoded Unicode text (up to 3-byte UTF-8 sequences).\\n\\n  \\note UTF-8 encoding works only with TrueType fonts."},
  // doc_ext_gstate.lsp
  {"doc-extgstate-new", br_Doc_ExtGState_New, "(brst/doc-extgstate-new pdf)\n\nCreate extended graphical state object descriptor ExtGState. (Table 58)."},
  // doc_font.lsp
  {"doc-type1font-loadfromfile", br_Doc_Type1Font_LoadFromFile, "(brst/doc-type1font-loadfromfile pdf afm_filename data_filename)\n\nLoad Type1 font from external file and register it in the document object."},
  {"doc-ttfont-loadfromfile", br_Doc_TTFont_LoadFromFile, "(brst/doc-ttfont-loadfromfile pdf filename embedding)\n\nGet requested font object handle."},
  {"doc-font", br_Doc_Font, "(brst/doc-font pdf font_name encoding_name)\n\nGet requested font object handle."},
  {"doc-ttfont-loadfromfile2", br_Doc_TTFont_LoadFromFile2, "(brst/doc-ttfont-loadfromfile2 pdf filename index embedding)\n\nLoad TrueType font from TrueType Collection file (*.ttc) and register it in the document object"},
  // doc_image_jpeg.lsp
  {"doc-image-jpeg-loadfromfile", br_Doc_Image_Jpeg_LoadFromFile, "(brst/doc-image-jpeg-loadfromfile pdf filename)\n\nLoad external JPEG image file"},
  // doc_image_png.lsp
  {"doc-image-png-loadfromfile2", br_Doc_Image_Png_LoadFromFile2, "(brst/doc-image-png-loadfromfile2 pdf filename)\n\nAsynchronous loading of external PNG image file"},
  {"doc-image-png-loadfromfile", br_Doc_Image_Png_LoadFromFile, "(brst/doc-image-png-loadfromfile pdf filename)\n\nLoad external PNG image file"},
  // doc_image_tiff.lsp
  {"doc-image-raw-loadfromfile", br_Doc_Image_Raw_LoadFromFile, "(brst/doc-image-raw-loadfromfile pdf filename width height color_space)\n\nLoad RAW format image from file"},
  // doc_info.lsp
  {"doc-setinfoattr", br_Doc_SetInfoAttr, "(brst/doc-setinfoattr pdf type value)\n\nSet the text of \\c info dictionary attribute using current encoding of the document."},
  {"doc-setinfodateattr", br_Doc_SetInfoDateAttr, "(brst/doc-setinfodateattr pdf type value)\n\nSet date atturbute of \\c info dictionary."},
  // doc_matrix.lsp
  {"doc-matrix-skew", br_Doc_Matrix_Skew, "(brst/doc-matrix-skew pdf m a b)\n\nCreate skew transformation matrix. Coordinates skewed to \\c a and \\c b."},
  {"doc-matrix-translate", br_Doc_Matrix_Translate, "(brst/doc-matrix-translate pdf m dx dy)\n\nCreate translate transformation matrix. Coordinates translated to \\c dx and \\c dy."},
  {"doc-matrix-rotatedeg", br_Doc_Matrix_RotateDeg, "(brst/doc-matrix-rotatedeg pdf m degrees)\n\nCreate rotate transformation matrix. Coordinates rotated to \\c angle (degrees)."},
  {"doc-matrix-identity", br_Doc_Matrix_Identity, "(brst/doc-matrix-identity pdf)\n\nCreate identity transformation matrix."},
  {"doc-matrix-scale", br_Doc_Matrix_Scale, "(brst/doc-matrix-scale pdf m sx sy)\n\nCreate scale transformation matrix. Coordinates scaled to \\c sx and \\c sy."},
  {"doc-matrix-multiply", br_Doc_Matrix_Multiply, "(brst/doc-matrix-multiply pdf m n)\n\nMultiply transformation matrices. Transformation matrix as a result of multiplication of matrices \\c m and \\c n."},
  {"doc-matrix-free", br_Doc_Matrix_Free, "(brst/doc-matrix-free m)\n\nFree transformation matrix memory."},
  {"doc-matrix-rotate", br_Doc_Matrix_Rotate, "(brst/doc-matrix-rotate pdf m angle)\n\nCreate rotate transformation matrix. Coordinates rotated to \\c angle (radians)."},
  // doc_output_intent.lsp
  {"doc-outputintent-add", br_Doc_OutputIntent_Add, "(brst/doc-outputintent-add pdf intent)\n\n"},
  {"doc-outputintent-new", br_Doc_OutputIntent_New, "(brst/doc-outputintent-new pdf identifier condition registry info outputProfile)\n\n"},
  // doc_page.lsp
  {"doc-page-addlabel", br_Doc_Page_AddLabel, "(brst/doc-page-addlabel pdf page_num style first_page prefix)\n\nSet labeling style for page number range."},
  {"doc-page-layout", br_Doc_Page_Layout, "(brst/doc-page-layout pdf)\n\nReturn page display layout on success. If page layout is not set, returns \\ref BRST_PAGE_LAYOUT_LAST."},
  {"doc-page-add", br_Doc_Page_Add, "(brst/doc-page-add pdf)\n\nCreate page and add it to document end."},
  {"doc-page-setlayout", br_Doc_Page_SetLayout, "(brst/doc-page-setlayout pdf layout)\n\nSet page display layout. If attribute is not set, the setting of the viewer application is used."},
  {"doc-page-byindex", br_Doc_Page_ByIndex, "(brst/doc-page-byindex pdf index)\n\nReturn document page, denoted by index."},
  {"doc-page-current", br_Doc_Page_Current, "(brst/doc-page-current pdf)\n\nReturn current document page."},
  {"doc-page-mode", br_Doc_Page_Mode, "(brst/doc-page-mode pdf)\n\nReturn page display mode."},
  {"doc-page-insert", br_Doc_Page_Insert, "(brst/doc-page-insert pdf page)\n\nCreate page and insert it before page \\c page."},
  {"doc-page-setmode", br_Doc_Page_SetMode, "(brst/doc-page-setmode pdf mode)\n\nSet page display mode."},
  {"doc-pages-setconfiguration", br_Doc_Pages_SetConfiguration, "(brst/doc-pages-setconfiguration pdf page_per_pages)\n\nSpecify number of pages 'Pages' object can own.\\n\\n  In the default setting, a \\ref BRST_Doc object has one 'Pages' object as root of pages.\\n  All 'Page' objects are created as a child of 'Pages' object. Since 'Pages' object can\\n  own only 8191 child objects, the maximum number of pages are 8191 pages. Additionally,\\n  the case when there are a lot of \"Page\" object under one \"Pages\" object is not good,\\n  since it causes performance degradation of a viewer application.\\n\\n  An application can change the setting of a pages tree by invoking BRST_SetPagesConfiguration().\\n  If 'page_per_pages' parameter is set to more than zero, a two-tier pages tree is created.\\n  A root 'Pages' object can own 8191 'Pages' object, and each lower 'Pages' object can own\\n  \\c page_per_pages 'Page' objects. As a result, the maximum number of pages becomes\\n  \\a 8191 * \\a page_per_pages pages. An application cannot invoke BRST_SetPageConfiguration()\\n  after a page is added to document."},
  // doc_page_pattern.lsp
  {"doc-dict-rgbpatternfill-select", br_Doc_Dict_RGBPatternFill_Select, "(brst/doc-dict-rgbpatternfill-select pdf dict r g b pattern)\n\n"},
  {"doc-page-rgbpatternfill-select", br_Doc_Page_RGBPatternFill_Select, "(brst/doc-page-rgbpatternfill-select pdf page r g b pattern)\n\n"},
  {"doc-dict-rgbpatternfilluint-select", br_Doc_Dict_RGBPatternFillUint_Select, "(brst/doc-dict-rgbpatternfilluint-select pdf dict r g b pattern)\n\n"},
  {"doc-dict-rgbpatternfillhex-select", br_Doc_Dict_RGBPatternFillHex_Select, "(brst/doc-dict-rgbpatternfillhex-select pdf dict rgb pattern)\n\n"},
  {"doc-page-rgbpatternfillhex-select", br_Doc_Page_RGBPatternFillHex_Select, "(brst/doc-page-rgbpatternfillhex-select pdf page rgb pattern)\n\n"},
  {"doc-page-rgbpatternfilluint-select", br_Doc_Page_RGBPatternFillUint_Select, "(brst/doc-page-rgbpatternfilluint-select pdf page r g b pattern)\n\n"},
  // doc_pattern.lsp
  {"doc-pattern-tiling-new", br_Doc_Pattern_Tiling_New, "(brst/doc-pattern-tiling-new pdf left bottom right top xstep ystep matrix)\n\nCreate tiled pattern"},
  {"doc-pattern-stream", br_Doc_Pattern_Stream, "(brst/doc-pattern-stream pat)\n\nGet stream associated with a pattern"},
  // doc_pdfa.lsp
  {"doc-pdfa-setconformance", br_Doc_PDFA_SetConformance, "(brst/doc-pdfa-setconformance pdf pdfa_type)\n\nSet PDF/A conformance level"},
  {"doc-pdfa-addxmpextension", br_Doc_PDFA_AddXmpExtension, "(brst/doc-pdfa-addxmpextension pdf xmp_description)\n\nAdd XMP metadata extension"},
  {"doc-pdfa-appendoutputintents", br_Doc_PDFA_AppendOutputIntents, "(brst/doc-pdfa-appendoutputintents pdf iccname iccdict)\n\nAppend output intent profile"},
  // doc_save.lsp
  {"doc-savetostream", br_Doc_SaveToStream, "(brst/doc-savetostream pdf)\n\n"},
  {"doc-savetofile", br_Doc_SaveToFile, "(brst/doc-savetofile pdf filename)\n\nSave document to file."},
  // doc_security.lsp
  {"doc-setpassword", br_Doc_SetPassword, "(brst/doc-setpassword pdf owner_password user_password)\n\nSet document passwords."},
  {"doc-setencryptionmode", br_Doc_SetEncryptionMode, "(brst/doc-setencryptionmode pdf mode key_len)\n\nSet the encryption mode."},
  {"doc-setpermission", br_Doc_SetPermission, "(brst/doc-setpermission pdf permission)\n\nSet document permission flags."},
  // doc_viewer.lsp
  {"doc-viewerpreference", br_Doc_ViewerPreference, "(brst/doc-viewerpreference pdf)\n\nGet viewer preferences of a document."},
  {"doc-setviewerpreference", br_Doc_SetViewerPreference, "(brst/doc-setviewerpreference pdf value)\n\nSet viewer preferences of document"},
  {"doc-setopenaction", br_Doc_SetOpenAction, "(brst/doc-setopenaction pdf open_action)\n\nSet the first page to appear when a document is opened."},
  // doc_xobject.lsp
  {"doc-xobject-new", br_Doc_XObject_New, "(brst/doc-xobject-new pdf width height scalex scaley)\n\nXObject Form object creation"},
  // error.lsp
  {"doc-error-sethandler", br_Doc_Error_SetHandler, "(brst/doc-error-sethandler pdf user_error_fn)\n\nSet custom error handler for document."},
  {"doc-error-detailcode", br_Doc_Error_DetailCode, "(brst/doc-error-detailcode pdf)\n\nReturn detailed error code of document object."},
  {"doc-error-reset", br_Doc_Error_Reset, "(brst/doc-error-reset pdf)\n\nCleanup document error\\n\\n  Once an error code is set, IO processing functions cannot be invoked.\\n  In case of executing a function after the cause of the error is fixed,\\n  an application has to invoke BRST_ResetError() to clear error-code before executing functions."},
  {"doc-error-code", br_Doc_Error_Code, "(brst/doc-error-code pdf)\n\nReturn the last error code of document object."},
  {"error-check", br_Error_Check, "(brst/error-check error)\n\nCheck error code and optionally invokes error handler."},
  // ext_gstate.lsp
  {"extgstate-setblendmode", br_ExtGState_SetBlendMode, "(brst/extgstate-setblendmode ext_gstate mode)\n\n"},
  {"extgstate-setalphafill", br_ExtGState_SetAlphaFill, "(brst/extgstate-setalphafill ext_gstate value)\n\n"},
  {"extgstate-setalphastroke", br_ExtGState_SetAlphaStroke, "(brst/extgstate-setalphastroke ext_gstate value)\n\n"},
  // font.lsp
  {"font-descent", br_Font_Descent, "(brst/font-descent font font_size)\n\n"},
  {"font-textwidth2", br_Font_TextWidth2, "(brst/font-textwidth2 font font_size word_space char_space text)\n\n"},
  // geometry.lsp
  {"page-arc", br_Page_Arc, "(brst/page-arc page x y radius angle1 angle2)\n\nAppend circle arc to current path.\\n\\n  Angles are measured in degrees, with 0 degree corresponding to the vertical direction pointing upwards from the reference point '(x, y)'."},
  {"page-setrgbstrokeuint", br_Page_SetRGBStrokeUint, "(brst/page-setrgbstrokeuint page r g b)\n\nSet stroke color (RGB) using \\ref BRST_UINT8 values."},
  {"page-curveto3", br_Page_CurveTo3, "(brst/page-curveto3 page x1 y1 x3 y3)\n\nAppend a cubic Bézier curve to the current path using control points\\n  (x<sub>1</sub>, y<sub>1</sub>) and (x<sub>3</sub>, y<sub>3</sub>), then set current point\\n  to (x<sub>3</sub>, y<sub>3</sub>).\\n\\n  \\image html img/curveto3.png."},
  {"page-fillcolorspace", br_Page_FillColorSpace, "(brst/page-fillcolorspace page)\n\nGet page current fill color space."},
  {"page-moveto", br_Page_MoveTo, "(brst/page-moveto page x y)\n\nStart new subpath and move current point for drawing path."},
  {"page-ellipse", br_Page_Ellipse, "(brst/page-ellipse page x y a b)\n\nAppend ellipse to current path."},
  {"page-linejoin", br_Page_LineJoin, "(brst/page-linejoin page)\n\nGet page current line join."},
  {"page-concat", br_Page_Concat, "(brst/page-concat page a b c d x y)\n\nConcatenate the page's transformation matrix and specified matrix.\\n\\n  For example, if you want to rotate the coordinate system of the page by 45 degrees, use BRST_Page_Concat() as follows.\\n\\n  code\\n  BRST_REAL rad = 45 / 180 * BRST_PI;\\n  BRST_Page_Concat(page, cos(rad), sin(rad), -sin(rad), cos(rad), 0, 0);\\n  endcode\\n\\n  To change the coordinate system of the page to 300 dpi, use BRST_Page_Concat() as follows.\\n\\n  \\code\\n  BRST_Page_Concat(page, 72.0f / 300.0f, 0, 0, 72.0f / 300.0f, 0, 0);\\n  \\endcode\\n\\n  Invoke BRST_Page_GSave() before BRST_Page_Concat(). Then the changes by BRST_Page_Concat() can be restored by invoking BRST_Page_GRestore().\\n\\n  \\code\\n  // Save current graphics state\\n  BRST_Page_GSave(page);\\n\\n  //Concatenate transformation matrix\\n  BRST_Page_Concat(page, 72.0f / 300.0f, 0, 0, 72.0f / 300.0f, 0, 0);\\n\\n  // Show text on translated coordinates\\n  BRST_Page_BeginText(page);\\n  BRST_Page_MoveTextPos(page, 50, 100);\\n  BRST_Page_ShowText(page, \"Text on the translated coordinates\");\\n  BRST_Page_EndText(page);\\n\\n  // Restore the graphics states\\n  BRST_Page_GRestore (page);\\n  \\endcode\\n\\n  Application can call BRST_Page_GSave() when graphics mode is \\ref BRST_GMODE_PAGE_DESCRIPTION."},
  {"page-eoclip", br_Page_Eoclip, "(brst/page-eoclip page)\n\nModifies the current clipping path by intersecting it with current path using the even-odd rule.\\n\\n  The clipping path is only modified after the succeeding painting operator.\\n  To avoid painting the current path, use the function BRST_Page_EndPath().\\n\\n  Following painting operations will only affect the regions of the page contained by the clipping path.\\n  Initially, the clipping path includes the entire page. There is no way to enlarge the current clipping path\\n  or to replace the clipping path with a new one. The functions BRST_Page_GSave() and BRST_Page_GRestore()\\n  may be used to save and restore the current graphics state, including the clipping path."},
  {"page-lineto", br_Page_LineTo, "(brst/page-lineto page x y)\n\nAppend a straight line segment from the current point to the point '(x, y)'. The new current point shall be '(x, y)'."},
  {"page-setlinecap", br_Page_SetLineCap, "(brst/page-setlinecap page line_cap)\n\nSet lines endpoints shape style."},
  {"page-linewidth", br_Page_LineWidth, "(brst/page-linewidth page)\n\nGet page current line width."},
  {"page-closepath", br_Page_ClosePath, "(brst/page-closepath page)\n\nClose the current subpath by appending a straight line segment from the current point to the starting point of the subpath."},
  {"page-setrgbfilluint", br_Page_SetRGBFillUint, "(brst/page-setrgbfilluint page r g b)\n\nSet fill color (RGB) using \\ref BRST_UINT8 values."},
  {"page-eofillstroke", br_Page_EofillStroke, "(brst/page-eofillstroke page)\n\nFill current path using the even-odd rule and then paint the path."},
  {"page-grayfill", br_Page_GrayFill, "(brst/page-grayfill page)\n\nGet page current fill color value (Gray).\\n  BRST_Page_GrayFill() is valid only when the page's fill color space is \\ref BRST_CS_DEVICE_GRAY."},
  {"page-setdash", br_Page_SetDash, "(brst/page-setdash page dash_pattern num_elem phase)\n\nSet dash pattern for lines in the page.\\n\\n  \\par Examples\\n\\n  'dash_ptn = NULL', 'num_elem = 0', 'phase = 0' (default for new page)\\n\\n  \\image html setdash1.png\\n\\n  'dash_ptn = [3]', 'num_elem = 1', 'phase = 1'\\n\\n  \\image html setdash2.png\\n\\n  'dash_ptn = [7,]', 'num_elem = 2', 'phase = 2'\\n\\n  \\image html setdash3.png\\n\\n  'dash_ptn = [8,]', 'num_elem = 4', 'phase = 0'\\n\\n  \\image html setdash4.png"},
  {"page-setrgbstrokehex", br_Page_SetRGBStrokeHex, "(brst/page-setrgbstrokehex page rgb)\n\nSet stroke color (RGB) using \\ref BRST_UINT32 value."},
  {"page-closepatheofillstroke", br_Page_ClosePathEofillStroke, "(brst/page-closepatheofillstroke page)\n\nClose current path, fill current path using the even-odd rule and then paint the path."},
  {"page-skew", br_Page_Skew, "(brst/page-skew page a b)\n\nConcatenate the page's transformation matrix with skew matrix.\\n\\n  Coordinate system is skewed by an angle \\c a at \\a x axis and by angle \\c b at \\a y axis."},
  {"page-grestore", br_Page_GRestore, "(brst/page-grestore page)\n\nRestore graphics state which is saved by BRST_Page_GSave()."},
  {"page-curveto", br_Page_CurveTo, "(brst/page-curveto page x1 y1 x2 y2 x3 y3)\n\nAppend a cubic Bézier curve to the current path using control points\\n  (x<sub>1</sub>, y<sub>1</sub>) and (x<sub>2</sub>, y<sub>2</sub>)\\n  and (x<sub>3</sub>, y<sub>3</sub>), then set current point\\n  to (x<sub>3</sub>, y<sub>3</sub>).\\n\\n  \\image html img/curveto.png."},
  {"page-scale", br_Page_Scale, "(brst/page-scale page sx sy)\n\nConcatenate the page's transformation matrix with scale matrix.\\n\\n  The coordinate system is scaled such that 1 unit horizontally equals \\с sx units\\n  and 1 unit vertically equals \\с sy units in the new coordinate system."},
  {"page-fillstroke", br_Page_FillStroke, "(brst/page-fillstroke page)\n\nFill current path using the nonzero winding number rule and then paint the path."},
  {"page-linecap", br_Page_LineCap, "(brst/page-linecap page)\n\nGet page current line cap."},
  {"page-setgraystroke", br_Page_SetGrayStroke, "(brst/page-setgraystroke page value)\n\nSet stroke color (gray)."},
  {"page-translate", br_Page_Translate, "(brst/page-translate page dx dy)\n\nConcatenate the page's transformation matrix with translation matrix.\\n\\n  Coordinate system is translated by \\c dx and \\c dy coordinate units."},
  {"page-setlinejoin", br_Page_SetLineJoin, "(brst/page-setlinejoin page line_join)\n\nSet line join shape style."},
  {"page-gsave", br_Page_GSave, "(brst/page-gsave page)\n\nSave the page's current graphics state to the stack.\\n\\n  Application can call BRST_Page_GSave() and can restore saved state by calling BRST_Page_GRestore().\\n\\n  Saved by BRST_Page_GSave() state parameters are:\\n\\n    - Character Spacing\\n    - Clipping Path\\n    - Dash Mode\\n    - Fill Color\\n    - Flatness\\n    - Font\\n    - Font Size\\n    - Horizontal Scaling\\n    - Line Width\\n    - Line Cap Style\\n    - Line Join Style\\n    - Miter Limit\\n    - Rendering Mode\\n    - Stroke Color\\n    - Text Leading\\n    - Text Rise\\n    - Transformation Matrix\\n    - Word Spacing"},
  {"page-endpath", br_Page_EndPath, "(brst/page-endpath page)\n\nFinish path object without fill or painting."},
  {"page-strokecolorspace", br_Page_StrokeColorSpace, "(brst/page-strokecolorspace page)\n\nGet page current stroke color space."},
  {"page-closepathstroke", br_Page_ClosePathStroke, "(brst/page-closepathstroke page)\n\nClose and paint current path."},
  {"page-flat", br_Page_Flat, "(brst/page-flat page)\n\nGet page current flatness value."},
  {"page-matrix", br_Page_Matrix, "(brst/page-matrix page)\n\nGet page current transformation matrix."},
  {"page-closepathfillstroke", br_Page_ClosePathFillStroke, "(brst/page-closepathfillstroke page)\n\nClose current path, fill current path using the nonzero winding number rule, then paint path."},
  {"page-curveto2", br_Page_CurveTo2, "(brst/page-curveto2 page x2 y2 x3 y3)\n\nAppend Bézier curve to current path using current point and (x<sub>2</sub>, y<sub>2</sub>)\\n  and (x<sub>3</sub>, y<sub>3</sub>) as control points. Then current point is set to (x<sub>3</sub>, y<sub>3</sub>).\\n\\n  \\image html img/curveto2.png"},
  {"page-setlinewidth", br_Page_SetLineWidth, "(brst/page-setlinewidth page line_width)\n\nSet width of the line used to stroke paths."},
  {"page-setcmykstroke", br_Page_SetCMYKStroke, "(brst/page-setcmykstroke page c m y k)\n\nSet stroke color (CMYK)."},
  {"page-rectangle", br_Page_Rectangle, "(brst/page-rectangle page x y width height)\n\nAppend a rectangle to the current path as a complete\\nsubpath, with lower-left corner '(x, y)' and dimensions \\c width\\nand \\c height in user space."},
  {"page-setmiterlimit", br_Page_SetMiterLimit, "(brst/page-setmiterlimit page miter_limit)\n\nSet miter limit for line joins.\\n\\n  A miter limit of 1.414 converts miters to bevels for \\c angle less than \\c 90 degrees,\\n  a limit of \\c 2.0 converts them for \\c angle less than 60 degrees, and a limit of 10.0\\n  converts them for angle less than approximately 11.5 degrees."},
  {"page-setcmykfill", br_Page_SetCMYKFill, "(brst/page-setcmykfill page c m y k)\n\nSet fill color (CMYK)."},
  {"page-stroke", br_Page_Stroke, "(brst/page-stroke page)\n\nPaint current path."},
  {"page-setflat", br_Page_SetFlat, "(brst/page-setflat page flatness)\n\nSet flatness tolerance for curves rendering."},
  {"page-circle", br_Page_Circle, "(brst/page-circle page x y radius)\n\nAppend circle to current path."},
  {"page-setrgbstroke", br_Page_SetRGBStroke, "(brst/page-setrgbstroke page r g b)\n\nSet stroke color (RGB)."},
  {"page-setrgbfill", br_Page_SetRGBFill, "(brst/page-setrgbfill page r g b)\n\nSet fill color (RGB)."},
  {"page-setrgbfillhex", br_Page_SetRGBFillHex, "(brst/page-setrgbfillhex page rgb)\n\nSet fill color (RGB) using \\ref BRST_UINT32 value."},
  {"page-miterlimit", br_Page_MiterLimit, "(brst/page-miterlimit page)\n\nGet page current miter limit."},
  {"page-eofill", br_Page_Eofill, "(brst/page-eofill page)\n\nFill current path using even-odd rule."},
  {"page-rotatedeg", br_Page_RotateDeg, "(brst/page-rotatedeg page degrees)\n\nConcatenate the page's transformation matrix with rotate matrix.\\n\\n  The coordinate system axes are rotated counterclockwise by angle \\с degrees (in degrees)."},
  {"page-fill", br_Page_Fill, "(brst/page-fill page)\n\nFill current path using nonzero winding number rule."},
  {"page-rotate", br_Page_Rotate, "(brst/page-rotate page radians)\n\nConcatenate the page's transformation matrix with rotate matrix.\\n\\n  The coordinate system axes are rotated counterclockwise by angle \\с degrees (in radians)."},
  {"page-graystroke", br_Page_GrayStroke, "(brst/page-graystroke page)\n\nGet page current stroke color value (Gray).\\n  BRST_Page_Gray() is valid only when the page's fill color space is \\ref BRST_CS_DEVICE_GRAY."},
  {"page-clip", br_Page_Clip, "(brst/page-clip page)\n\nModifies the current clipping path by intersecting it with the current path, using\\n  the nonzero winding number rule to determine which regions lie inside the clipping path.\\n\\n  The clipping path is only modified after the succeeding painting operator.\\n  To avoid painting the current path, use the function BRST_Page_EndPath().\\n\\n  Following painting operations will only affect the regions of the page contained by the clipping path.\\n  Initially, the clipping path includes the entire page. There is no way to enlarge the current clipping path\\n  or to replace the clipping path with a new one. The functions BRST_Page_GSave() and BRST_Page_GRestore()\\n  may be used to save and restore the current graphics state, including the clipping path."},
  {"page-setgrayfill", br_Page_SetGrayFill, "(brst/page-setgrayfill page value)\n\nSet fill color (gray)."},
  // image.lsp
  {"image-height", br_Image_Height, "(brst/image-height image)\n\nGets the height of the image."},
  {"image-colorspace", br_Image_ColorSpace, "(brst/image-colorspace image)\n\nGets the image color space name."},
  {"image-width", br_Image_Width, "(brst/image-width image)\n\nGets the width of the image."},
  {"image-bitspercomponent", br_Image_BitsPerComponent, "(brst/image-bitspercomponent image)\n\nGets the bit count used to describe each color component."},
  {"image-addsmask", br_Image_AddSMask, "(brst/image-addsmask image smask)\n\nAdds a soft mask (SMask) to the image."},
  {"image-setcolormask", br_Image_SetColorMask, "(brst/image-setcolormask image rmin rmax gmin gmax bmin bmax)\n\nSets the transparent color of the image by the RGB range values. The image must have RGB color space."},
  {"image-setmaskimage", br_Image_SetMaskImage, "(brst/image-setmaskimage image mask_image)\n\nSets an image mask. The mask image must be a 1-bit gray-scale image."},
  // page_routines.lsp
  {"page-destination-new", br_Page_Destination_New, "(brst/page-destination-new page)\n\n"},
  {"page-setextgstate", br_Page_SetExtGState, "(brst/page-setextgstate page ext_gstate)\n\n"},
  {"page-mmgr", br_Page_MMgr, "(brst/page-mmgr page)\n\n"},
  {"page-width", br_Page_Width, "(brst/page-width page)\n\n"},
  {"page-setrotate", br_Page_SetRotate, "(brst/page-setrotate page angle)\n\n"},
  {"page-horizontalscaling", br_Page_HorizontalScaling, "(brst/page-horizontalscaling page)\n\n"},
  {"page-rawwrite", br_Page_RawWrite, "(brst/page-rawwrite page data)\n\n"},
  {"page-setslideshow", br_Page_SetSlideShow, "(brst/page-setslideshow page type disp_time trans_time)\n\n"},
  {"page-setboundary", br_Page_SetBoundary, "(brst/page-setboundary page boundary left bottom right top)\n\n"},
  {"page-sethorizontalscaling", br_Page_SetHorizontalScaling, "(brst/page-sethorizontalscaling page value)\n\n"},
  {"page-gmode", br_Page_GMode, "(brst/page-gmode page)\n\n"},
  {"page-insert-shared-content-stream", br_Page_Insert_Shared_Content_Stream, "(brst/page-insert-shared-content-stream page shared_stream)\n\n"},
  {"page-setheight", br_Page_SetHeight, "(brst/page-setheight page value)\n\n"},
  {"page-gstatedepth", br_Page_GStateDepth, "(brst/page-gstatedepth page)\n\n"},
  {"page-height", br_Page_Height, "(brst/page-height page)\n\n"},
  {"page-setzoom", br_Page_SetZoom, "(brst/page-setzoom page zoom)\n\n"},
  {"page-setsize", br_Page_SetSize, "(brst/page-setsize page size orientation)\n\n"},
  {"page-setwidth", br_Page_SetWidth, "(brst/page-setwidth page value)\n\n"},
  // page_xobject.lsp
  {"dict-xobject-execute", br_Dict_XObject_Execute, "(brst/dict-xobject-execute dict xobj)\n\n"},
  {"page-xobject-execute", br_Page_XObject_Execute, "(brst/page-xobject-execute page xobj)\n\nDraw XObject using current graphics context.\\n\\n  XObject can be created using \\ref BRST_Doc_Page_XObject_New() and can include drawing commands as well\\n  other data.\\n\\n  This is also used by \\ref BRST_Page_Image_Draw() to draw the \\ref BRST_Image by first calling\\n  \\ref BRST_Page_GSave() and \\ref BRST_Page_Concat() and then calling \\ref BRST_Page_GRestore()\\n  after BRST_Page_XObject_Execute(). It could be used manually to rotate an image."},
  // stream_geometry.lsp
  {"stream-fillstroke", br_Stream_FillStroke, "(brst/stream-fillstroke page)\n\nFill current path using the nonzero winding number rule and then paint the path."},
  {"stream-setgrayfill", br_Stream_SetGrayFill, "(brst/stream-setgrayfill page value)\n\nSet fill color (gray)."},
  {"stream-rectangle", br_Stream_Rectangle, "(brst/stream-rectangle page x y width height)\n\nAppend a rectangle to the current path as a complete\\nsubpath, with lower-left corner '(x, y)' and dimensions \\c width\\nand \\c height in user space."},
  {"stream-gsave", br_Stream_GSave, "(brst/stream-gsave page)\n\nSave the page's current graphics state to the stack.\\n\\n  Application can call BRST_Stream_GSave() and can restore saved state by calling BRST_Stream_GRestore().\\n\\n  Saved by BRST_Stream_GSave() state parameters are:\\n\\n    - Character Spacing\\n    - Clipping Path\\n    - Dash Mode\\n    - Fill Color\\n    - Flatness\\n    - Font\\n    - Font Size\\n    - Horizontal Scaling\\n    - Line Width\\n    - Line Cap Style\\n    - Line Join Style\\n    - Miter Limit\\n    - Rendering Mode\\n    - Stroke Color\\n    - Text Leading\\n    - Text Rise\\n    - Transformation Matrix\\n    - Word Spacing"},
  {"stream-setcmykfill", br_Stream_SetCMYKFill, "(brst/stream-setcmykfill page c m y k)\n\nSet fill color (CMYK)."},
  {"stream-setrgbfilluint", br_Stream_SetRGBFillUint, "(brst/stream-setrgbfilluint page r g b)\n\nSet fill color (RGB) using \\ref BRST_UINT8 values."},
  {"stream-rotate", br_Stream_Rotate, "(brst/stream-rotate page radians)\n\nConcatenate the page's transformation matrix with rotate matrix.\\n\\n  The coordinate system axes are rotated counterclockwise by angle \\с degrees (in radians)."},
  {"stream-eofillstroke", br_Stream_EofillStroke, "(brst/stream-eofillstroke page)\n\nFill current path using the even-odd rule and then paint the path."},
  {"stream-curveto", br_Stream_CurveTo, "(brst/stream-curveto page x1 y1 x2 y2 x3 y3)\n\nAppend a cubic Bézier curve to the current path using control points\\n  (x<sub>1</sub>, y<sub>1</sub>) and (x<sub>2</sub>, y<sub>2</sub>)\\n  and (x<sub>3</sub>, y<sub>3</sub>), then set current point\\n  to (x<sub>3</sub>, y<sub>3</sub>).\\n\\n  \\image html img/curveto.png."},
  {"stream-concat", br_Stream_Concat, "(brst/stream-concat page a b c d x y)\n\nConcatenate the page's transformation matrix and specified matrix.\\n\\n  For example, if you want to rotate the coordinate system of the page by 45 degrees, use BRST_Stream_Concat() as follows.\\n\\n  code\\n  BRST_REAL rad = 45 / 180 * BRST_PI;\\n  BRST_Stream_Concat(page, cos(rad), sin(rad), -sin(rad), cos(rad), 0, 0);\\n  endcode\\n\\n  To change the coordinate system of the page to 300 dpi, use BRST_Stream_Concat() as follows.\\n\\n  \\code\\n  BRST_Stream_Concat(page, 72.0f / 300.0f, 0, 0, 72.0f / 300.0f, 0, 0);\\n  \\endcode\\n\\n  Invoke BRST_Stream_GSave() before BRST_Stream_Concat(). Then the changes by BRST_Stream_Concat() can be restored by invoking BRST_Stream_GRestore().\\n\\n  \\code\\n  // Save current graphics state\\n  BRST_Stream_GSave(page);\\n\\n  //Concatenate transformation matrix\\n  BRST_Stream_Concat(page, 72.0f / 300.0f, 0, 0, 72.0f / 300.0f, 0, 0);\\n\\n  // Show text on translated coordinates\\n  BRST_Stream_BeginText(page);\\n  BRST_Stream_MoveTextPos(page, 50, 100);\\n  BRST_Stream_ShowText(page, \"Text on the translated coordinates\");\\n  BRST_Stream_EndText(page);\\n\\n  // Restore the graphics states\\n  BRST_Stream_GRestore (page);\\n  \\endcode\\n\\n  Application can call BRST_Stream_GSave() when graphics mode is \\ref BRST_GMODE_PAGE_DESCRIPTION."},
  {"stream-fill", br_Stream_Fill, "(brst/stream-fill page)\n\nFill current path using nonzero winding number rule."},
  {"stream-closepathfillstroke", br_Stream_ClosePathFillStroke, "(brst/stream-closepathfillstroke page)\n\nClose current path, fill current path using the nonzero winding number rule, then paint path."},
  {"stream-setrgbfill", br_Stream_SetRGBFill, "(brst/stream-setrgbfill page r g b)\n\nSet fill color (RGB)."},
  {"stream-setcmykstroke", br_Stream_SetCMYKStroke, "(brst/stream-setcmykstroke page c m y k)\n\nSet stroke color (CMYK)."},
  {"stream-closepath", br_Stream_ClosePath, "(brst/stream-closepath page)\n\nClose the current subpath by appending a straight line segment from the current point to the starting point of the subpath."},
  {"stream-setgraystroke", br_Stream_SetGrayStroke, "(brst/stream-setgraystroke page value)\n\nSet stroke color (gray)."},
  {"stream-curveto2", br_Stream_CurveTo2, "(brst/stream-curveto2 page x2 y2 x3 y3)\n\nAppend Bézier curve to current path using current point and (x<sub>2</sub>, y<sub>2</sub>)\\n  and (x<sub>3</sub>, y<sub>3</sub>) as control points. Then current point is set to (x<sub>3</sub>, y<sub>3</sub>).\\n\\n  \\image html img/curveto2.png"},
  {"stream-setdash", br_Stream_SetDash, "(brst/stream-setdash page dash_pattern num_elem phase)\n\nSet dash pattern for lines in the page.\\n\\n  \\par Examples\\n\\n  'dash_ptn = NULL', 'num_elem = 0', 'phase = 0' (default for new page)\\n\\n  \\image html setdash1.png\\n\\n  'dash_ptn = [3]', 'num_elem = 1', 'phase = 1'\\n\\n  \\image html setdash2.png\\n\\n  'dash_ptn = [7,]', 'num_elem = 2', 'phase = 2'\\n\\n  \\image html setdash3.png\\n\\n  'dash_ptn = [8,]', 'num_elem = 4', 'phase = 0'\\n\\n  \\image html setdash4.png"},
  {"stream-rotatedeg", br_Stream_RotateDeg, "(brst/stream-rotatedeg page degrees)\n\nConcatenate the page's transformation matrix with rotate matrix.\\n\\n  The coordinate system axes are rotated counterclockwise by angle \\с degrees (in degrees)."},
  {"stream-curveto3", br_Stream_CurveTo3, "(brst/stream-curveto3 page x1 y1 x3 y3)\n\nAppend a cubic Bézier curve to the current path using control points\\n  (x<sub>1</sub>, y<sub>1</sub>) and (x<sub>3</sub>, y<sub>3</sub>), then set current point\\n  to (x<sub>3</sub>, y<sub>3</sub>).\\n\\n  \\image html img/curveto3.png."},
  {"stream-setlinecap", br_Stream_SetLineCap, "(brst/stream-setlinecap page line_cap)\n\nSet lines endpoints shape style."},
  {"stream-setflat", br_Stream_SetFlat, "(brst/stream-setflat page flatness)\n\nSet flatness tolerance for curves rendering."},
  {"stream-eoclip", br_Stream_Eoclip, "(brst/stream-eoclip page)\n\nModifies the current clipping path by intersecting it with current path using the even-odd rule.\\n\\n  The clipping path is only modified after the succeeding painting operator.\\n  To avoid painting the current path, use the function BRST_Stream_EndPath().\\n\\n  Following painting operations will only affect the regions of the page contained by the clipping path.\\n  Initially, the clipping path includes the entire page. There is no way to enlarge the current clipping path\\n  or to replace the clipping path with a new one. The functions BRST_Stream_GSave() and BRST_Stream_GRestore()\\n  may be used to save and restore the current graphics state, including the clipping path."},
  {"stream-circle", br_Stream_Circle, "(brst/stream-circle page x y radius)\n\nAppend circle to current path."},
  {"stream-setrgbstrokeuint", br_Stream_SetRGBStrokeUint, "(brst/stream-setrgbstrokeuint page r g b)\n\nSet stroke color (RGB) using \\ref BRST_UINT8 values."},
  {"stream-scale", br_Stream_Scale, "(brst/stream-scale page sx sy)\n\nConcatenate the page's transformation matrix with scale matrix.\\n\\n  The coordinate system is scaled such that 1 unit horizontally equals \\с sx units\\n  and 1 unit vertically equals \\с sy units in the new coordinate system."},
  {"stream-grestore", br_Stream_GRestore, "(brst/stream-grestore page)\n\nRestore graphics state which is saved by BRST_Stream_GSave()."},
  {"stream-lineto", br_Stream_LineTo, "(brst/stream-lineto page x y)\n\nAppend a straight line segment from the current point to the point '(x, y)'. The new current point shall be '(x, y)'."},
  {"stream-moveto", br_Stream_MoveTo, "(brst/stream-moveto page x y)\n\nStart new subpath and move current point for drawing path."},
  {"stream-closepatheofillstroke", br_Stream_ClosePathEofillStroke, "(brst/stream-closepatheofillstroke page)\n\nClose current path, fill current path using the even-odd rule and then paint the path."},
  {"stream-setlinewidth", br_Stream_SetLineWidth, "(brst/stream-setlinewidth page line_width)\n\nSet width of the line used to stroke paths."},
  {"stream-eofill", br_Stream_Eofill, "(brst/stream-eofill page)\n\nFill current path using even-odd rule."},
  {"stream-setrgbstrokehex", br_Stream_SetRGBStrokeHex, "(brst/stream-setrgbstrokehex page rgb)\n\nSet stroke color (RGB) using \\ref BRST_UINT32 value."},
  {"stream-setlinejoin", br_Stream_SetLineJoin, "(brst/stream-setlinejoin page line_join)\n\nSet line join shape style."},
  {"stream-translate", br_Stream_Translate, "(brst/stream-translate page dx dy)\n\nConcatenate the page's transformation matrix with translation matrix.\\n\\n  Coordinate system is translated by \\c dx and \\c dy coordinate units."},
  {"stream-closepathstroke", br_Stream_ClosePathStroke, "(brst/stream-closepathstroke page)\n\nClose and paint current path."},
  {"stream-setrgbfillhex", br_Stream_SetRGBFillHex, "(brst/stream-setrgbfillhex page rgb)\n\nSet fill color (RGB) using \\ref BRST_UINT32 value."},
  {"stream-setmiterlimit", br_Stream_SetMiterLimit, "(brst/stream-setmiterlimit page miter_limit)\n\nSet miter limit for line joins.\\n\\n  A miter limit of 1.414 converts miters to bevels for \\c angle less than \\c 90 degrees,\\n  a limit of \\c 2.0 converts them for \\c angle less than 60 degrees, and a limit of 10.0\\n  converts them for angle less than approximately 11.5 degrees."},
  {"stream-stroke", br_Stream_Stroke, "(brst/stream-stroke page)\n\nPaint current path."},
  {"stream-skew", br_Stream_Skew, "(brst/stream-skew page a b)\n\nConcatenate the page's transformation matrix with skew matrix.\\n\\n  Coordinate system is skewed by an angle \\c a at \\a x axis and by angle \\c b at \\a y axis."},
  {"stream-endpath", br_Stream_EndPath, "(brst/stream-endpath page)\n\nFinish path object without fill or painting."},
  {"stream-setrgbstroke", br_Stream_SetRGBStroke, "(brst/stream-setrgbstroke page r g b)\n\nSet stroke color (RGB)."},
  {"stream-clip", br_Stream_Clip, "(brst/stream-clip page)\n\nModifies the current clipping path by intersecting it with the current path, using\\n  the nonzero winding number rule to determine which regions lie inside the clipping path.\\n\\n  The clipping path is only modified after the succeeding painting operator.\\n  To avoid painting the current path, use the function BRST_Stream_EndPath().\\n\\n  Following painting operations will only affect the regions of the page contained by the clipping path.\\n  Initially, the clipping path includes the entire page. There is no way to enlarge the current clipping path\\n  or to replace the clipping path with a new one. The functions BRST_Stream_GSave() and BRST_Stream_GRestore()\\n  may be used to save and restore the current graphics state, including the clipping path."},
  // stream_text.lsp
  {"stream-settextmatrix", br_Stream_SetTextMatrix, "(brst/stream-settextmatrix stream a b c d x y)\n\nSet text transformation matrix."},
  {"stream-textout", br_Stream_TextOut, "(brst/stream-textout stream font xpos ypos text)\n\nPut text to the specified position."},
  {"stream-movetextpos2", br_Stream_MoveTextPos2, "(brst/stream-movetextpos2 stream x y)\n\nChange current text position using specified offsets.\\n\\n  If the current text position is (x<sub>1</sub>, y<sub>1</sub>), the new text position will be (x<sub>1</sub> + x, y<sub>1</sub> + y)."},
  {"stream-settextrenderingmode", br_Stream_SetTextRenderingMode, "(brst/stream-settextrenderingmode stream mode)\n\nSet text rendering mode."},
  {"stream-begintext", br_Stream_BeginText, "(brst/stream-begintext stream)\n\nBegins a text object and sets the initial text position to '(0, 0)'."},
  {"stream-showtext", br_Stream_ShowText, "(brst/stream-showtext stream font text)\n\nPut text at the current text position on the page."},
  {"stream-movetonextline", br_Stream_MoveToNextLine, "(brst/stream-movetonextline stream)\n\nMove current position for text showing to the beginning of the next line.\\n\\n  New position is calculated with current text transition matrix."},
  {"stream-settextleading", br_Stream_SetTextLeading, "(brst/stream-settextleading stream value)\n\nSet text leading (line spacing)."},
  {"stream-endtext", br_Stream_EndText, "(brst/stream-endtext stream)\n\nFinish text object."},
  {"stream-movetextpos", br_Stream_MoveTextPos, "(brst/stream-movetextpos stream x y)\n\nChange current text position using specified offsets.\\n\\n  If the current text position is (x<sub>1</sub>, y<sub>1</sub>), the new text position will be (x<sub>1</sub> + x, y<sub>1</sub> + y)."},
  // text.lsp
  {"page-textout", br_Page_TextOut, "(brst/page-textout page xpos ypos text)\n\nPut text to the specified position."},
  {"page-textwidth", br_Page_TextWidth, "(brst/page-textwidth page text)\n\nCalculate text width based on current font settings."},
  {"page-showtext", br_Page_ShowText, "(brst/page-showtext page text)\n\nPut text at the current text position on the page."},
  {"page-wordspace", br_Page_WordSpace, "(brst/page-wordspace page)\n\nGet page's current word spacing value."},
  {"page-settextrise", br_Page_SetTextRise, "(brst/page-settextrise page value)\n\nMove text position vertically by given amount.\\n\\n  Useful for making subscripts or superscripts."},
  {"page-setfontandsize", br_Page_SetFontAndSize, "(brst/page-setfontandsize page font size)\n\nSet the type of font and its size."},
  {"page-movetextpos2", br_Page_MoveTextPos2, "(brst/page-movetextpos2 page x y)\n\nChange current text position using specified offsets and update text leading simultaneously.\\n\\n  Also, text leading is set to \\c -y."},
  {"page-charspace", br_Page_CharSpace, "(brst/page-charspace page)\n\nGet page's current character spacing value."},
  {"page-textmatrix", br_Page_TextMatrix, "(brst/page-textmatrix page)\n\nGet page's current text transformation matrix."},
  {"page-currentfontsize", br_Page_CurrentFontSize, "(brst/page-currentfontsize page)\n\nGet page's current font size."},
  {"page-setcharspace", br_Page_SetCharSpace, "(brst/page-setcharspace page value)\n\nSet text character spacing."},
  {"page-endtext", br_Page_EndText, "(brst/page-endtext page)\n\nFinish text object."},
  {"page-textleading", br_Page_TextLeading, "(brst/page-textleading page)\n\nGet page's current text leading value."},
  {"page-movetonextline", br_Page_MoveToNextLine, "(brst/page-movetonextline page)\n\nMove current position for text showing to the beginning of the next line.\\n\\n  New position is calculated with current text transition matrix."},
  {"page-showtextnextlineex", br_Page_ShowTextNextLineEx, "(brst/page-showtextnextlineex page word_space char_space text)\n\nMove current text position to the start of the next line, adjust word and character spacing, then puts the text."},
  {"page-settextleading", br_Page_SetTextLeading, "(brst/page-settextleading page value)\n\nSet text leading (line spacing)."},
  {"page-textrenderingmode", br_Page_TextRenderingMode, "(brst/page-textrenderingmode page)\n\nGet page's current text rendering mode."},
  {"page-currentfont", br_Page_CurrentFont, "(brst/page-currentfont page)\n\nGet page's current font handle."},
  {"dict-setfontandsize", br_Dict_SetFontAndSize, "(brst/dict-setfontandsize dict font size)\n\nSet the type of font and its size."},
  {"page-movetextpos", br_Page_MoveTextPos, "(brst/page-movetextpos page x y)\n\nChange current text position using specified offsets.\\n\\n  If the current text position is (x<sub>1</sub>, y<sub>1</sub>), the new text position will be (x<sub>1</sub> + x, y<sub>1</sub> + y)."},
  {"page-settextmatrix", br_Page_SetTextMatrix, "(brst/page-settextmatrix page a b c d x y)\n\nSet text transformation matrix."},
  {"page-showtextnextline", br_Page_ShowTextNextLine, "(brst/page-showtextnextline page text)\n\nMove current text position to the start of the next line, then shows the text."},
  {"page-setwordspace", br_Page_SetWordSpace, "(brst/page-setwordspace page value)\n\nSet text word spacing."},
  {"page-textrise", br_Page_TextRise, "(brst/page-textrise page)\n\nGet page's current text rise value."},
  {"page-begintext", br_Page_BeginText, "(brst/page-begintext page)\n\nBegins a text object and sets the initial text position to '(0, 0)'."},
  {"page-settextrenderingmode", br_Page_SetTextRenderingMode, "(brst/page-settextrenderingmode page mode)\n\nSet text rendering mode."},
  // unicode_glyph.lsp
  {"glyphnametounicode", br_GlyphNameToUnicode, "(brst/glyphnametounicode glyph_name)\n\nFor given Unicode glyph name return symbol code. If glyph name is not found or not valid, return \\c 0x0000."},
  {"unicodetoglyphname", br_UnicodeToGlyphName, "(brst/unicodetoglyphname unicode)\n\nFor given symbol code return Unicode glyph name.\\n  If no glyph name found (in library) value \\c .notdef is returned."},
  // xobject.lsp
  {"xobject-stream", br_XObject_Stream, "(brst/xobject-stream xobj)\n\nReturns XObject object's stream. Stream is used for geometry commands write and similar."},

  {NULL, NULL, NULL}
};

JANET_MODULE_ENTRY(JanetTable *env) {
  janet_def(env, "mm", janet_wrap_number(BRST_MM), "Size in millimeters");
  janet_def(env, "in", janet_wrap_number(BRST_IN), "Size in inches");
  janet_def(env, "pi", janet_wrap_number(BRST_PI), "π value");
  // annotation.lsp
  janet_def(env, "annot-line-end-none", janet_wrap_integer(BRST_ANNOT_LINE_END_NONE), "No line ending");
  janet_def(env, "annot-line-end-square", janet_wrap_integer(BRST_ANNOT_LINE_END_SQUARE), "A square filled with the annotation’s interior color, if any");
  janet_def(env, "annot-line-end-circle", janet_wrap_integer(BRST_ANNOT_LINE_END_CIRCLE), "A circle filled with the annotation’s interior color, if any");
  janet_def(env, "annot-line-end-diamond", janet_wrap_integer(BRST_ANNOT_LINE_END_DIAMOND), "A diamond shape filled with the annotation’s interior color, if any");
  janet_def(env, "annot-line-end-openarrow", janet_wrap_integer(BRST_ANNOT_LINE_END_OPENARROW), "Two short lines meeting in an acute angle to form an open arrowhead");
  janet_def(env, "annot-line-end-closedarrow", janet_wrap_integer(BRST_ANNOT_LINE_END_CLOSEDARROW), "Two short lines meeting in an acute angle as in the OpenArrow style and connected by a third line to form a triangular closed arrowhead filled with the annotation’s interior color, if any");
  janet_def(env, "annot-line-end-butt", janet_wrap_integer(BRST_ANNOT_LINE_END_BUTT), "A short line at the endpoint perpendicular to the line itself");
  janet_def(env, "annot-line-end-ropenarrow", janet_wrap_integer(BRST_ANNOT_LINE_END_ROPENARROW), "Two short lines in the reverse direction from OpenArrow");
  janet_def(env, "annot-line-end-rclosedarrow", janet_wrap_integer(BRST_ANNOT_LINE_END_RCLOSEDARROW), "A triangular closed arrowhead in the reverse direction from ClosedArrow");
  janet_def(env, "annot-line-end-slash", janet_wrap_integer(BRST_ANNOT_LINE_END_SLASH), "A short line at the endpoint approximately 30 degrees clockwise from perpendicular to the line itself");
  janet_def(env, "annot-stamp-approved", janet_wrap_integer(BRST_ANNOT_STAMP_APPROVED), "Approved");
  janet_def(env, "annot-stamp-experimental", janet_wrap_integer(BRST_ANNOT_STAMP_EXPERIMENTAL), "Experimental");
  janet_def(env, "annot-stamp-notapproved", janet_wrap_integer(BRST_ANNOT_STAMP_NOTAPPROVED), "Not Approved");
  janet_def(env, "annot-stamp-asis", janet_wrap_integer(BRST_ANNOT_STAMP_ASIS), "As Is");
  janet_def(env, "annot-stamp-expired", janet_wrap_integer(BRST_ANNOT_STAMP_EXPIRED), "Expired");
  janet_def(env, "annot-stamp-notforpublicrelease", janet_wrap_integer(BRST_ANNOT_STAMP_NOTFORPUBLICRELEASE), "Not For Public Release");
  janet_def(env, "annot-stamp-confidential", janet_wrap_integer(BRST_ANNOT_STAMP_CONFIDENTIAL), "Confidential");
  janet_def(env, "annot-stamp-final", janet_wrap_integer(BRST_ANNOT_STAMP_FINAL), "Final");
  janet_def(env, "annot-stamp-sold", janet_wrap_integer(BRST_ANNOT_STAMP_SOLD), "Sold");
  janet_def(env, "annot-stamp-departmental", janet_wrap_integer(BRST_ANNOT_STAMP_DEPARTMENTAL), "Departmental");
  janet_def(env, "annot-stamp-forcomment", janet_wrap_integer(BRST_ANNOT_STAMP_FORCOMMENT), "For Comment");
  janet_def(env, "annot-stamp-topsecret", janet_wrap_integer(BRST_ANNOT_STAMP_TOPSECRET), "Top Secret");
  janet_def(env, "annot-stamp-draft", janet_wrap_integer(BRST_ANNOT_STAMP_DRAFT), "Draft");
  janet_def(env, "annot-stamp-forpublicrelease", janet_wrap_integer(BRST_ANNOT_STAMP_FORPUBLICRELEASE), "For Public Release");
  janet_def(env, "annot-icon-comment", janet_wrap_integer(BRST_ANNOT_ICON_COMMENT), "Comment");
  janet_def(env, "annot-icon-key", janet_wrap_integer(BRST_ANNOT_ICON_KEY), "Key");
  janet_def(env, "annot-icon-note", janet_wrap_integer(BRST_ANNOT_ICON_NOTE), "Note");
  janet_def(env, "annot-icon-help", janet_wrap_integer(BRST_ANNOT_ICON_HELP), "Help");
  janet_def(env, "annot-icon-new-paragraph", janet_wrap_integer(BRST_ANNOT_ICON_NEW_PARAGRAPH), "New paragraph");
  janet_def(env, "annot-icon-paragraph", janet_wrap_integer(BRST_ANNOT_ICON_PARAGRAPH), "Paragraph");
  janet_def(env, "annot-icon-insert", janet_wrap_integer(BRST_ANNOT_ICON_INSERT), "Insert");
  janet_def(env, "annot-line-cap-inline", janet_wrap_integer(BRST_ANNOT_LINE_CAP_INLINE), "Caption shall be centered inside the line");
  janet_def(env, "annot-line-cap-top", janet_wrap_integer(BRST_ANNOT_LINE_CAP_TOP), "Caption shall be on top of the line");
  janet_def(env, "annot-text", janet_wrap_integer(BRST_ANNOT_TEXT), "Text annotation");
  janet_def(env, "annot-link", janet_wrap_integer(BRST_ANNOT_LINK), "Link annotation");
  janet_def(env, "annot-free-text", janet_wrap_integer(BRST_ANNOT_FREE_TEXT), "Free text annotation");
  janet_def(env, "annot-line", janet_wrap_integer(BRST_ANNOT_LINE), "Line annotation");
  janet_def(env, "annot-square", janet_wrap_integer(BRST_ANNOT_SQUARE), "Square annotation");
  janet_def(env, "annot-circle", janet_wrap_integer(BRST_ANNOT_CIRCLE), "Circle annotation");
  janet_def(env, "annot-polygon", janet_wrap_integer(BRST_ANNOT_POLYGON), "Polygon annotation");
  janet_def(env, "annot-polyline", janet_wrap_integer(BRST_ANNOT_POLYLINE), "Polyline annotation");
  janet_def(env, "annot-highlight", janet_wrap_integer(BRST_ANNOT_HIGHLIGHT), "Highlight annotation");
  janet_def(env, "annot-underline", janet_wrap_integer(BRST_ANNOT_UNDERLINE), "Underline annotation");
  janet_def(env, "annot-squiggly", janet_wrap_integer(BRST_ANNOT_SQUIGGLY), "Squiggly-underline annotation");
  janet_def(env, "annot-strikeout", janet_wrap_integer(BRST_ANNOT_STRIKEOUT), "Strikeout annotation");
  janet_def(env, "annot-stamp", janet_wrap_integer(BRST_ANNOT_STAMP), "Rubber stamp annotation");
  janet_def(env, "annot-caret", janet_wrap_integer(BRST_ANNOT_CARET), "Caret annotation");
  janet_def(env, "annot-ink", janet_wrap_integer(BRST_ANNOT_INK), "Ink annotation");
  janet_def(env, "annot-popup", janet_wrap_integer(BRST_ANNOT_POPUP), "Pop-up annotation");
  janet_def(env, "annot-file-attachment", janet_wrap_integer(BRST_ANNOT_FILE_ATTACHMENT), "File attachment annotation");
  janet_def(env, "annot-sound", janet_wrap_integer(BRST_ANNOT_SOUND), "Sound annotation");
  janet_def(env, "annot-movie", janet_wrap_integer(BRST_ANNOT_MOVIE), "Movie annotation");
  janet_def(env, "annot-widget", janet_wrap_integer(BRST_ANNOT_WIDGET), "Widget annotation");
  janet_def(env, "annot-screen", janet_wrap_integer(BRST_ANNOT_SCREEN), "Screen annotation");
  janet_def(env, "annot-printer-mark", janet_wrap_integer(BRST_ANNOT_PRINTER_MARK), "Printer’s mark annotation");
  janet_def(env, "annot-trapnet", janet_wrap_integer(BRST_ANNOT_TRAPNET), "Trap network annotation");
  janet_def(env, "annot-watermark", janet_wrap_integer(BRST_ANNOT_WATERMARK), "Watermark annotation");
  janet_def(env, "annot-3d", janet_wrap_integer(BRST_ANNOT_3D), "3D annotation");
  janet_def(env, "annot-redact", janet_wrap_integer(BRST_ANNOT_REDACT), "Redact annotation");
  janet_def(env, "annot-rich-media", janet_wrap_integer(BRST_ANNOT_RICH_MEDIA), "RichMedia annotation");
  janet_def(env, "annot-projection", janet_wrap_integer(BRST_ANNOT_PROJECTION), "Projection annotation");
  janet_def(env, "annot-highlight-mode-none", janet_wrap_integer(BRST_ANNOT_HIGHLIGHT_MODE_NONE), "No highlight");
  janet_def(env, "annot-highlight-mode-invert", janet_wrap_integer(BRST_ANNOT_HIGHLIGHT_MODE_INVERT), "Invert the contents of the annotation rectangle.");
  janet_def(env, "annot-highlight-mode-outline", janet_wrap_integer(BRST_ANNOT_HIGHLIGHT_MODE_OUTLINE), "Invert the annotation’s border.");
  janet_def(env, "annot-highlight-mode-push", janet_wrap_integer(BRST_ANNOT_HIGHLIGHT_MODE_PUSH), "Display the annotation as if it were being pushed below the surface of the page.");
  janet_def(env, "annot-flag-invisible", janet_wrap_integer(BRST_ANNOT_FLAG_INVISIBLE), "");
  janet_def(env, "annot-flag-hidden", janet_wrap_integer(BRST_ANNOT_FLAG_HIDDEN), "");
  janet_def(env, "annot-flag-print", janet_wrap_integer(BRST_ANNOT_FLAG_PRINT), "");
  janet_def(env, "annot-flag-nozoom", janet_wrap_integer(BRST_ANNOT_FLAG_NOZOOM), "");
  janet_def(env, "annot-flag-norotate", janet_wrap_integer(BRST_ANNOT_FLAG_NOROTATE), "");
  janet_def(env, "annot-flag-noview", janet_wrap_integer(BRST_ANNOT_FLAG_NOVIEW), "");
  janet_def(env, "annot-flag-readonly", janet_wrap_integer(BRST_ANNOT_FLAG_READONLY), "");
  janet_def(env, "annot-flag-locked", janet_wrap_integer(BRST_ANNOT_FLAG_LOCKED), "");
  janet_def(env, "annot-flag-toggle-noview", janet_wrap_integer(BRST_ANNOT_FLAG_TOGGLE_NOVIEW), "");
  janet_def(env, "annot-flag-locked-content", janet_wrap_integer(BRST_ANNOT_FLAG_LOCKED_CONTENT), "");
  // consts.lsp
  janet_def(env, "comp-mode-none", janet_wrap_integer(BRST_COMP_MODE_NONE), "No compression");
  janet_def(env, "comp-mode-text", janet_wrap_integer(BRST_COMP_MODE_TEXT), "Compress text dictionaries");
  janet_def(env, "comp-mode-image", janet_wrap_integer(BRST_COMP_MODE_IMAGE), "Compress images");
  janet_def(env, "comp-mode-metadata", janet_wrap_integer(BRST_COMP_MODE_METADATA), "Compress nested metadata (fonts only)");
  janet_def(env, "comp-mode-all", janet_wrap_integer(BRST_COMP_MODE_ALL), "Compress everything");
  janet_def(env, "hide-toolbar", janet_wrap_integer(BRST_HIDE_TOOLBAR), "A flag specifying whether to hide reader's tool bars when the document is active.");
  janet_def(env, "hide-menubar", janet_wrap_integer(BRST_HIDE_MENUBAR), "A flag specifying whether to hide reader's menu bar when the document is active.");
  janet_def(env, "hide-window-ui", janet_wrap_integer(BRST_HIDE_WINDOW_UI), "A flag specifying whether to hide user interface elements in the document's window, leaving only the document's contents displayed");
  janet_def(env, "fit-window", janet_wrap_integer(BRST_FIT_WINDOW), "A flag specifying whether to resize the document's window to fit the size of the first displayed page.");
  janet_def(env, "center-window", janet_wrap_integer(BRST_CENTER_WINDOW), "A flag specifying whether to position the document's window in the center of the screen.");
  janet_def(env, "print-scaling-none", janet_wrap_integer(BRST_PRINT_SCALING_NONE), "The page scaling option is set to None when a print dialog is displayed for this document.");
  janet_def(env, "display-doc-title", janet_wrap_integer(BRST_DISPLAY_DOC_TITLE), "A flag specifying whether the window's title bar should display the document title taken from the \\c Title entry of the document information dictionary.");
  janet_def(env, "gmode-page-description", janet_wrap_integer(BRST_GMODE_PAGE_DESCRIPTION), "Page description (markup) mode");
  janet_def(env, "gmode-path-object", janet_wrap_integer(BRST_GMODE_PATH_OBJECT), "Path creation mode");
  janet_def(env, "gmode-text-object", janet_wrap_integer(BRST_GMODE_TEXT_OBJECT), "Text creation mode");
  janet_def(env, "gmode-clipping-path", janet_wrap_integer(BRST_GMODE_CLIPPING_PATH), "Clipping path creation mode");
  janet_def(env, "gmode-shading", janet_wrap_integer(BRST_GMODE_SHADING), "Shading creation mode");
  janet_def(env, "gmode-inline-image", janet_wrap_integer(BRST_GMODE_INLINE_IMAGE), "Image creation mode");
  janet_def(env, "gmode-external-object", janet_wrap_integer(BRST_GMODE_EXTERNAL_OBJECT), "XObject creation mode");
  janet_def(env, "enable-read", janet_wrap_integer(BRST_ENABLE_READ), "User can read the document.");
  janet_def(env, "enable-print", janet_wrap_integer(BRST_ENABLE_PRINT), "User can print the document.");
  janet_def(env, "enable-edit-all", janet_wrap_integer(BRST_ENABLE_EDIT_ALL), "User can edit the contents of the document other than annotations and form fields.");
  janet_def(env, "enable-copy", janet_wrap_integer(BRST_ENABLE_COPY), "User can copy the text and the graphics of the document.");
  janet_def(env, "enable-edit", janet_wrap_integer(BRST_ENABLE_EDIT), "User can add or modify the annotations and form fields of the document.");
  // date.lsp
  janet_def(env, "date-part-year", janet_wrap_integer(BRST_DATE_PART_YEAR), "");
  janet_def(env, "date-part-month", janet_wrap_integer(BRST_DATE_PART_MONTH), "");
  janet_def(env, "date-part-day", janet_wrap_integer(BRST_DATE_PART_DAY), "");
  janet_def(env, "date-part-hour", janet_wrap_integer(BRST_DATE_PART_HOUR), "");
  janet_def(env, "date-part-minute", janet_wrap_integer(BRST_DATE_PART_MINUTE), "");
  janet_def(env, "date-part-second", janet_wrap_integer(BRST_DATE_PART_SECOND), "");
  janet_def(env, "date-part-hour-offset", janet_wrap_integer(BRST_DATE_PART_HOUR_OFFSET), "");
  janet_def(env, "date-part-minute-offset", janet_wrap_integer(BRST_DATE_PART_MINUTE_OFFSET), "");
  janet_def(env, "date-part-ut-relationship", janet_wrap_integer(BRST_DATE_PART_UT_RELATIONSHIP), "");
  janet_def(env, "ut-relationship-none", janet_wrap_integer(BRST_UT_RELATIONSHIP_NONE), "UTC offset is not set");
  janet_def(env, "ut-relationship-plus", janet_wrap_integer(BRST_UT_RELATIONSHIP_PLUS), "Local time is later than UTC");
  janet_def(env, "ut-relationship-minus", janet_wrap_integer(BRST_UT_RELATIONSHIP_MINUS), "Local time is earlier than UTC");
  janet_def(env, "ut-relationship-zero", janet_wrap_integer(BRST_UT_RELATIONSHIP_ZERO), "Local time equal to UTC");
  // doc.lsp
  janet_def(env, "ver-10", janet_wrap_integer(BRST_VER_10), "Start PDF version");
  janet_def(env, "ver-11", janet_wrap_integer(BRST_VER_11), "Version 1.1");
  janet_def(env, "ver-12", janet_wrap_integer(BRST_VER_12), "Version 1.2");
  janet_def(env, "ver-13", janet_wrap_integer(BRST_VER_13), "Version 1.3");
  janet_def(env, "ver-14", janet_wrap_integer(BRST_VER_14), "Version 1.4");
  janet_def(env, "ver-15", janet_wrap_integer(BRST_VER_15), "Version 1.5");
  janet_def(env, "ver-16", janet_wrap_integer(BRST_VER_16), "Version 1.6");
  janet_def(env, "ver-17", janet_wrap_integer(BRST_VER_17), "Version 1.7");
  janet_def(env, "ver-20", janet_wrap_integer(BRST_VER_20), "Version 2.0");
  // doc_info.lsp
  janet_def(env, "info-creation-date", janet_wrap_integer(BRST_INFO_CREATION_DATE), "Document creation date");
  janet_def(env, "info-mod-date", janet_wrap_integer(BRST_INFO_MOD_DATE), "Document modification date");
  janet_def(env, "info-author", janet_wrap_integer(BRST_INFO_AUTHOR), "Document author");
  janet_def(env, "info-creator", janet_wrap_integer(BRST_INFO_CREATOR), "Document creator");
  janet_def(env, "info-producer", janet_wrap_integer(BRST_INFO_PRODUCER), "Document producer");
  janet_def(env, "info-title", janet_wrap_integer(BRST_INFO_TITLE), "Document title");
  janet_def(env, "info-subject", janet_wrap_integer(BRST_INFO_SUBJECT), "Document subject");
  janet_def(env, "info-keywords", janet_wrap_integer(BRST_INFO_KEYWORDS), "Document keywords");
  janet_def(env, "info-trapped", janet_wrap_integer(BRST_INFO_TRAPPED), "Trapping information flag.\\n  Possible values are (case sensitive):\\n  - True\\n  - False\\n  - Unknown (default value)");
  janet_def(env, "info-gts-pdfx", janet_wrap_integer(BRST_INFO_GTS_PDFX), "");
  // encrypt.lsp
  janet_def(env, "encrypt-r0", janet_wrap_integer(BRST_ENCRYPT_R0), "An algorithm that is undocumented. This value shall not be used.");
  janet_def(env, "encrypt-r1", janet_wrap_integer(BRST_ENCRYPT_R1), "Algorithm 1: Encryption of data using the RC4 or AES algorithms. \"General Encryption Algorithm\" with an encryption key length of 40 bits.");
  janet_def(env, "encrypt-r2", janet_wrap_integer(BRST_ENCRYPT_R2), "Algorithm 1: Encryption of data using the RC4 or AES algorithms. \"General Encryption Algorithm\" but permitting encryption key lengths greater than 40 bits.");
  janet_def(env, "encrypt-r3", janet_wrap_integer(BRST_ENCRYPT_R3), "An unpublished algorithm that permits encryption key lengths ranging from 40 to 128 bits.");
  janet_def(env, "encrypt-r4", janet_wrap_integer(BRST_ENCRYPT_R4), "The security handler defines the use of encryption and decryption in the document.");
  // error.lsp
  janet_def(env, "array-count-err", janet_wrap_integer(BRST_ARRAY_COUNT_ERR), "Array count limit exceed (\\ref BRST_LIMIT_MAX_ARRAY).");
  janet_def(env, "array-item-not-found", janet_wrap_integer(BRST_ARRAY_ITEM_NOT_FOUND), "Array element not found.");
  janet_def(env, "array-item-unexpected-type", janet_wrap_integer(BRST_ARRAY_ITEM_UNEXPECTED_TYPE), "Array element of unexpected type");
  janet_def(env, "binary-length-err", janet_wrap_integer(BRST_BINARY_LENGTH_ERR), "");
  janet_def(env, "cannot-get-palette", janet_wrap_integer(BRST_CANNOT_GET_PALETTE), "");
  janet_def(env, "dict-count-err", janet_wrap_integer(BRST_DICT_COUNT_ERR), "");
  janet_def(env, "dict-item-not-found", janet_wrap_integer(BRST_DICT_ITEM_NOT_FOUND), "");
  janet_def(env, "dict-item-unexpected-type", janet_wrap_integer(BRST_DICT_ITEM_UNEXPECTED_TYPE), "");
  janet_def(env, "dict-stream-length-not-found", janet_wrap_integer(BRST_DICT_STREAM_LENGTH_NOT_FOUND), "");
  janet_def(env, "doc-encryptdict-not-found", janet_wrap_integer(BRST_DOC_ENCRYPTDICT_NOT_FOUND), "");
  janet_def(env, "doc-invalid-object", janet_wrap_integer(BRST_DOC_INVALID_OBJECT), "");
  janet_def(env, "duplicate-registration", janet_wrap_integer(BRST_DUPLICATE_REGISTRATION), "");
  janet_def(env, "exceed-jww-code-num-limit", janet_wrap_integer(BRST_EXCEED_JWW_CODE_NUM_LIMIT), "");
  janet_def(env, "encrypt-invalid-password", janet_wrap_integer(BRST_ENCRYPT_INVALID_PASSWORD), "");
  janet_def(env, "err-unknown-class", janet_wrap_integer(BRST_ERR_UNKNOWN_CLASS), "");
  janet_def(env, "exceed-gstate-limit", janet_wrap_integer(BRST_EXCEED_GSTATE_LIMIT), "");
  janet_def(env, "failed-to-alloc-mem", janet_wrap_integer(BRST_FAILED_TO_ALLOC_MEM), "");
  janet_def(env, "file-io-error", janet_wrap_integer(BRST_FILE_IO_ERROR), "");
  janet_def(env, "file-open-error", janet_wrap_integer(BRST_FILE_OPEN_ERROR), "");
  janet_def(env, "font-exists", janet_wrap_integer(BRST_FONT_EXISTS), "");
  janet_def(env, "font-invalid-width-table", janet_wrap_integer(BRST_FONT_INVALID_WIDTH_TABLE), "");
  janet_def(env, "invalid-afm-header", janet_wrap_integer(BRST_INVALID_AFM_HEADER), "");
  janet_def(env, "invalid-annotation", janet_wrap_integer(BRST_INVALID_ANNOTATION), "");
  janet_def(env, "invalid-bit-per-component", janet_wrap_integer(BRST_INVALID_BIT_PER_COMPONENT), "");
  janet_def(env, "invalid-char-matrix-data", janet_wrap_integer(BRST_INVALID_CHAR_MATRIX_DATA), "");
  janet_def(env, "invalid-color-space", janet_wrap_integer(BRST_INVALID_COLOR_SPACE), "");
  janet_def(env, "invalid-compression-mode", janet_wrap_integer(BRST_INVALID_COMPRESSION_MODE), "");
  janet_def(env, "invalid-date-time", janet_wrap_integer(BRST_INVALID_DATE_TIME), "");
  janet_def(env, "invalid-destination", janet_wrap_integer(BRST_INVALID_DESTINATION), "");
  janet_def(env, "invalid-document", janet_wrap_integer(BRST_INVALID_DOCUMENT), "");
  janet_def(env, "invalid-document-state", janet_wrap_integer(BRST_INVALID_DOCUMENT_STATE), "");
  janet_def(env, "invalid-encoder", janet_wrap_integer(BRST_INVALID_ENCODER), "");
  janet_def(env, "invalid-encoder-type", janet_wrap_integer(BRST_INVALID_ENCODER_TYPE), "");
  janet_def(env, "invalid-encoding-name", janet_wrap_integer(BRST_INVALID_ENCODING_NAME), "");
  janet_def(env, "invalid-encrypt-key-len", janet_wrap_integer(BRST_INVALID_ENCRYPT_KEY_LEN), "");
  janet_def(env, "invalid-fontdef-data", janet_wrap_integer(BRST_INVALID_FONTDEF_DATA), "");
  janet_def(env, "invalid-fontdef-type", janet_wrap_integer(BRST_INVALID_FONTDEF_TYPE), "");
  janet_def(env, "invalid-font-name", janet_wrap_integer(BRST_INVALID_FONT_NAME), "");
  janet_def(env, "invalid-image", janet_wrap_integer(BRST_INVALID_IMAGE), "");
  janet_def(env, "invalid-jpeg-data", janet_wrap_integer(BRST_INVALID_JPEG_DATA), "");
  janet_def(env, "invalid-n-data", janet_wrap_integer(BRST_INVALID_N_DATA), "");
  janet_def(env, "invalid-object", janet_wrap_integer(BRST_INVALID_OBJECT), "");
  janet_def(env, "invalid-obj-id", janet_wrap_integer(BRST_INVALID_OBJ_ID), "");
  janet_def(env, "invalid-operation", janet_wrap_integer(BRST_INVALID_OPERATION), "");
  janet_def(env, "invalid-outline", janet_wrap_integer(BRST_INVALID_OUTLINE), "");
  janet_def(env, "invalid-page", janet_wrap_integer(BRST_INVALID_PAGE), "");
  janet_def(env, "invalid-pages", janet_wrap_integer(BRST_INVALID_PAGES), "");
  janet_def(env, "invalid-parameter", janet_wrap_integer(BRST_INVALID_PARAMETER), "");
  janet_def(env, "invalid-png-image", janet_wrap_integer(BRST_INVALID_PNG_IMAGE), "");
  janet_def(env, "invalid-stream", janet_wrap_integer(BRST_INVALID_STREAM), "");
  janet_def(env, "missing-file-name-entry", janet_wrap_integer(BRST_MISSING_FILE_NAME_ENTRY), "");
  janet_def(env, "invalid-ttc-file", janet_wrap_integer(BRST_INVALID_TTC_FILE), "");
  janet_def(env, "invalid-ttc-index", janet_wrap_integer(BRST_INVALID_TTC_INDEX), "");
  janet_def(env, "invalid-wx-data", janet_wrap_integer(BRST_INVALID_WX_DATA), "");
  janet_def(env, "item-not-found", janet_wrap_integer(BRST_ITEM_NOT_FOUND), "");
  janet_def(env, "libpng-error", janet_wrap_integer(BRST_LIBPNG_ERROR), "");
  janet_def(env, "name-invalid-value", janet_wrap_integer(BRST_NAME_INVALID_VALUE), "");
  janet_def(env, "name-out-of-range", janet_wrap_integer(BRST_NAME_OUT_OF_RANGE), "");
  janet_def(env, "pages-missing-kids-entry", janet_wrap_integer(BRST_PAGES_MISSING_KIDS_ENTRY), "");
  janet_def(env, "page-cannot-find-object", janet_wrap_integer(BRST_PAGE_CANNOT_FIND_OBJECT), "");
  janet_def(env, "page-cannot-get-root-pages", janet_wrap_integer(BRST_PAGE_CANNOT_GET_ROOT_PAGES), "");
  janet_def(env, "page-cannot-restore-gstate", janet_wrap_integer(BRST_PAGE_CANNOT_RESTORE_GSTATE), "");
  janet_def(env, "page-cannot-set-parent", janet_wrap_integer(BRST_PAGE_CANNOT_SET_PARENT), "");
  janet_def(env, "page-font-not-found", janet_wrap_integer(BRST_PAGE_FONT_NOT_FOUND), "");
  janet_def(env, "page-invalid-font", janet_wrap_integer(BRST_PAGE_INVALID_FONT), "");
  janet_def(env, "page-invalid-font-size", janet_wrap_integer(BRST_PAGE_INVALID_FONT_SIZE), "");
  janet_def(env, "page-invalid-gmode", janet_wrap_integer(BRST_PAGE_INVALID_GMODE), "");
  janet_def(env, "page-invalid-index", janet_wrap_integer(BRST_PAGE_INVALID_INDEX), "");
  janet_def(env, "page-invalid-rotate-value", janet_wrap_integer(BRST_PAGE_INVALID_ROTATE_VALUE), "");
  janet_def(env, "page-invalid-size", janet_wrap_integer(BRST_PAGE_INVALID_SIZE), "");
  janet_def(env, "page-invalid-xobject", janet_wrap_integer(BRST_PAGE_INVALID_XOBJECT), "");
  janet_def(env, "page-out-of-range", janet_wrap_integer(BRST_PAGE_OUT_OF_RANGE), "");
  janet_def(env, "real-out-of-range", janet_wrap_integer(BRST_REAL_OUT_OF_RANGE), "");
  janet_def(env, "stream-eof", janet_wrap_integer(BRST_STREAM_EOF), "");
  janet_def(env, "stream-readln-continue", janet_wrap_integer(BRST_STREAM_READLN_CONTINUE), "");
  janet_def(env, "string-out-of-range", janet_wrap_integer(BRST_STRING_OUT_OF_RANGE), "");
  janet_def(env, "this-func-was-skipped", janet_wrap_integer(BRST_THIS_FUNC_WAS_SKIPPED), "");
  janet_def(env, "ttf-cannot-embed-font", janet_wrap_integer(BRST_TTF_CANNOT_EMBED_FONT), "");
  janet_def(env, "ttf-invalid-cmap", janet_wrap_integer(BRST_TTF_INVALID_CMAP), "");
  janet_def(env, "ttf-invalid-format", janet_wrap_integer(BRST_TTF_INVALID_FORMAT), "");
  janet_def(env, "ttf-missing-table", janet_wrap_integer(BRST_TTF_MISSING_TABLE), "");
  janet_def(env, "unsupported-font-type", janet_wrap_integer(BRST_UNSUPPORTED_FONT_TYPE), "");
  janet_def(env, "unsupported-jpeg-format", janet_wrap_integer(BRST_UNSUPPORTED_JPEG_FORMAT), "");
  janet_def(env, "unsupported-type1-font", janet_wrap_integer(BRST_UNSUPPORTED_TYPE1_FONT), "");
  janet_def(env, "xref-count-err", janet_wrap_integer(BRST_XREF_COUNT_ERR), "");
  janet_def(env, "zlib-error", janet_wrap_integer(BRST_ZLIB_ERROR), "");
  janet_def(env, "invalid-page-index", janet_wrap_integer(BRST_INVALID_PAGE_INDEX), "");
  janet_def(env, "invalid-uri", janet_wrap_integer(BRST_INVALID_URI), "");
  janet_def(env, "page-layout-out-of-range", janet_wrap_integer(BRST_PAGE_LAYOUT_OUT_OF_RANGE), "");
  janet_def(env, "page-mode-out-of-range", janet_wrap_integer(BRST_PAGE_MODE_OUT_OF_RANGE), "");
  janet_def(env, "page-num-style-out-of-range", janet_wrap_integer(BRST_PAGE_NUM_STYLE_OUT_OF_RANGE), "");
  janet_def(env, "annot-invalid-icon", janet_wrap_integer(BRST_ANNOT_INVALID_ICON), "");
  janet_def(env, "annot-invalid-border-style", janet_wrap_integer(BRST_ANNOT_INVALID_BORDER_STYLE), "");
  janet_def(env, "page-invalid-orientation", janet_wrap_integer(BRST_PAGE_INVALID_ORIENTATION), "");
  janet_def(env, "page-insufficient-space", janet_wrap_integer(BRST_PAGE_INSUFFICIENT_SPACE), "");
  janet_def(env, "page-invalid-display-time", janet_wrap_integer(BRST_PAGE_INVALID_DISPLAY_TIME), "");
  janet_def(env, "page-invalid-transition-time", janet_wrap_integer(BRST_PAGE_INVALID_TRANSITION_TIME), "");
  janet_def(env, "invalid-page-slideshow-type", janet_wrap_integer(BRST_INVALID_PAGE_SLIDESHOW_TYPE), "");
  janet_def(env, "ext-gstate-out-of-range", janet_wrap_integer(BRST_EXT_GSTATE_OUT_OF_RANGE), "");
  janet_def(env, "invalid-ext-gstate", janet_wrap_integer(BRST_INVALID_EXT_GSTATE), "");
  janet_def(env, "ext-gstate-read-only", janet_wrap_integer(BRST_EXT_GSTATE_READ_ONLY), "");
  janet_def(env, "invalid-icc-component-num", janet_wrap_integer(BRST_INVALID_ICC_COMPONENT_NUM), "");
  janet_def(env, "page-invalid-boundary", janet_wrap_integer(BRST_PAGE_INVALID_BOUNDARY), "");
  janet_def(env, "invalid-shading-type", janet_wrap_integer(BRST_INVALID_SHADING_TYPE), "");
  // geometry_defines.lsp
  janet_def(env, "butt-cap", janet_wrap_integer(BRST_BUTT_CAP), "Butt cap. The stroke shall be squared off at the endpoint of the path. There shall be no projection beyond the end of the path.");
  janet_def(env, "round-cap", janet_wrap_integer(BRST_ROUND_CAP), "Round cap. A semicircular arc with a diameter equal to the line width shall be drawn around the endpoint and shall be filled in.");
  janet_def(env, "projecting-square-cap", janet_wrap_integer(BRST_PROJECTING_SQUARE_CAP), "Projecting square cap. The stroke shall continue beyond the endpoint of the path for a distance equal to half the line width and shall be squared off.");
  janet_def(env, "miter-join", janet_wrap_integer(BRST_MITER_JOIN), "Miter join. The outer edges of the strokes for the two segments shall be extended until they meet at an angle.");
  janet_def(env, "round-join", janet_wrap_integer(BRST_ROUND_JOIN), "Round join. An arc of a circle with a diameter equal to the line width shall be drawn around the point where the two segments meet, connecting the outer edges of the strokes for the two segments.");
  janet_def(env, "bevel-join", janet_wrap_integer(BRST_BEVEL_JOIN), "Bevel join. The two segments shall be finished with butt caps and the resulting notch beyond the ends of the segments shall be filled with a triangle.");
  janet_def(env, "colorspace-devicegray", janet_wrap_integer(BRST_COLORSPACE_DEVICEGRAY), "Gray device colour space");
  janet_def(env, "colorspace-devicergb", janet_wrap_integer(BRST_COLORSPACE_DEVICERGB), "RGB device colour space");
  janet_def(env, "colorspace-devicecmyk", janet_wrap_integer(BRST_COLORSPACE_DEVICECMYK), "CMYK device colour space");
  janet_def(env, "colorspace-calgray", janet_wrap_integer(BRST_COLORSPACE_CALGRAY), "A CalGray colour space is a special case of a single-component CIE-based colour space, known as a CIE-based A colour space. In this type of space, A represents the gray component of a calibrated gray space.");
  janet_def(env, "colorspace-calrgb", janet_wrap_integer(BRST_COLORSPACE_CALRGB), "A CalRGB colour space is a CIE-based ABC colour space with only one transformation stage instead of two. In this type of space, A, B, and C represent calibrated red, green, and blue colour values.");
  janet_def(env, "colorspace-lab", janet_wrap_integer(BRST_COLORSPACE_LAB), "A Lab colour space is a CIE-based ABC colour space with two transformation stages (see Figure 22). In this type of space, A, B, and C represent the L*, a*, and b* components of a CIE 1976 L*a*b* space.");
  janet_def(env, "colorspace-iccbased", janet_wrap_integer(BRST_COLORSPACE_ICCBASED), "ICCBased colour spaces shall be based on a cross-platform colour profile as defined by the International Color Consortium (ICC).");
  janet_def(env, "colorspace-separation", janet_wrap_integer(BRST_COLORSPACE_SEPARATION), "Separation colour space provides a means for specifying the use of additional colorants or for isolating the control of individual colour components of a device colour space for a subtractive device.");
  janet_def(env, "colorspace-devicen", janet_wrap_integer(BRST_COLORSPACE_DEVICEN), "DeviceN colour spaces may contain an arbitrary number of colour components.");
  janet_def(env, "colorspace-indexed", janet_wrap_integer(BRST_COLORSPACE_INDEXED), "An Indexed colour space specifies that an area is to be painted using a colour map or colour table of arbitrary colours in some other space.");
  janet_def(env, "colorspace-pattern", janet_wrap_integer(BRST_COLORSPACE_PATTERN), "A Pattern colour space specifies that an area is to be painted with a pattern rather than a single colour.");
  janet_def(env, "borderstyle-solid", janet_wrap_integer(BRST_BORDERSTYLE_SOLID), "A solid rectangle surrounding the annotation.");
  janet_def(env, "borderstyle-dashed", janet_wrap_integer(BRST_BORDERSTYLE_DASHED), "A dashed rectangle surrounding the annotation.");
  janet_def(env, "borderstyle-beveled", janet_wrap_integer(BRST_BORDERSTYLE_BEVELED), "A simulated embossed rectangle that appears to be raised above the surface of the page.");
  janet_def(env, "borderstyle-inset", janet_wrap_integer(BRST_BORDERSTYLE_INSET), "A simulated engraved rectangle that appears to be recessed below the surface of the page.");
  janet_def(env, "borderstyle-underlined", janet_wrap_integer(BRST_BORDERSTYLE_UNDERLINED), "A single line along the bottom of the annotation rectangle.");
  janet_def(env, "blendmode-normal", janet_wrap_integer(BRST_BLENDMODE_NORMAL), "Selects the source colour, ignoring the backdrop.");
  janet_def(env, "blendmode-compatible", janet_wrap_integer(BRST_BLENDMODE_COMPATIBLE), "Same as BLENDMODE_NORMAL");
  janet_def(env, "blendmode-multiply", janet_wrap_integer(BRST_BLENDMODE_MULTIPLY), "Multiplies the backdrop and source colour values. The result colour is always at least as dark as either of the two constituent colours. Multiplying any colour with black produces black; multiplying with white leaves the original colour unchanged. Painting successive overlapping objects with a colour other than black or white produces progressively darker colours.");
  janet_def(env, "blendmode-screen", janet_wrap_integer(BRST_BLENDMODE_SCREEN), "Multiplies the complements of the backdrop and source colour values, then complements the result. The result colour is always at least as light as either of the two constituent colours. Screening any colour with white produces white; screening with black leaves the original colour unchanged. The effect is similar to projecting multiple photographic slides simultaneously onto a single screen.");
  janet_def(env, "blendmode-overlay", janet_wrap_integer(BRST_BLENDMODE_OVERLAY), "Multiplies or screens the colours, depending on the backdrop colour value. Source colours overlay the backdrop while preserving its highlights and shadows. The backdrop colour is not replaced but is mixed with the source colour to reflect the lightness or darkness of the backdrop.");
  janet_def(env, "blendmode-darken", janet_wrap_integer(BRST_BLENDMODE_DARKEN), "Selects the darker of the backdrop and source colours. The backdrop is replaced with the source where the source is darker; otherwise, it is left unchanged.");
  janet_def(env, "blendmode-lighten", janet_wrap_integer(BRST_BLENDMODE_LIGHTEN), "Selects the lighter of the backdrop and source colours. The backdrop is replaced with the source where the source is lighter; otherwise, it is left unchanged.");
  janet_def(env, "blendmode-color-dodge", janet_wrap_integer(BRST_BLENDMODE_COLOR_DODGE), "Brightens the backdrop colour to reflect the source colour. Painting with black produces no changes.");
  janet_def(env, "blendmode-color-burn", janet_wrap_integer(BRST_BLENDMODE_COLOR_BURN), "Darkens the backdrop colour to reflect the source colour. Painting with white produces no change.");
  janet_def(env, "blendmode-hard-light", janet_wrap_integer(BRST_BLENDMODE_HARD_LIGHT), "Multiplies or screens the colours, depending on the source colour value. The effect is similar to shining a harsh spotlight on the backdrop.");
  janet_def(env, "blendmode-soft-light", janet_wrap_integer(BRST_BLENDMODE_SOFT_LIGHT), "Darkens or lightens the colours, depending on the source colour value. The effect is similar to shining a diffused spotlight on the backdrop.");
  janet_def(env, "blendmode-difference", janet_wrap_integer(BRST_BLENDMODE_DIFFERENCE), "Subtracts the darker of the two constituent colours from the lighter colour: painting with white inverts the backdrop colour; painting with black produces no change.");
  janet_def(env, "blendmode-exclusion", janet_wrap_integer(BRST_BLENDMODE_EXCLUSION), "Produces an effect similar to that of the Difference mode but lower in contrast. Painting with white inverts the backdrop colour; painting with black produces no change.");
  // page.lsp
  janet_def(env, "page-transition-wipe-right", janet_wrap_integer(BRST_PAGE_TRANSITION_WIPE_RIGHT), "");
  janet_def(env, "page-transition-wipe-up", janet_wrap_integer(BRST_PAGE_TRANSITION_WIPE_UP), "");
  janet_def(env, "page-transition-wipe-left", janet_wrap_integer(BRST_PAGE_TRANSITION_WIPE_LEFT), "");
  janet_def(env, "page-transition-wipe-down", janet_wrap_integer(BRST_PAGE_TRANSITION_WIPE_DOWN), "");
  janet_def(env, "page-transition-barn-doors-horizontal-out", janet_wrap_integer(BRST_PAGE_TRANSITION_BARN_DOORS_HORIZONTAL_OUT), "");
  janet_def(env, "page-transition-barn-doors-horizontal-in", janet_wrap_integer(BRST_PAGE_TRANSITION_BARN_DOORS_HORIZONTAL_IN), "");
  janet_def(env, "page-transition-barn-doors-vertical-out", janet_wrap_integer(BRST_PAGE_TRANSITION_BARN_DOORS_VERTICAL_OUT), "");
  janet_def(env, "page-transition-barn-doors-vertical-in", janet_wrap_integer(BRST_PAGE_TRANSITION_BARN_DOORS_VERTICAL_IN), "");
  janet_def(env, "page-transition-box-out", janet_wrap_integer(BRST_PAGE_TRANSITION_BOX_OUT), "");
  janet_def(env, "page-transition-box-in", janet_wrap_integer(BRST_PAGE_TRANSITION_BOX_IN), "");
  janet_def(env, "page-transition-blinds-horizontal", janet_wrap_integer(BRST_PAGE_TRANSITION_BLINDS_HORIZONTAL), "");
  janet_def(env, "page-transition-blinds-vertical", janet_wrap_integer(BRST_PAGE_TRANSITION_BLINDS_VERTICAL), "");
  janet_def(env, "page-transition-dissolve", janet_wrap_integer(BRST_PAGE_TRANSITION_DISSOLVE), "");
  janet_def(env, "page-transition-glitter-right", janet_wrap_integer(BRST_PAGE_TRANSITION_GLITTER_RIGHT), "");
  janet_def(env, "page-transition-glitter-down", janet_wrap_integer(BRST_PAGE_TRANSITION_GLITTER_DOWN), "");
  janet_def(env, "page-transition-glitter-top-left-to-bottom-right", janet_wrap_integer(BRST_PAGE_TRANSITION_GLITTER_TOP_LEFT_TO_BOTTOM_RIGHT), "");
  janet_def(env, "page-transition-replace", janet_wrap_integer(BRST_PAGE_TRANSITION_REPLACE), "");
  janet_def(env, "page-orientation-portrait", janet_wrap_integer(BRST_PAGE_ORIENTATION_PORTRAIT), "Portrait orientation (longest size vertical)");
  janet_def(env, "page-orientation-landscape", janet_wrap_integer(BRST_PAGE_ORIENTATION_LANDSCAPE), "Landscape orientation (longest size horizontal)");
  janet_def(env, "page-mode-use-none", janet_wrap_integer(BRST_PAGE_MODE_USE_NONE), "");
  janet_def(env, "page-mode-use-outline", janet_wrap_integer(BRST_PAGE_MODE_USE_OUTLINE), "");
  janet_def(env, "page-mode-use-thumbs", janet_wrap_integer(BRST_PAGE_MODE_USE_THUMBS), "");
  janet_def(env, "page-mode-full-screen", janet_wrap_integer(BRST_PAGE_MODE_FULL_SCREEN), "");
  janet_def(env, "page-mode-use-oc", janet_wrap_integer(BRST_PAGE_MODE_USE_OC), "");
  janet_def(env, "page-mode-use-attachments", janet_wrap_integer(BRST_PAGE_MODE_USE_ATTACHMENTS), "");
  janet_def(env, "page-num-decimal", janet_wrap_integer(BRST_PAGE_NUM_DECIMAL), "");
  janet_def(env, "page-num-upper-roman", janet_wrap_integer(BRST_PAGE_NUM_UPPER_ROMAN), "");
  janet_def(env, "page-num-lower-roman", janet_wrap_integer(BRST_PAGE_NUM_LOWER_ROMAN), "");
  janet_def(env, "page-num-upper-letters", janet_wrap_integer(BRST_PAGE_NUM_UPPER_LETTERS), "");
  janet_def(env, "page-num-lower-letters", janet_wrap_integer(BRST_PAGE_NUM_LOWER_LETTERS), "");
  janet_def(env, "page-layout-single", janet_wrap_integer(BRST_PAGE_LAYOUT_SINGLE), "");
  janet_def(env, "page-layout-one-column", janet_wrap_integer(BRST_PAGE_LAYOUT_ONE_COLUMN), "");
  janet_def(env, "page-layout-two-column-left", janet_wrap_integer(BRST_PAGE_LAYOUT_TWO_COLUMN_LEFT), "");
  janet_def(env, "page-layout-two-column-right", janet_wrap_integer(BRST_PAGE_LAYOUT_TWO_COLUMN_RIGHT), "");
  janet_def(env, "page-layout-two-page-left", janet_wrap_integer(BRST_PAGE_LAYOUT_TWO_PAGE_LEFT), "");
  janet_def(env, "page-layout-two-page-right", janet_wrap_integer(BRST_PAGE_LAYOUT_TWO_PAGE_RIGHT), "");
  janet_def(env, "page-mediabox", janet_wrap_integer(BRST_PAGE_MEDIABOX), "");
  janet_def(env, "page-cropbox", janet_wrap_integer(BRST_PAGE_CROPBOX), "");
  janet_def(env, "page-bleedbox", janet_wrap_integer(BRST_PAGE_BLEEDBOX), "");
  janet_def(env, "page-trimbox", janet_wrap_integer(BRST_PAGE_TRIMBOX), "");
  janet_def(env, "page-artbox", janet_wrap_integer(BRST_PAGE_ARTBOX), "");
  // text_defines.lsp
  janet_def(env, "text-align-left", janet_wrap_integer(BRST_TEXT_ALIGN_LEFT), "");
  janet_def(env, "text-align-right", janet_wrap_integer(BRST_TEXT_ALIGN_RIGHT), "");
  janet_def(env, "text-align-center", janet_wrap_integer(BRST_TEXT_ALIGN_CENTER), "");
  janet_def(env, "text-align-justify", janet_wrap_integer(BRST_TEXT_ALIGN_JUSTIFY), "");
  janet_def(env, "text-rendering-mode-fill", janet_wrap_integer(BRST_TEXT_RENDERING_MODE_FILL), "");
  janet_def(env, "text-rendering-mode-stroke", janet_wrap_integer(BRST_TEXT_RENDERING_MODE_STROKE), "");
  janet_def(env, "text-rendering-mode-fill-then-stroke", janet_wrap_integer(BRST_TEXT_RENDERING_MODE_FILL_THEN_STROKE), "");
  janet_def(env, "text-rendering-mode-invisible", janet_wrap_integer(BRST_TEXT_RENDERING_MODE_INVISIBLE), "");
  janet_def(env, "text-rendering-mode-fill-clipping", janet_wrap_integer(BRST_TEXT_RENDERING_MODE_FILL_CLIPPING), "");
  janet_def(env, "text-rendering-mode-stroke-clipping", janet_wrap_integer(BRST_TEXT_RENDERING_MODE_STROKE_CLIPPING), "");
  janet_def(env, "text-rendering-mode-fill-stroke-clipping", janet_wrap_integer(BRST_TEXT_RENDERING_MODE_FILL_STROKE_CLIPPING), "");
  janet_def(env, "text-rendering-mode-clipping", janet_wrap_integer(BRST_TEXT_RENDERING_MODE_CLIPPING), "");
  janet_def(env, "writing-mode-horizontal", janet_wrap_integer(BRST_WRITING_MODE_HORIZONTAL), "");
  janet_def(env, "writing-mode-vertical", janet_wrap_integer(BRST_WRITING_MODE_VERTICAL), "");
  // page_sizes.lsp
  // US Loose
  janet_def(env, "page-size-us-letter", janet_wrap_integer(BRST_PAGE_SIZE_US_LETTER), "US Loose Letter (216.0mm x 279.0mm)");
  janet_def(env, "page-size-us-legal", janet_wrap_integer(BRST_PAGE_SIZE_US_LEGAL), "US Loose Legal (216.0mm x 356.0mm)");
  janet_def(env, "page-size-us-tabloid", janet_wrap_integer(BRST_PAGE_SIZE_US_TABLOID), "US Loose Tabloid (279.0mm x 432.0mm)");
  janet_def(env, "page-size-us-ledger", janet_wrap_integer(BRST_PAGE_SIZE_US_LEDGER), "US Loose Ledger (432.0mm x 279.0mm)");
  janet_def(env, "page-size-us-junior-legal", janet_wrap_integer(BRST_PAGE_SIZE_US_JUNIOR_LEGAL), "US Loose Junior Legal (127.0mm x 203.0mm)");
  janet_def(env, "page-size-us-half-letter", janet_wrap_integer(BRST_PAGE_SIZE_US_HALF_LETTER), "US Loose Half Letter (140.0mm x 216.0mm)");
  janet_def(env, "page-size-us-government-letter", janet_wrap_integer(BRST_PAGE_SIZE_US_GOVERNMENT_LETTER), "US Loose Government Letter (203.0mm x 267.0mm)");
  janet_def(env, "page-size-us-government-legal", janet_wrap_integer(BRST_PAGE_SIZE_US_GOVERNMENT_LEGAL), "US Loose Government Legal (216.0mm x 330.0mm)");
  // US ANSI
  janet_def(env, "page-size-us-ansi-a", janet_wrap_integer(BRST_PAGE_SIZE_US_ANSI_A), "US ANSI ANSI A (216.0mm x 279.0mm)");
  janet_def(env, "page-size-us-ansi-b", janet_wrap_integer(BRST_PAGE_SIZE_US_ANSI_B), "US ANSI ANSI B (279.0mm x 432.0mm)");
  janet_def(env, "page-size-us-ansi-c", janet_wrap_integer(BRST_PAGE_SIZE_US_ANSI_C), "US ANSI ANSI C (432.0mm x 559.0mm)");
  janet_def(env, "page-size-us-ansi-d", janet_wrap_integer(BRST_PAGE_SIZE_US_ANSI_D), "US ANSI ANSI D (559.0mm x 864.0mm)");
  janet_def(env, "page-size-us-ansi-e", janet_wrap_integer(BRST_PAGE_SIZE_US_ANSI_E), "US ANSI ANSI E (864.0mm x 1118.0mm)");
  // US Arch
  janet_def(env, "page-size-us-arch-a", janet_wrap_integer(BRST_PAGE_SIZE_US_ARCH_A), "US Arch Arch A (229.0mm x 305.0mm)");
  janet_def(env, "page-size-us-arch-b", janet_wrap_integer(BRST_PAGE_SIZE_US_ARCH_B), "US Arch Arch B (305.0mm x 457.0mm)");
  janet_def(env, "page-size-us-arch-c", janet_wrap_integer(BRST_PAGE_SIZE_US_ARCH_C), "US Arch Arch C (457.0mm x 610.0mm)");
  janet_def(env, "page-size-us-arch-d", janet_wrap_integer(BRST_PAGE_SIZE_US_ARCH_D), "US Arch Arch D (610.0mm x 914.0mm)");
  janet_def(env, "page-size-us-arch-e", janet_wrap_integer(BRST_PAGE_SIZE_US_ARCH_E), "US Arch Arch E (914.0mm x 1219.0mm)");
  janet_def(env, "page-size-us-arch-e1", janet_wrap_integer(BRST_PAGE_SIZE_US_ARCH_E1), "US Arch Arch E1 (762.0mm x 1067.0mm)");
  janet_def(env, "page-size-us-arch-e2", janet_wrap_integer(BRST_PAGE_SIZE_US_ARCH_E2), "US Arch Arch E2 (660.0mm x 965.0mm)");
  janet_def(env, "page-size-us-arch-e3", janet_wrap_integer(BRST_PAGE_SIZE_US_ARCH_E3), "US Arch Arch E3 (686.0mm x 991.0mm)");
  // ISO 216
  janet_def(env, "page-size-4a0", janet_wrap_integer(BRST_PAGE_SIZE_4A0), "ISO 216 4A0 (1682.0mm x 2378.0mm)");
  janet_def(env, "page-size-2a0", janet_wrap_integer(BRST_PAGE_SIZE_2A0), "ISO 216 2A0 (1189.0mm x 1682.0mm)");
  janet_def(env, "page-size-a0", janet_wrap_integer(BRST_PAGE_SIZE_A0), "ISO 216 A0 (841.0mm x 1189.0mm)");
  janet_def(env, "page-size-a0-plus", janet_wrap_integer(BRST_PAGE_SIZE_A0_PLUS), "ISO 216 A0+ (914.0mm x 1292.0mm)");
  janet_def(env, "page-size-a1", janet_wrap_integer(BRST_PAGE_SIZE_A1), "ISO 216 A1 (594.0mm x 841.0mm)");
  janet_def(env, "page-size-a1-plus", janet_wrap_integer(BRST_PAGE_SIZE_A1_PLUS), "ISO 216 A1+ (609.0mm x 914.0mm)");
  janet_def(env, "page-size-a2", janet_wrap_integer(BRST_PAGE_SIZE_A2), "ISO 216 A2 (420.0mm x 594.0mm)");
  janet_def(env, "page-size-a3", janet_wrap_integer(BRST_PAGE_SIZE_A3), "ISO 216 A3 (297.0mm x 420.0mm)");
  janet_def(env, "page-size-a3-plus", janet_wrap_integer(BRST_PAGE_SIZE_A3_PLUS), "ISO 216 A3+ (329.0mm x 483.0mm)");
  janet_def(env, "page-size-a4", janet_wrap_integer(BRST_PAGE_SIZE_A4), "ISO 216 A4 (210.0mm x 297.0mm)");
  janet_def(env, "page-size-a5", janet_wrap_integer(BRST_PAGE_SIZE_A5), "ISO 216 A5 (148.0mm x 210.0mm)");
  janet_def(env, "page-size-a6", janet_wrap_integer(BRST_PAGE_SIZE_A6), "ISO 216 A6 (105.0mm x 148.0mm)");
  janet_def(env, "page-size-a7", janet_wrap_integer(BRST_PAGE_SIZE_A7), "ISO 216 A7 (74.0mm x 105.0mm)");
  janet_def(env, "page-size-a8", janet_wrap_integer(BRST_PAGE_SIZE_A8), "ISO 216 A8 (52.0mm x 74.0mm)");
  janet_def(env, "page-size-a9", janet_wrap_integer(BRST_PAGE_SIZE_A9), "ISO 216 A9 (37.0mm x 52.0mm)");
  janet_def(env, "page-size-a10", janet_wrap_integer(BRST_PAGE_SIZE_A10), "ISO 216 A10 (26.0mm x 37.0mm)");
  janet_def(env, "page-size-b0", janet_wrap_integer(BRST_PAGE_SIZE_B0), "ISO 216 B0 (1000.0mm x 1414.0mm)");
  janet_def(env, "page-size-b0-plus", janet_wrap_integer(BRST_PAGE_SIZE_B0_PLUS), "ISO 216 B0+ (1118.0mm x 1580.0mm)");
  janet_def(env, "page-size-b1", janet_wrap_integer(BRST_PAGE_SIZE_B1), "ISO 216 B1 (707.0mm x 1000.0mm)");
  janet_def(env, "page-size-b1-plus", janet_wrap_integer(BRST_PAGE_SIZE_B1_PLUS), "ISO 216 B1+ (720.0mm x 1020.0mm)");
  janet_def(env, "page-size-b2", janet_wrap_integer(BRST_PAGE_SIZE_B2), "ISO 216 B2 (500.0mm x 707.0mm)");
  janet_def(env, "page-size-b2-plus", janet_wrap_integer(BRST_PAGE_SIZE_B2_PLUS), "ISO 216 B2+ (520.0mm x 720.0mm)");
  janet_def(env, "page-size-b3", janet_wrap_integer(BRST_PAGE_SIZE_B3), "ISO 216 B3 (353.0mm x 500.0mm)");
  janet_def(env, "page-size-b4", janet_wrap_integer(BRST_PAGE_SIZE_B4), "ISO 216 B4 (250.0mm x 353.0mm)");
  janet_def(env, "page-size-b5", janet_wrap_integer(BRST_PAGE_SIZE_B5), "ISO 216 B5 (176.0mm x 250.0mm)");
  janet_def(env, "page-size-b6", janet_wrap_integer(BRST_PAGE_SIZE_B6), "ISO 216 B6 (125.0mm x 176.0mm)");
  janet_def(env, "page-size-b7", janet_wrap_integer(BRST_PAGE_SIZE_B7), "ISO 216 B7 (88.0mm x 125.0mm)");
  janet_def(env, "page-size-b8", janet_wrap_integer(BRST_PAGE_SIZE_B8), "ISO 216 B8 (62.0mm x 88.0mm)");
  janet_def(env, "page-size-b9", janet_wrap_integer(BRST_PAGE_SIZE_B9), "ISO 216 B9 (44.0mm x 62.0mm)");
  janet_def(env, "page-size-b10", janet_wrap_integer(BRST_PAGE_SIZE_B10), "ISO 216 B10 (31.0mm x 44.0mm)");
  janet_def(env, "page-size-b11", janet_wrap_integer(BRST_PAGE_SIZE_B11), "ISO 216 B11 (22.0mm x 31.0mm)");
  janet_def(env, "page-size-b12", janet_wrap_integer(BRST_PAGE_SIZE_B12), "ISO 216 B12 (15.0mm x 22.0mm)");
  janet_def(env, "page-size-b13", janet_wrap_integer(BRST_PAGE_SIZE_B13), "ISO 216 B13 (11.0mm x 15.0mm)");
  janet_def(env, "page-size-c0", janet_wrap_integer(BRST_PAGE_SIZE_C0), "ISO 216 C0 (917.0mm x 1297.0mm)");
  janet_def(env, "page-size-c1", janet_wrap_integer(BRST_PAGE_SIZE_C1), "ISO 216 C1 (648.0mm x 917.0mm)");
  janet_def(env, "page-size-c2", janet_wrap_integer(BRST_PAGE_SIZE_C2), "ISO 216 C2 (458.0mm x 648.0mm)");
  janet_def(env, "page-size-c3", janet_wrap_integer(BRST_PAGE_SIZE_C3), "ISO 216 C3 (324.0mm x 458.0mm)");
  janet_def(env, "page-size-c4", janet_wrap_integer(BRST_PAGE_SIZE_C4), "ISO 216 C4 (229.0mm x 324.0mm)");
  janet_def(env, "page-size-c5", janet_wrap_integer(BRST_PAGE_SIZE_C5), "ISO 216 C5 (162.0mm x 229.0mm)");
  janet_def(env, "page-size-c6", janet_wrap_integer(BRST_PAGE_SIZE_C6), "ISO 216 C6 (114.0mm x 162.0mm)");
  janet_def(env, "page-size-c7", janet_wrap_integer(BRST_PAGE_SIZE_C7), "ISO 216 C7 (81.0mm x 114.0mm)");
  janet_def(env, "page-size-c8", janet_wrap_integer(BRST_PAGE_SIZE_C8), "ISO 216 C8 (57.0mm x 81.0mm)");
  janet_def(env, "page-size-c9", janet_wrap_integer(BRST_PAGE_SIZE_C9), "ISO 216 C9 (40.0mm x 57.0mm)");
  janet_def(env, "page-size-c10", janet_wrap_integer(BRST_PAGE_SIZE_C10), "ISO 216 C10 (28.0mm x 40.0mm)");
  // Traditional British
  janet_def(env, "page-size-british-dukes", janet_wrap_integer(BRST_PAGE_SIZE_BRITISH_DUKES), "Traditional British Dukes (140.0mm x 178.0mm)");
  janet_def(env, "page-size-british-foolscap", janet_wrap_integer(BRST_PAGE_SIZE_BRITISH_FOOLSCAP), "Traditional British Foolscap (203.0mm x 330.0mm)");
  janet_def(env, "page-size-british-imperial", janet_wrap_integer(BRST_PAGE_SIZE_BRITISH_IMPERIAL), "Traditional British Imperial (178.0mm x 229.0mm)");
  janet_def(env, "page-size-british-kings", janet_wrap_integer(BRST_PAGE_SIZE_BRITISH_KINGS), "Traditional British Kings (165.0mm x 203.0mm)");
  janet_def(env, "page-size-british-quarto", janet_wrap_integer(BRST_PAGE_SIZE_BRITISH_QUARTO), "Traditional British Quarto (203.0mm x 254.0mm)");
  // US Commercial envelopes
  janet_def(env, "page-size-us-envelope-6-1-4", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_6_1_4), "US Commercial envelopes 6¼ (152.0mm x 89.0mm)");
  janet_def(env, "page-size-us-envelope-6-3-4", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_6_3_4), "US Commercial envelopes 6¾ (165.0mm x 92.0mm)");
  janet_def(env, "page-size-us-envelope-7", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_7), "US Commercial envelopes 7 (172.0mm x 95.0mm)");
  janet_def(env, "page-size-us-envelope-7-3-4-monarch", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_7_3_4_MONARCH), "US Commercial envelopes 7¾ Monarch (191.0mm x 98.0mm)");
  janet_def(env, "page-size-us-envelope8-5-8", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE8_5_8), "US Commercial envelopes 8⅝  (219.0mm x 92.0mm)");
  janet_def(env, "page-size-us-envelope-9", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_9), "US Commercial envelopes 9 (225.0mm x 98.0mm)");
  janet_def(env, "page-size-us-envelope-10", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_10), "US Commercial envelopes 10 (241.0mm x 104.0mm)");
  janet_def(env, "page-size-us-envelope-11", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_11), "US Commercial envelopes 11 (264.0mm x 114.0mm)");
  janet_def(env, "page-size-us-envelope-12", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_12), "US Commercial envelopes 12 (279.0mm x 121.0mm)");
  janet_def(env, "page-size-us-envelope-14", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_14), "US Commercial envelopes 14 (292.0mm x 127.0mm)");
  janet_def(env, "page-size-us-envelope-16", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_16), "US Commercial envelopes 16 (305.0mm x 152.0mm)");
  // US Announcement envelopes
  janet_def(env, "page-size-us-envelope-a1", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_A1), "US Announcement envelopes A1 (92.0mm x 130.0mm)");
  janet_def(env, "page-size-us-envelope-a2-lady-grey", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_A2_LADY_GREY), "US Announcement envelopes A2 Lady Grey (146.0mm x 111.0mm)");
  janet_def(env, "page-size-us-envelope-a4", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_A4), "US Announcement envelopes A4 (159.0mm x 108.0mm)");
  janet_def(env, "page-size-us-envelope-a6-thompson-s-standard", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_A6_THOMPSON_S_STANDARD), "US Announcement envelopes A6 Thompson's Standard (165.0mm x 121.0mm)");
  janet_def(env, "page-size-us-envelope-a7-besselheim", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_A7_BESSELHEIM), "US Announcement envelopes A7 Besselheim (184.0mm x 133.0mm)");
  janet_def(env, "page-size-us-envelope-a8-carr-s", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_A8_CARR_S), "US Announcement envelopes A8 Carr's (206.0mm x 140.0mm)");
  janet_def(env, "page-size-us-envelope-a9-diplomat", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_A9_DIPLOMAT), "US Announcement envelopes A9 Diplomat (222.0mm x 146.0mm)");
  janet_def(env, "page-size-us-envelope-a10-willow", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_A10_WILLOW), "US Announcement envelopes A10 Willow (241.0mm x 152.0mm)");
  janet_def(env, "page-size-us-envelope-a-long", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_A_LONG), "US Announcement envelopes A Long (225.0mm x 98.0mm)");
  // US Catalog envelopes
  janet_def(env, "page-size-us-envelope-1", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_1), "US Catalog envelopes 1 (229.0mm x 152.0mm)");
  janet_def(env, "page-size-us-envelope-1-3-4", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_1_3_4), "US Catalog envelopes 1¾ (241.0mm x 152.0mm)");
  janet_def(env, "page-size-us-envelope-3", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_3), "US Catalog envelopes 3 (254.0mm x 178.0mm)");
  janet_def(env, "page-size-us-envelope-6", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_6), "US Catalog envelopes 6 (267.0mm x 191.0mm)");
  janet_def(env, "page-size-us-envelope-8", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_8), "US Catalog envelopes 8 (286.0mm x 210.0mm)");
  janet_def(env, "page-size-us-envelope-9-3-4", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_9_3_4), "US Catalog envelopes 9¾ (286.0mm x 222.0mm)");
  janet_def(env, "page-size-us-envelope-10-1-2", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_10_1_2), "US Catalog envelopes 10½ (305.0mm x 229.0mm)");
  janet_def(env, "page-size-us-envelope-12-1-2", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_12_1_2), "US Catalog envelopes 12½ (318.0mm x 241.0mm)");
  janet_def(env, "page-size-us-envelope-13-1-2", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_13_1_2), "US Catalog envelopes 13½ (330.0mm x 254.0mm)");
  janet_def(env, "page-size-us-envelope-14-1-2", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_14_1_2), "US Catalog envelopes 14½ (368.0mm x 292.0mm)");
  janet_def(env, "page-size-us-envelope-15", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_15), "US Catalog envelopes 15 (381.0mm x 254.0mm)");
  janet_def(env, "page-size-us-envelope-15-1-2", janet_wrap_integer(BRST_PAGE_SIZE_US_ENVELOPE_15_1_2), "US Catalog envelopes 15½ (394.0mm x 305.0mm)");
  // ISO 269
  janet_def(env, "page-size-envelope-dl", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_DL), "ISO 269 DL (110.0mm x 220.0mm)");
  janet_def(env, "page-size-envelope-b4", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_B4), "ISO 269 B4 (250.0mm x 353.0mm)");
  janet_def(env, "page-size-envelope-b5", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_B5), "ISO 269 B5 (176.0mm x 250.0mm)");
  janet_def(env, "page-size-envelope-b6", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_B6), "ISO 269 B6 (125.0mm x 176.0mm)");
  janet_def(env, "page-size-envelope-c3", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_C3), "ISO 269 C3 (324.0mm x 458.0mm)");
  janet_def(env, "page-size-envelope-c4", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_C4), "ISO 269 C4 (229.0mm x 324.0mm)");
  janet_def(env, "page-size-envelope-c4m", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_C4M), "ISO 269 C4M (318.0mm x 229.0mm)");
  janet_def(env, "page-size-envelope-c5", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_C5), "ISO 269 C5 (162.0mm x 229.0mm)");
  janet_def(env, "page-size-envelope-c6-c5", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_C6_C5), "ISO 269 C6/C5 (114.0mm x 229.0mm)");
  janet_def(env, "page-size-envelope-c6", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_C6), "ISO 269 C6 (114.0mm x 162.0mm)");
  janet_def(env, "page-size-envelope-c64m", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_C64M), "ISO 269 C64M (318.0mm x 114.0mm)");
  janet_def(env, "page-size-envelope-c7-c6", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_C7_C6), "ISO 269 C7/C6 (81.0mm x 162.0mm)");
  janet_def(env, "page-size-envelope-c7", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_C7), "ISO 269 C7 (81.0mm x 114.0mm)");
  janet_def(env, "page-size-envelope-ce4", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_CE4), "ISO 269 CE4 (229.0mm x 310.0mm)");
  janet_def(env, "page-size-envelope-ce64", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_CE64), "ISO 269 CE64 (114.0mm x 310.0mm)");
  janet_def(env, "page-size-envelope-e4", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_E4), "ISO 269 E4 (220.0mm x 312.0mm)");
  janet_def(env, "page-size-envelope-ec45", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_EC45), "ISO 269 EC45 (220.0mm x 229.0mm)");
  janet_def(env, "page-size-envelope-ec5", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_EC5), "ISO 269 EC5 (155.0mm x 229.0mm)");
  janet_def(env, "page-size-envelope-e5", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_E5), "ISO 269 E5 (115.0mm x 220.0mm)");
  janet_def(env, "page-size-envelope-e56", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_E56), "ISO 269 E56 (155.0mm x 155.0mm)");
  janet_def(env, "page-size-envelope-e6", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_E6), "ISO 269 E6 (110.0mm x 155.0mm)");
  janet_def(env, "page-size-envelope-e65", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_E65), "ISO 269 E65 (110.0mm x 220.0mm)");
  janet_def(env, "page-size-envelope-r7", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_R7), "ISO 269 R7 (120.0mm x 135.0mm)");
  janet_def(env, "page-size-envelope-s4", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_S4), "ISO 269 S4 (250.0mm x 330.0mm)");
  janet_def(env, "page-size-envelope-s5", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_S5), "ISO 269 S5 (185.0mm x 255.0mm)");
  janet_def(env, "page-size-envelope-s65", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_S65), "ISO 269 S65 (110.0mm x 225.0mm)");
  janet_def(env, "page-size-envelope-x5", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_X5), "ISO 269 X5 (105.0mm x 216.0mm)");
  janet_def(env, "page-size-envelope-ex5", janet_wrap_integer(BRST_PAGE_SIZE_ENVELOPE_EX5), "ISO 269 EX5 (155.0mm x 216.0mm)");
  // Photography
  janet_def(env, "page-size-photo-passport", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_PASSPORT), "Photography Passport (35.0mm x 45.0mm)");
  janet_def(env, "page-size-photo-2r", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_2R), "Photography 2R (64.0mm x 89.0mm)");
  janet_def(env, "page-size-photo-ld", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_LD), "Photography LD (89.0mm x 119.0mm)");
  janet_def(env, "page-size-photo-dsc", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_DSC), "Photography DSC (89.0mm x 119.0mm)");
  janet_def(env, "page-size-photo-3r", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_3R), "Photography 3R (89.0mm x 127.0mm)");
  janet_def(env, "page-size-photo-l", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_L), "Photography L (89.0mm x 127.0mm)");
  janet_def(env, "page-size-photo-lw", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_LW), "Photography LW (89.0mm x 133.0mm)");
  janet_def(env, "page-size-photo-kgd", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_KGD), "Photography KGD (102.0mm x 136.0mm)");
  janet_def(env, "page-size-photo-kg", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_KG), "Photography KG (102.0mm x 152.0mm)");
  janet_def(env, "page-size-photo-4r", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_4R), "Photography 4R (102.0mm x 152.0mm)");
  janet_def(env, "page-size-photo-2ld", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_2LD), "Photography 2LD (127.0mm x 169.0mm)");
  janet_def(env, "page-size-photo-dscw", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_DSCW), "Photography DSCW (127.0mm x 169.0mm)");
  janet_def(env, "page-size-photo-2l", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_2L), "Photography 2L (127.0mm x 178.0mm)");
  janet_def(env, "page-size-photo-5r", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_5R), "Photography 5R (127.0mm x 178.0mm)");
  janet_def(env, "page-size-photo-2lw", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_2LW), "Photography 2LW (127.0mm x 190.0mm)");
  janet_def(env, "page-size-photo-6r", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_6R), "Photography 6R (152.0mm x 203.0mm)");
  janet_def(env, "page-size-photo-8r", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_8R), "Photography 8R (203.0mm x 254.0mm)");
  janet_def(env, "page-size-photo-6p", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_6P), "Photography 6P (203.0mm x 254.0mm)");
  janet_def(env, "page-size-photo-6pw", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_6PW), "Photography 6PW (203.0mm x 305.0mm)");
  janet_def(env, "page-size-photo-s8r", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_S8R), "Photography S8R (203.0mm x 305.0mm)");
  janet_def(env, "page-size-photo-11r", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_11R), "Photography 11R (279.0mm x 356.0mm)");
  janet_def(env, "page-size-photo-a3-plus", janet_wrap_integer(BRST_PAGE_SIZE_PHOTO_A3_PLUS), "Photography A3+ Super B (330.0mm x 483.0mm)");
  // Newspaper
  janet_def(env, "page-size-newspaper-berliner", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_BERLINER), "Newspaper Berliner (315.0mm x 470.0mm)");
  janet_def(env, "page-size-newspaper-broadsheet", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_BROADSHEET), "Newspaper Broadsheet (597.0mm x 749.0mm)");
  janet_def(env, "page-size-newspaper-us-broadsheet", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_US_BROADSHEET), "Newspaper US Broadsheet (381.0mm x 578.0mm)");
  janet_def(env, "page-size-newspaper-british-broadsheet", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_BRITISH_BROADSHEET), "Newspaper British Broadsheet (375.0mm x 597.0mm)");
  janet_def(env, "page-size-newspaper-south-african-broadsheet", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_SOUTH_AFRICAN_BROADSHEET), "Newspaper South African Broadsheet (410.0mm x 578.0mm)");
  janet_def(env, "page-size-newspaper-ciner", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_CINER), "Newspaper Ciner (350.0mm x 500.0mm)");
  janet_def(env, "page-size-newspaper-compact", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_COMPACT), "Newspaper Compact (280.0mm x 430.0mm)");
  janet_def(env, "page-size-newspaper-nordisch", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_NORDISCH), "Newspaper Nordisch (400.0mm x 570.0mm)");
  janet_def(env, "page-size-newspaper-rhenish", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_RHENISH), "Newspaper Rhenish (350.0mm x 520.0mm)");
  janet_def(env, "page-size-newspaper-swiss", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_SWISS), "Newspaper Swiss (320.0mm x 475.0mm)");
  janet_def(env, "page-size-newspaper-tabloid", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_TABLOID), "Newspaper Tabloid (280.0mm x 430.0mm)");
  janet_def(env, "page-size-newspaper-canadian-tabloid", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_CANADIAN_TABLOID), "Newspaper Canadian Tabloid (260.0mm x 368.0mm)");
  janet_def(env, "page-size-newspaper-norwegian-tabloid", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_NORWEGIAN_TABLOID), "Newspaper Norwegian Tabloid (280.0mm x 400.0mm)");
  janet_def(env, "page-size-newspaper-new-your-times", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_NEW_YOUR_TIMES), "Newspaper New York Times (305.0mm x 559.0mm)");
  janet_def(env, "page-size-newspaper-wall-street-journal", janet_wrap_integer(BRST_PAGE_SIZE_NEWSPAPER_WALL_STREET_JOURNAL), "Newspaper Wall Street Journal (305.0mm x 578.0mm)");
  // Book
  janet_def(env, "page-size-book-folio", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_FOLIO), "Book Folio (304.8mm x 482.6mm)");
  janet_def(env, "page-size-book-quarto", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_QUARTO), "Book Quarto (241.3mm x 304.8mm)");
  janet_def(env, "page-size-book-imperial-octavo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_IMPERIAL_OCTAVO), "Book Imperial Octavo (209.6mm x 292.1mm)");
  janet_def(env, "page-size-book-super-octavo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_SUPER_OCTAVO), "Book Super Octavo (177.8mm x 279.4mm)");
  janet_def(env, "page-size-book-royal-octavo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_ROYAL_OCTAVO), "Book Royal Octavo (165.1mm x 254.0mm)");
  janet_def(env, "page-size-book-medium-octavo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_MEDIUM_OCTAVO), "Book Medium Octavo (165.1mm x 234.9mm)");
  janet_def(env, "page-size-book-octavo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_OCTAVO), "Book Octavo (152.4mm x 228.6mm)");
  janet_def(env, "page-size-book-crown-octavo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_CROWN_OCTAVO), "Book Crown Octavo (136.5mm x 203.2mm)");
  janet_def(env, "page-size-book-12mo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_12MO), "Book 12mo (127.0mm x 187.3mm)");
  janet_def(env, "page-size-book-16mo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_16MO), "Book 16mo (101.6mm x 171.4mm)");
  janet_def(env, "page-size-book-18mo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_18MO), "Book 18mo (101.6mm x 165.1mm)");
  janet_def(env, "page-size-book-32mo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_32MO), "Book 32mo (88.9mm x 139.7mm)");
  janet_def(env, "page-size-book-48mo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_48MO), "Book 48mo (63.5mm x 101.6mm)");
  janet_def(env, "page-size-book-64mo", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_64MO), "Book 64mo (50.8mm x 76.2mm)");
  janet_def(env, "page-size-book-a-format", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_A_FORMAT), "Book A Format (110.0mm x 178.0mm)");
  janet_def(env, "page-size-book-b-format", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_B_FORMAT), "Book B Format (129.0mm x 198.0mm)");
  janet_def(env, "page-size-book-c-format", janet_wrap_integer(BRST_PAGE_SIZE_BOOK_C_FORMAT), "Book C Format (135.0mm x 216.0mm)");
  // Business Card
  janet_def(env, "page-size-business-card-iso-216", janet_wrap_integer(BRST_PAGE_SIZE_BUSINESS_CARD_ISO_216), "Business Card ISO 216 (74.0mm x 52.0mm)");
  janet_def(env, "page-size-business-card-us-canada", janet_wrap_integer(BRST_PAGE_SIZE_BUSINESS_CARD_US_CANADA), "Business Card US/Canada (88.9mm x 50.8mm)");
  janet_def(env, "page-size-business-card-european", janet_wrap_integer(BRST_PAGE_SIZE_BUSINESS_CARD_EUROPEAN), "Business Card European (85.0mm x 55.0mm)");
  janet_def(env, "page-size-business-card-scandinavia", janet_wrap_integer(BRST_PAGE_SIZE_BUSINESS_CARD_SCANDINAVIA), "Business Card Scandinavia (90.0mm x 55.0mm)");
  janet_def(env, "page-size-business-card-china", janet_wrap_integer(BRST_PAGE_SIZE_BUSINESS_CARD_CHINA), "Business Card China (90.0mm x 54.0mm)");
  janet_def(env, "page-size-business-card-japan", janet_wrap_integer(BRST_PAGE_SIZE_BUSINESS_CARD_JAPAN), "Business Card Japan (91.0mm x 55.0mm)");
  janet_def(env, "page-size-business-card-iran", janet_wrap_integer(BRST_PAGE_SIZE_BUSINESS_CARD_IRAN), "Business Card Iran (85.0mm x 48.0mm)");
  janet_def(env, "page-size-business-card-hungary", janet_wrap_integer(BRST_PAGE_SIZE_BUSINESS_CARD_HUNGARY), "Business Card Hungary (90.0mm x 50.0mm)");
  janet_def(env, "page-size-business-card-iso-7810-id-1", janet_wrap_integer(BRST_PAGE_SIZE_BUSINESS_CARD_ISO_7810_ID_1), "Business Card ISO 7810 ID-1 (85.6mm x 54.0mm)");
  // ISO 217:1995
  janet_def(env, "page-size-raw-ra0", janet_wrap_integer(BRST_PAGE_SIZE_RAW_RA0), "ISO 217:1995 RA0 (860.0mm x 1220.0mm)");
  janet_def(env, "page-size-raw-ra1", janet_wrap_integer(BRST_PAGE_SIZE_RAW_RA1), "ISO 217:1995 RA1 (610.0mm x 860.0mm)");
  janet_def(env, "page-size-raw-ra2", janet_wrap_integer(BRST_PAGE_SIZE_RAW_RA2), "ISO 217:1995 RA2 (430.0mm x 610.0mm)");
  janet_def(env, "page-size-raw-ra3", janet_wrap_integer(BRST_PAGE_SIZE_RAW_RA3), "ISO 217:1995 RA3 (305.0mm x 430.0mm)");
  janet_def(env, "page-size-raw-ra4", janet_wrap_integer(BRST_PAGE_SIZE_RAW_RA4), "ISO 217:1995 RA4 (215.0mm x 305.0mm)");
  janet_def(env, "page-size-raw-sra0", janet_wrap_integer(BRST_PAGE_SIZE_RAW_SRA0), "ISO 217:1995 SRA0 (900.0mm x 1280.0mm)");
  janet_def(env, "page-size-raw-sra1", janet_wrap_integer(BRST_PAGE_SIZE_RAW_SRA1), "ISO 217:1995 SRA1 (640.0mm x 900.0mm)");
  janet_def(env, "page-size-raw-sra2", janet_wrap_integer(BRST_PAGE_SIZE_RAW_SRA2), "ISO 217:1995 SRA2 (450.0mm x 640.0mm)");
  janet_def(env, "page-size-raw-sra3", janet_wrap_integer(BRST_PAGE_SIZE_RAW_SRA3), "ISO 217:1995 SRA3 (320.0mm x 450.0mm)");
  janet_def(env, "page-size-raw-sra4", janet_wrap_integer(BRST_PAGE_SIZE_RAW_SRA4), "ISO 217:1995 SRA4 (225.0mm x 320.0mm)");
  janet_def(env, "page-size-raw-sra1-plus", janet_wrap_integer(BRST_PAGE_SIZE_RAW_SRA1_PLUS), "ISO 217:1995 SRA1+ (660.0mm x 920.0mm)");
  janet_def(env, "page-size-raw-sra2-plus", janet_wrap_integer(BRST_PAGE_SIZE_RAW_SRA2_PLUS), "ISO 217:1995 SRA2+ (480.0mm x 650.0mm)");
  janet_def(env, "page-size-raw-sra3-plus", janet_wrap_integer(BRST_PAGE_SIZE_RAW_SRA3_PLUS), "ISO 217:1995 SRA3+ (320.0mm x 460.0mm)");
  janet_def(env, "page-size-raw-sra3-plus-plus", janet_wrap_integer(BRST_PAGE_SIZE_RAW_SRA3_PLUS_PLUS), "ISO 217:1995 SRA3++ (320.0mm x 464.0mm)");
  janet_def(env, "page-size-raw-a0u", janet_wrap_integer(BRST_PAGE_SIZE_RAW_A0U), "ISO 217:1995 A0U (880.0mm x 1230.0mm)");
  janet_def(env, "page-size-raw-a1u", janet_wrap_integer(BRST_PAGE_SIZE_RAW_A1U), "ISO 217:1995 A1U (625.0mm x 880.0mm)");
  janet_def(env, "page-size-raw-a2u", janet_wrap_integer(BRST_PAGE_SIZE_RAW_A2U), "ISO 217:1995 A2U (450.0mm x 625.0mm)");
  janet_def(env, "page-size-raw-a3u", janet_wrap_integer(BRST_PAGE_SIZE_RAW_A3U), "ISO 217:1995 A3U (330.0mm x 450.0mm)");
  janet_def(env, "page-size-raw-a4u", janet_wrap_integer(BRST_PAGE_SIZE_RAW_A4U), "ISO 217:1995 A4U (240.0mm x 330.0mm)");
  // Billboard
  janet_def(env, "page-size-billboard-1-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_1_SHEET), "Billboard 1 Sheet (508.0mm x 762.0mm)");
  janet_def(env, "page-size-billboard-2-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_2_SHEET), "Billboard 2 Sheet (762.0mm x 1016.0mm)");
  janet_def(env, "page-size-billboard-4-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_4_SHEET), "Billboard 4 Sheet (1016.0mm x 1524.0mm)");
  janet_def(env, "page-size-billboard-6-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_6_SHEET), "Billboard 6 Sheet (1200.0mm x 1800.0mm)");
  janet_def(env, "page-size-billboard-12-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_12_SHEET), "Billboard 12 Sheet (3048.0mm x 1524.0mm)");
  janet_def(env, "page-size-billboard-16-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_16_SHEET), "Billboard 16 Sheet (2032.0mm x 3048.0mm)");
  janet_def(env, "page-size-billboard-32-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_32_SHEET), "Billboard 32 Sheet (4064.0mm x 3048.0mm)");
  // skip: janet_def(env, "page-size-billboard-48-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_48_SHEET), "Billboard 48 Sheet (6096.0mm x 3048.0mm)");
  // skip: janet_def(env, "page-size-billboard-64-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_64_SHEET), "Billboard 64 Sheet (8128.0mm x 3048.0mm)");
  // skip: janet_def(env, "page-size-billboard-96-sheet", janet_wrap_integer(BRST_PAGE_SIZE_BILLBOARD_96_SHEET), "Billboard 96 Sheet (12192.0mm x 3048.0mm)");
  // Japanese JIS
  janet_def(env, "page-size-japanese-jb0", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB0), "Japanese JIS JB0 (1030.0mm x 1456.0mm)");
  janet_def(env, "page-size-japanese-jb1", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB1), "Japanese JIS JB1 (728.0mm x 1030.0mm)");
  janet_def(env, "page-size-japanese-jb2", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB2), "Japanese JIS JB2 (515.0mm x 728.0mm)");
  janet_def(env, "page-size-japanese-jb3", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB3), "Japanese JIS JB3 (364.0mm x 515.0mm)");
  janet_def(env, "page-size-japanese-jb4", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB4), "Japanese JIS JB4 (257.0mm x 364.0mm)");
  janet_def(env, "page-size-japanese-jb5", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB5), "Japanese JIS JB5 (182.0mm x 257.0mm)");
  janet_def(env, "page-size-japanese-jb6", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB6), "Japanese JIS JB6 (128.0mm x 182.0mm)");
  janet_def(env, "page-size-japanese-jb7", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB7), "Japanese JIS JB7 (91.0mm x 128.0mm)");
  janet_def(env, "page-size-japanese-jb8", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB8), "Japanese JIS JB8 (64.0mm x 91.0mm)");
  janet_def(env, "page-size-japanese-jb9", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB9), "Japanese JIS JB9 (45.0mm x 64.0mm)");
  janet_def(env, "page-size-japanese-jb10", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB10), "Japanese JIS JB10 (32.0mm x 45.0mm)");
  janet_def(env, "page-size-japanese-jb11", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB11), "Japanese JIS JB11 (22.0mm x 32.0mm)");
  janet_def(env, "page-size-japanese-jb12", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_JB12), "Japanese JIS JB12 (16.0mm x 22.0mm)");
  // Japanese Shiroku
  janet_def(env, "page-size-japanese-shiroku-ban-4", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_SHIROKU_BAN_4), "Japanese Shiroku Shiroku ban 4 (264.0mm x 379.0mm)");
  janet_def(env, "page-size-japanese-shiroku-ban-5", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_SHIROKU_BAN_5), "Japanese Shiroku Shiroku ban 5 (189.0mm x 262.0mm)");
  janet_def(env, "page-size-japanese-shiroku-ban-6", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_SHIROKU_BAN_6), "Japanese Shiroku Shiroku ban 6 (127.0mm x 188.0mm)");
  // Japanese Kiku
  janet_def(env, "page-size-japanese-kiku-4", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_KIKU_4), "Japanese Kiku Kiku 4 (227.0mm x 306.0mm)");
  janet_def(env, "page-size-japanese-kiku-5", janet_wrap_integer(BRST_PAGE_SIZE_JAPANESE_KIKU_5), "Japanese Kiku Kiku 5 (151.0mm x 227.0mm)");
  // Canadian CAN 2-9.60M
  janet_def(env, "page-size-canadian-p1", janet_wrap_integer(BRST_PAGE_SIZE_CANADIAN_P1), "Canadian CAN 2-9.60M P1 (560.0mm x 860.0mm)");
  janet_def(env, "page-size-canadian-p2", janet_wrap_integer(BRST_PAGE_SIZE_CANADIAN_P2), "Canadian CAN 2-9.60M P2 (430.0mm x 560.0mm)");
  janet_def(env, "page-size-canadian-p3", janet_wrap_integer(BRST_PAGE_SIZE_CANADIAN_P3), "Canadian CAN 2-9.60M P3 (280.0mm x 430.0mm)");
  janet_def(env, "page-size-canadian-p4", janet_wrap_integer(BRST_PAGE_SIZE_CANADIAN_P4), "Canadian CAN 2-9.60M P4 (215.0mm x 280.0mm)");
  janet_def(env, "page-size-canadian-p5", janet_wrap_integer(BRST_PAGE_SIZE_CANADIAN_P5), "Canadian CAN 2-9.60M P5 (140.0mm x 215.0mm)");
  janet_def(env, "page-size-canadian-p6", janet_wrap_integer(BRST_PAGE_SIZE_CANADIAN_P6), "Canadian CAN 2-9.60M P6 (107.0mm x 140.0mm)");
  // German DIN 476
  janet_def(env, "page-size-din-d0", janet_wrap_integer(BRST_PAGE_SIZE_DIN_D0), "German DIN 476 DIN D0 (771.0mm x 1090.0mm)");
  janet_def(env, "page-size-din-d1", janet_wrap_integer(BRST_PAGE_SIZE_DIN_D1), "German DIN 476 DIN D1 (545.0mm x 771.0mm)");
  janet_def(env, "page-size-din-d2", janet_wrap_integer(BRST_PAGE_SIZE_DIN_D2), "German DIN 476 DIN D2 (385.0mm x 545.0mm)");
  janet_def(env, "page-size-din-d3", janet_wrap_integer(BRST_PAGE_SIZE_DIN_D3), "German DIN 476 DIN D3 (272.0mm x 385.0mm)");
  janet_def(env, "page-size-din-d4", janet_wrap_integer(BRST_PAGE_SIZE_DIN_D4), "German DIN 476 DIN D4 (192.0mm x 272.0mm)");
  janet_def(env, "page-size-din-d5", janet_wrap_integer(BRST_PAGE_SIZE_DIN_D5), "German DIN 476 DIN D5 (136.0mm x 192.0mm)");
  janet_def(env, "page-size-din-d6", janet_wrap_integer(BRST_PAGE_SIZE_DIN_D6), "German DIN 476 DIN D6 (96.0mm x 136.0mm)");
  janet_def(env, "page-size-din-d7", janet_wrap_integer(BRST_PAGE_SIZE_DIN_D7), "German DIN 476 DIN D7 (68.0mm x 96.0mm)");
  janet_def(env, "page-size-din-d8", janet_wrap_integer(BRST_PAGE_SIZE_DIN_D8), "German DIN 476 DIN D8 (48.0mm x 68.0mm)");
  // Swedish SIS 01 47 11
  janet_def(env, "page-size-sis-e0", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E0), "Swedish SIS 01 47 11 SIS E0 (878.0mm x 1242.0mm)");
  janet_def(env, "page-size-sis-e1", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E1), "Swedish SIS 01 47 11 SIS E1 (621.0mm x 878.0mm)");
  janet_def(env, "page-size-sis-e2", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E2), "Swedish SIS 01 47 11 SIS E2 (439.0mm x 621.0mm)");
  janet_def(env, "page-size-sis-e3", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E3), "Swedish SIS 01 47 11 SIS E3 (310.0mm x 439.0mm)");
  janet_def(env, "page-size-sis-e4", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E4), "Swedish SIS 01 47 11 SIS E4 (220.0mm x 310.0mm)");
  janet_def(env, "page-size-sis-e5", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E5), "Swedish SIS 01 47 11 SIS E5 (155.0mm x 220.0mm)");
  janet_def(env, "page-size-sis-e6", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E6), "Swedish SIS 01 47 11 SIS E6 (110.0mm x 155.0mm)");
  janet_def(env, "page-size-sis-e7", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E7), "Swedish SIS 01 47 11 SIS E7 (78.0mm x 110.0mm)");
  janet_def(env, "page-size-sis-e8", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E8), "Swedish SIS 01 47 11 SIS E8 (55.0mm x 78.0mm)");
  janet_def(env, "page-size-sis-e9", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E9), "Swedish SIS 01 47 11 SIS E9 (39.0mm x 55.0mm)");
  janet_def(env, "page-size-sis-e10", janet_wrap_integer(BRST_PAGE_SIZE_SIS_E10), "Swedish SIS 01 47 11 SIS E10 (27.0mm x 39.0mm)");
  janet_def(env, "page-size-sis-f0", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F0), "Swedish SIS 01 47 11 SIS F0 (958.0mm x 1354.0mm)");
  janet_def(env, "page-size-sis-f1", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F1), "Swedish SIS 01 47 11 SIS F1 (677.0mm x 958.0mm)");
  janet_def(env, "page-size-sis-f2", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F2), "Swedish SIS 01 47 11 SIS F2 (479.0mm x 677.0mm)");
  janet_def(env, "page-size-sis-f3", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F3), "Swedish SIS 01 47 11 SIS F3 (339.0mm x 479.0mm)");
  janet_def(env, "page-size-sis-f4", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F4), "Swedish SIS 01 47 11 SIS F4 (239.0mm x 339.0mm)");
  janet_def(env, "page-size-sis-f5", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F5), "Swedish SIS 01 47 11 SIS F5 (169.0mm x 239.0mm)");
  janet_def(env, "page-size-sis-f6", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F6), "Swedish SIS 01 47 11 SIS F6 (120.0mm x 169.0mm)");
  janet_def(env, "page-size-sis-f7", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F7), "Swedish SIS 01 47 11 SIS F7 (85.0mm x 120.0mm)");
  janet_def(env, "page-size-sis-f8", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F8), "Swedish SIS 01 47 11 SIS F8 (60.0mm x 85.0mm)");
  janet_def(env, "page-size-sis-f9", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F9), "Swedish SIS 01 47 11 SIS F9 (42.0mm x 60.0mm)");
  janet_def(env, "page-size-sis-f10", janet_wrap_integer(BRST_PAGE_SIZE_SIS_F10), "Swedish SIS 01 47 11 SIS F10 (30.0mm x 42.0mm)");
  janet_def(env, "page-size-sis-g0", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G0), "Swedish SIS 01 47 11 SIS G0 (1044.0mm x 1477.0mm)");
  janet_def(env, "page-size-sis-g1", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G1), "Swedish SIS 01 47 11 SIS G1 (738.0mm x 1044.0mm)");
  janet_def(env, "page-size-sis-g2", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G2), "Swedish SIS 01 47 11 SIS G2 (522.0mm x 738.0mm)");
  janet_def(env, "page-size-sis-g3", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G3), "Swedish SIS 01 47 11 SIS G3 (369.0mm x 522.0mm)");
  janet_def(env, "page-size-sis-g4", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G4), "Swedish SIS 01 47 11 SIS G4 (261.0mm x 369.0mm)");
  janet_def(env, "page-size-sis-g5", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G5), "Swedish SIS 01 47 11 SIS G5 (185.0mm x 261.0mm)");
  janet_def(env, "page-size-sis-g6", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G6), "Swedish SIS 01 47 11 SIS G6 (131.0mm x 185.0mm)");
  janet_def(env, "page-size-sis-g7", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G7), "Swedish SIS 01 47 11 SIS G7 (92.0mm x 131.0mm)");
  janet_def(env, "page-size-sis-g8", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G8), "Swedish SIS 01 47 11 SIS G8 (65.0mm x 92.0mm)");
  janet_def(env, "page-size-sis-g9", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G9), "Swedish SIS 01 47 11 SIS G9 (46.0mm x 65.0mm)");
  janet_def(env, "page-size-sis-g10", janet_wrap_integer(BRST_PAGE_SIZE_SIS_G10), "Swedish SIS 01 47 11 SIS G10 (33.0mm x 46.0mm)");
  janet_def(env, "page-size-sis-d0", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D0), "Swedish SIS 01 47 11 SIS D0 (1091.0mm x 1542.0mm)");
  janet_def(env, "page-size-sis-d1", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D1), "Swedish SIS 01 47 11 SIS D1 (771.0mm x 1091.0mm)");
  janet_def(env, "page-size-sis-d2", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D2), "Swedish SIS 01 47 11 SIS D2 (545.0mm x 771.0mm)");
  janet_def(env, "page-size-sis-d3", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D3), "Swedish SIS 01 47 11 SIS D3 (386.0mm x 545.0mm)");
  janet_def(env, "page-size-sis-d4", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D4), "Swedish SIS 01 47 11 SIS D4 (273.0mm x 386.0mm)");
  janet_def(env, "page-size-sis-d5", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D5), "Swedish SIS 01 47 11 SIS D5 (193.0mm x 273.0mm)");
  janet_def(env, "page-size-sis-d6", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D6), "Swedish SIS 01 47 11 SIS D6 (136.0mm x 193.0mm)");
  janet_def(env, "page-size-sis-d7", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D7), "Swedish SIS 01 47 11 SIS D7 (96.0mm x 136.0mm)");
  janet_def(env, "page-size-sis-d8", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D8), "Swedish SIS 01 47 11 SIS D8 (68.0mm x 96.0mm)");
  janet_def(env, "page-size-sis-d9", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D9), "Swedish SIS 01 47 11 SIS D9 (48.0mm x 68.0mm)");
  janet_def(env, "page-size-sis-d10", janet_wrap_integer(BRST_PAGE_SIZE_SIS_D10), "Swedish SIS 01 47 11 SIS D10 (34.0mm x 48.0mm)");
  // Colombian
  janet_def(env, "page-size-colombian-carta", janet_wrap_integer(BRST_PAGE_SIZE_COLOMBIAN_CARTA), "Colombian Carta (216.0mm x 279.0mm)");
  janet_def(env, "page-size-colombian-extra-tabloide", janet_wrap_integer(BRST_PAGE_SIZE_COLOMBIAN_EXTRA_TABLOIDE), "Colombian Extra Tabloide (304.0mm x 457.2mm)");
  janet_def(env, "page-size-colombian-oficio", janet_wrap_integer(BRST_PAGE_SIZE_COLOMBIAN_OFICIO), "Colombian Oficio (216.0mm x 330.0mm)");
  janet_def(env, "page-size-colombian-1-8-pliego", janet_wrap_integer(BRST_PAGE_SIZE_COLOMBIAN_1_8_PLIEGO), "Colombian 1/8 pliego (250.0mm x 350.0mm)");
  janet_def(env, "page-size-colombian-1-4-pliego", janet_wrap_integer(BRST_PAGE_SIZE_COLOMBIAN_1_4_PLIEGO), "Colombian 1/4 pliego (350.0mm x 500.0mm)");
  janet_def(env, "page-size-colombian-1-2-pliego", janet_wrap_integer(BRST_PAGE_SIZE_COLOMBIAN_1_2_PLIEGO), "Colombian 1/2 pliego (500.0mm x 700.0mm)");
  janet_def(env, "page-size-colombian-pliego", janet_wrap_integer(BRST_PAGE_SIZE_COLOMBIAN_PLIEGO), "Colombian Pliego (700.0mm x 1000.0mm)");
  // Chinese GB/T 148-1997
  janet_def(env, "page-size-chinese-d0", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_D0), "Chinese GB/T 148-1997 D0 (764.0mm x 1064.0mm)");
  janet_def(env, "page-size-chinese-d1", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_D1), "Chinese GB/T 148-1997 D1 (532.0mm x 760.0mm)");
  janet_def(env, "page-size-chinese-d2", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_D2), "Chinese GB/T 148-1997 D2 (380.0mm x 528.0mm)");
  janet_def(env, "page-size-chinese-d3", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_D3), "Chinese GB/T 148-1997 D3 (264.0mm x 376.0mm)");
  janet_def(env, "page-size-chinese-d4", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_D4), "Chinese GB/T 148-1997 D4 (188.0mm x 260.0mm)");
  janet_def(env, "page-size-chinese-d5", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_D5), "Chinese GB/T 148-1997 D5 (130.0mm x 184.0mm)");
  janet_def(env, "page-size-chinese-d6", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_D6), "Chinese GB/T 148-1997 D6 (92.0mm x 126.0mm)");
  janet_def(env, "page-size-chinese-rd0", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_RD0), "Chinese GB/T 148-1997 RD0 (787.0mm x 1092.0mm)");
  janet_def(env, "page-size-chinese-rd1", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_RD1), "Chinese GB/T 148-1997 RD1 (546.0mm x 787.0mm)");
  janet_def(env, "page-size-chinese-rd2", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_RD2), "Chinese GB/T 148-1997 RD2 (393.0mm x 546.0mm)");
  janet_def(env, "page-size-chinese-rd3", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_RD3), "Chinese GB/T 148-1997 RD3 (273.0mm x 393.0mm)");
  janet_def(env, "page-size-chinese-rd4", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_RD4), "Chinese GB/T 148-1997 RD4 (196.0mm x 273.0mm)");
  janet_def(env, "page-size-chinese-rd5", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_RD5), "Chinese GB/T 148-1997 RD5 (136.0mm x 196.0mm)");
  janet_def(env, "page-size-chinese-rd6", janet_wrap_integer(BRST_PAGE_SIZE_CHINESE_RD6), "Chinese GB/T 148-1997 RD6 (98.0mm x 136.0mm)");
  // Transitional PA Series
  janet_def(env, "page-size-transitional-pa0", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA0), "Transitional PA Series PA0 (840.0mm x 1120.0mm)");
  janet_def(env, "page-size-transitional-pa1", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA1), "Transitional PA Series PA1 (560.0mm x 840.0mm)");
  janet_def(env, "page-size-transitional-pa2", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA2), "Transitional PA Series PA2 (420.0mm x 560.0mm)");
  janet_def(env, "page-size-transitional-pa3", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA3), "Transitional PA Series PA3 (280.0mm x 420.0mm)");
  janet_def(env, "page-size-transitional-pa4", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA4), "Transitional PA Series PA4 (210.0mm x 280.0mm)");
  janet_def(env, "page-size-transitional-pa5", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA5), "Transitional PA Series PA5 (140.0mm x 210.0mm)");
  janet_def(env, "page-size-transitional-pa6", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA6), "Transitional PA Series PA6 (105.0mm x 140.0mm)");
  janet_def(env, "page-size-transitional-pa7", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA7), "Transitional PA Series PA7 (70.0mm x 105.0mm)");
  janet_def(env, "page-size-transitional-pa8", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA8), "Transitional PA Series PA8 (52.0mm x 70.0mm)");
  janet_def(env, "page-size-transitional-pa9", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA9), "Transitional PA Series PA9 (35.0mm x 52.0mm)");
  janet_def(env, "page-size-transitional-pa10", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_PA10), "Transitional PA Series PA10 (26.0mm x 35.0mm)");
  // Transitional F Series
  janet_def(env, "page-size-transitional-f0", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F0), "Transitional F Series F0 (841.0mm x 1321.0mm)");
  janet_def(env, "page-size-transitional-f1", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F1), "Transitional F Series F1 (660.0mm x 841.0mm)");
  janet_def(env, "page-size-transitional-f2", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F2), "Transitional F Series F2 (420.0mm x 660.0mm)");
  janet_def(env, "page-size-transitional-f3", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F3), "Transitional F Series F3 (330.0mm x 420.0mm)");
  janet_def(env, "page-size-transitional-f4", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F4), "Transitional F Series F4 (210.0mm x 330.0mm)");
  janet_def(env, "page-size-transitional-f5", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F5), "Transitional F Series F5 (165.0mm x 210.0mm)");
  janet_def(env, "page-size-transitional-f6", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F6), "Transitional F Series F6 (105.0mm x 165.0mm)");
  janet_def(env, "page-size-transitional-f7", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F7), "Transitional F Series F7 (82.0mm x 105.0mm)");
  janet_def(env, "page-size-transitional-f8", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F8), "Transitional F Series F8 (52.0mm x 82.0mm)");
  janet_def(env, "page-size-transitional-f9", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F9), "Transitional F Series F9 (41.0mm x 52.0mm)");
  janet_def(env, "page-size-transitional-f10", janet_wrap_integer(BRST_PAGE_SIZE_TRANSITIONAL_F10), "Transitional F Series F10 (26.0mm x 41.0mm)");
  // Imperial
  janet_def(env, "page-size-imperial-antiquarian", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_ANTIQUARIAN), "Imperial Antiquarian (787.0mm x 1346.0mm)");
  janet_def(env, "page-size-imperial-atlas", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_ATLAS), "Imperial Atlas (660.0mm x 864.0mm)");
  janet_def(env, "page-size-imperial-brief", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_BRIEF), "Imperial Brief (343.0mm x 406.0mm)");
  janet_def(env, "page-size-imperial-broadsheet", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_BROADSHEET), "Imperial Broadsheet (457.0mm x 610.0mm)");
  janet_def(env, "page-size-imperial-cartridge", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_CARTRIDGE), "Imperial Cartridge (533.0mm x 660.0mm)");
  janet_def(env, "page-size-imperial-columbier", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_COLUMBIER), "Imperial Columbier (597.0mm x 876.0mm)");
  janet_def(env, "page-size-imperial-copy-draught", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_COPY_DRAUGHT), "Imperial Copy Draught (406.0mm x 508.0mm)");
  janet_def(env, "page-size-imperial-crown", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_CROWN), "Imperial Crown (381.0mm x 508.0mm)");
  janet_def(env, "page-size-imperial-demy", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_DEMY), "Imperial Demy (445.0mm x 572.0mm)");
  janet_def(env, "page-size-imperial-double-demy", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_DOUBLE_DEMY), "Imperial Double Demy (572.0mm x 902.0mm)");
  janet_def(env, "page-size-imperial-quad-demy", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_QUAD_DEMY), "Imperial Quad Demy (889.0mm x 1143.0mm)");
  janet_def(env, "page-size-imperial-elephant", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_ELEPHANT), "Imperial Elephant (584.0mm x 711.0mm)");
  janet_def(env, "page-size-imperial-double-elephant", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_DOUBLE_ELEPHANT), "Imperial Double Elephant (678.0mm x 1016.0mm)");
  janet_def(env, "page-size-imperial-emperor", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_EMPEROR), "Imperial Emperor (1219.0mm x 1829.0mm)");
  janet_def(env, "page-size-imperial-foolscap", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_FOOLSCAP), "Imperial Foolscap (343.0mm x 432.0mm)");
  janet_def(env, "page-size-imperial-small-foolscap", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_SMALL_FOOLSCAP), "Imperial Small Foolscap (337.0mm x 419.0mm)");
  janet_def(env, "page-size-imperial-grand-eagle", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_GRAND_EAGLE), "Imperial Grand Eagle (730.0mm x 1067.0mm)");
  janet_def(env, "page-size-imperial-imperial", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_IMPERIAL), "Imperial Imperial (559.0mm x 762.0mm)");
  janet_def(env, "page-size-imperial-medium", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_MEDIUM), "Imperial Medium (470.0mm x 584.0mm)");
  janet_def(env, "page-size-imperial-monarch", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_MONARCH), "Imperial Monarch (184.0mm x 267.0mm)");
  janet_def(env, "page-size-imperial-post", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_POST), "Imperial Post (394.0mm x 489.0mm)");
  janet_def(env, "page-size-imperial-half-post", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_HALF_POST), "Imperial Sheet, Half Post (495.0mm x 597.0mm)");
  janet_def(env, "page-size-imperial-pinched-post", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_PINCHED_POST), "Imperial Pinched Post (375.0mm x 470.0mm)");
  janet_def(env, "page-size-imperial-large-post", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_LARGE_POST), "Imperial Large Post (394.0mm x 508.0mm)");
  janet_def(env, "page-size-imperial-double-large-post", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_DOUBLE_LARGE_POST), "Imperial Double Large Post (533.0mm x 838.0mm)");
  janet_def(env, "page-size-imperial-double-post", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_DOUBLE_POST), "Imperial Double Post (483.0mm x 762.0mm)");
  janet_def(env, "page-size-imperial-pott", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_POTT), "Imperial Pott (318.0mm x 381.0mm)");
  janet_def(env, "page-size-imperial-princess", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_PRINCESS), "Imperial Princess (546.0mm x 711.0mm)");
  janet_def(env, "page-size-imperial-quarto", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_QUARTO), "Imperial Quarto (229.0mm x 279.0mm)");
  janet_def(env, "page-size-imperial-royal", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_ROYAL), "Imperial Royal (508.0mm x 635.0mm)");
  janet_def(env, "page-size-imperial-super-royal", janet_wrap_integer(BRST_PAGE_SIZE_IMPERIAL_SUPER_ROYAL), "Imperial Super Royal (483.0mm x 686.0mm)");
  // French
  janet_def(env, "page-size-french-cloche", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_CLOCHE), "French Cloche (300.0mm x 400.0mm)");
  janet_def(env, "page-size-french-pot-ecolier", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_POT_ECOLIER), "French Pot, écolier (310.0mm x 400.0mm)");
  janet_def(env, "page-size-french-telliere", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_TELLIERE), "French Tellière (340.0mm x 440.0mm)");
  janet_def(env, "page-size-french-couronne-ecriture", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_COURONNE_ECRITURE), "French Couronne écriture (360.0mm x 360.0mm)");
  janet_def(env, "page-size-french-couronne-edition", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_COURONNE_EDITION), "French Couronne édition (370.0mm x 470.0mm)");
  janet_def(env, "page-size-french-roberto", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_ROBERTO), "French Roberto (390.0mm x 500.0mm)");
  janet_def(env, "page-size-french-ecu", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_ECU), "French Écu (400.0mm x 520.0mm)");
  janet_def(env, "page-size-french-coquille", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_COQUILLE), "French Coquille (440.0mm x 560.0mm)");
  janet_def(env, "page-size-french-carre", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_CARRE), "French Carré (450.0mm x 560.0mm)");
  janet_def(env, "page-size-french-cavalier", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_CAVALIER), "French Cavalier (460.0mm x 620.0mm)");
  janet_def(env, "page-size-french-demi-raisin", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_DEMI_RAISIN), "French Demi-raisin (325.0mm x 500.0mm)");
  janet_def(env, "page-size-french-raisin", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_RAISIN), "French Raisin (500.0mm x 650.0mm)");
  janet_def(env, "page-size-french-double-raisin", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_DOUBLE_RAISIN), "French Double Raisin (650.0mm x 1000.0mm)");
  janet_def(env, "page-size-french-jesus", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_JESUS), "French Jésus (560.0mm x 760.0mm)");
  janet_def(env, "page-size-french-soleil", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_SOLEIL), "French Soleil (600.0mm x 800.0mm)");
  janet_def(env, "page-size-french-colombier-affiche", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_COLOMBIER_AFFICHE), "French Colombier affiche (600.0mm x 800.0mm)");
  janet_def(env, "page-size-french-colombier-commercial", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_COLOMBIER_COMMERCIAL), "French Colombier commercial (630.0mm x 900.0mm)");
  janet_def(env, "page-size-french-petit-aigle", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_PETIT_AIGLE), "French Petit Aigle (700.0mm x 940.0mm)");
  janet_def(env, "page-size-french-grand-aigle", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_GRAND_AIGLE), "French Grand Aigle (750.0mm x 1050.0mm)");
  janet_def(env, "page-size-french-grand-monde", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_GRAND_MONDE), "French Grand Monde (900.0mm x 1260.0mm)");
  janet_def(env, "page-size-french-univers", janet_wrap_integer(BRST_PAGE_SIZE_FRENCH_UNIVERS), "French Univers (1000.0mm x 1130.0mm)");
  // Russian GOST 5773-90
  janet_def(env, "page-size-russian-60x84-8", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_60X84_8), "Russian GOST 5773-90 60x84/8 (205.0mm x 290.0mm)");
  janet_def(env, "page-size-russian-60x84-16", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_60X84_16), "Russian GOST 5773-90 60x84/16 (145.0mm x 200.0mm)");
  janet_def(env, "page-size-russian-60x84-32", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_60X84_32), "Russian GOST 5773-90 60x84/32 (100.0mm x 140.0mm)");
  janet_def(env, "page-size-russian-60x90-8", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_60X90_8), "Russian GOST 5773-90 60x90/8 (220.0mm x 290.0mm)");
  janet_def(env, "page-size-russian-60x90-16", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_60X90_16), "Russian GOST 5773-90 60x90/16 (145.0mm x 215.0mm)");
  janet_def(env, "page-size-russian-70x100-16", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_70X100_16), "Russian GOST 5773-90 70x100/16 (170.0mm x 240.0mm)");
  janet_def(env, "page-size-russian-70x100-32", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_70X100_32), "Russian GOST 5773-90 70x100/32 (120.0mm x 165.0mm)");
  janet_def(env, "page-size-russian-70x108-8", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_70X108_8), "Russian GOST 5773-90 70x108/8 (265.0mm x 340.0mm)");
  janet_def(env, "page-size-russian-70x108-16", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_70X108_16), "Russian GOST 5773-90 70x108/16 (170.0mm x 260.0mm)");
  janet_def(env, "page-size-russian-70x108-32", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_70X108_32), "Russian GOST 5773-90 70x108/32 (130.0mm x 165.0mm)");
  janet_def(env, "page-size-russian-70x90-16", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_70X90_16), "Russian GOST 5773-90 70x90/16 (170.0mm x 215.0mm)");
  janet_def(env, "page-size-russian-70x90-32", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_70X90_32), "Russian GOST 5773-90 70x90/32 (107.0mm x 165.0mm)");
  janet_def(env, "page-size-russian-75x90-32", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_75X90_32), "Russian GOST 5773-90 75x90/32 (107.0mm x 177.0mm)");
  janet_def(env, "page-size-russian-84x108-8", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_84X108_8), "Russian GOST 5773-90 84x108/16 (205.0mm x 260.0mm)");
  janet_def(env, "page-size-russian-84x108-32", janet_wrap_integer(BRST_PAGE_SIZE_RUSSIAN_84X108_32), "Russian GOST 5773-90 84x108/32 (130.0mm x 200.0mm)");

  janet_cfuns(env, "brst", cfuns);
}