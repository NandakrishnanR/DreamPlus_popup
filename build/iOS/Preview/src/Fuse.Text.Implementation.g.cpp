// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <climits>
#include <ft2build.h>
#include <Fuse.Text.Font.h>
#include <Fuse.Text.Glyph.h>
#include <Fuse.Text.Implementation.BitArray.h>
#include <Fuse.Text.Implementation.CString.h>
#include <Fuse.Text.Implementation.FreeType.h>
#include <Fuse.Text.Implementation.FreeTypeFont.h>
#include <Fuse.Text.Implementation.FreeTypeFontFace.h>
#include <Fuse.Text.Implementation.FT_Error.h>
#include <Fuse.Text.Implementation.Harfbuzz.h>
#include <Fuse.Text.Implementation.HarfbuzzFont.h>
#include <Fuse.Text.Implementation.ICU.ErrorCode.h>
#include <Fuse.Text.Implementation.ICU.h>
#include <Fuse.Text.Implementation.Memory.h>
#include <Fuse.Text.Implementation.UBrk.h>
#include <Fuse.Text.PositionedGlyph.h>
#include <Fuse.Text.RenderedGlyph.h>
#include <Fuse.Text.Substring.h>
#include <Fuse.Text.TextDirection.h>
#include <harfbuzz/hb.h>
#include <harfbuzz/hb-coretext.h>
#include <harfbuzz/hb-ft.h>
#include <hb-ft-cached.h>
#include <string.h>
#include <unicode/ubrk.h>
#include <unicode/utypes.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Content.Images.Bitmap.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.String.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.UInt.h>
#include FT_ADVANCES_H
#include FT_FREETYPE_H
#include FT_SIZES_H
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/BitArray.uno
// -------------------------------------------------------------------------

// internal sealed class BitArray :3
// {
static void BitArray_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(BitArray, Data), 0,
        ::g::Uno::Int_typeof(), offsetof(BitArray, Count), 0);
}

uType* BitArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(BitArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Text.Implementation.BitArray", options);
    type->fp_build_ = BitArray_build;
    return type;
}

// public BitArray(int length) :10
void BitArray__ctor__fn(BitArray* __this, int32_t* length)
{
    __this->ctor_(*length);
}

// private int Index(int i) :33
void BitArray__Index_fn(BitArray* __this, int32_t* i, int32_t* __retval)
{
    *__retval = __this->Index(*i);
}

// public bool get_Item(int i) :18
void BitArray__get_Item_fn(BitArray* __this, int32_t* i, bool* __retval)
{
    *__retval = __this->Item(*i);
}

// public void set_Item(int i, bool value) :22
void BitArray__set_Item_fn(BitArray* __this, int32_t* i, bool* value)
{
    __this->Item(*i, *value);
}

// private byte Mask(int i) :38
void BitArray__Mask_fn(BitArray* __this, int32_t* i, uint8_t* __retval)
{
    *__retval = __this->Mask(*i);
}

// public BitArray New(int length) :10
void BitArray__New1_fn(int32_t* length, BitArray** __retval)
{
    *__retval = BitArray::New1(*length);
}

// public BitArray(int length) [instance] :10
void BitArray::ctor_(int32_t length)
{
    Count = length;
    Data = uArray::New(::TYPES[0/*byte[]*/], ((length + 8) - 1) / 8);
}

// private int Index(int i) [instance] :33
int32_t BitArray::Index(int32_t i)
{
    return i / 8;
}

// public bool get_Item(int i) [instance] :18
bool BitArray::Item(int32_t i)
{
    uStackFrame __("Fuse.Text.Implementation.BitArray", "get_Item(int)");
    return (uPtr(Data)->Item<uint8_t>(Index(i)) & Mask(i)) != 0;
}

// public void set_Item(int i, bool value) [instance] :22
void BitArray::Item(int32_t i, bool value)
{
    uStackFrame __("Fuse.Text.Implementation.BitArray", "set_Item(int,bool)");
    int32_t index = Index(i);
    uint8_t mask = Mask(i);
    uint8_t data = uPtr(Data)->Item<uint8_t>(index);
    uPtr(Data)->Item<uint8_t>(index) = value ? data | mask : data & ~mask;
}

// private byte Mask(int i) [instance] :38
uint8_t BitArray::Mask(int32_t i)
{
    return (uint8_t)(1 << (i % 8));
}

// public BitArray New(int length) [static] :10
BitArray* BitArray::New1(int32_t length)
{
    BitArray* obj1 = (BitArray*)uNew(BitArray_typeof());
    obj1->ctor_(length);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/Util.uno
// ---------------------------------------------------------------------

// internal static extern class CString :19
// {
static void CString_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* CString_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.CString", options);
    type->fp_build_ = CString_build;
    return type;
}

// private static int strlen(Uno.IntPtr cstr) :30
void CString__strlen_fn(void** cstr, int32_t* __retval)
{
    *__retval = CString::strlen(*cstr);
}

// public static string ToString(Uno.IntPtr cstr) :21
void CString__ToString_fn(void** cstr, uString** __retval)
{
    *__retval = CString::ToString(*cstr);
}

// private static int strlen(Uno.IntPtr cstr) [static] :30
int32_t CString::strlen(void* cstr)
{
    return (int)::strlen((const char*)cstr);
}

// public static string ToString(Uno.IntPtr cstr) [static] :21
uString* CString::ToString(void* cstr)
{
    int32_t len = ::g::Uno::IntPtr::op_Equality(cstr, ::g::Uno::IntPtr::Zero_) ? 0 : CString::strlen(cstr);
    uArray* buffer = uArray::New(::TYPES[0/*byte[]*/], len);
    ::g::Fuse::Text::Implementation::Memory::Copy(buffer, cstr, len);
    return ::g::Uno::Text::Utf8::GetString(buffer);
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/ICU.uno
// --------------------------------------------------------------------

// public enum ICU.ErrorCode :25
uEnumType* ICU__ErrorCode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Text.Implementation.ICU.ErrorCode", ::g::Uno::Int_typeof(), 0);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/FreeType.uno
// -------------------------------------------------------------------------

// internal static extern class FreeType :45
// {
static void FreeType_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), (uintptr_t)&FreeType::_library_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&FreeType::_initialized_, uFieldFlagsStatic);
}

uClassType* FreeType_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.FreeType", options);
    type->fp_build_ = FreeType_build;
    return type;
}

// public static void Activate_Size(Uno.IntPtr size) :146
void FreeType__Activate_Size_fn(void** size)
{
    FreeType::Activate_Size(*size);
}

// private static int Activate_Size_Raw(Uno.IntPtr size) :152
void FreeType__Activate_Size_Raw_fn(void** size, int32_t* __retval)
{
    *__retval = FreeType::Activate_Size_Raw(*size);
}

// public static int Ascender(Uno.IntPtr face) :297
void FreeType__Ascender_fn(void** face, int32_t* __retval)
{
    *__retval = FreeType::Ascender(*face);
}

// public static void BGRAToRGBA(byte[] buffer) :285
void FreeType__BGRAToRGBA_fn(uArray* buffer)
{
    FreeType::BGRAToRGBA(buffer);
}

// public static Uno.Content.Images.Bitmap Current_Glyph_Bitmap(Uno.IntPtr face) :265
void FreeType__Current_Glyph_Bitmap_fn(void** face, ::g::Uno::Content::Images::Bitmap** __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap(*face);
}

// private static Uno.IntPtr Current_Glyph_Bitmap_Buffer(Uno.IntPtr face) :254
void FreeType__Current_Glyph_Bitmap_Buffer_fn(void** face, void** __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap_Buffer(*face);
}

// private static bool Current_Glyph_Bitmap_Buffer_Is_BGRA(Uno.IntPtr face) :260
void FreeType__Current_Glyph_Bitmap_Buffer_Is_BGRA_fn(void** face, bool* __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap_Buffer_Is_BGRA(*face);
}

// public static int2 Current_Glyph_Bitmap_Offset(Uno.IntPtr face) :238
void FreeType__Current_Glyph_Bitmap_Offset_fn(void** face, ::g::Uno::Int2* __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap_Offset(*face);
}

// private static void Current_Glyph_Bitmap_Offset_Raw(Uno.IntPtr face, int& x, int& y) :246
void FreeType__Current_Glyph_Bitmap_Offset_Raw_fn(void** face, int32_t* x, int32_t* y)
{
    FreeType::Current_Glyph_Bitmap_Offset_Raw(*face, x, y);
}

// public static int2 Current_Glyph_Bitmap_Size(Uno.IntPtr face) :224
void FreeType__Current_Glyph_Bitmap_Size_fn(void** face, ::g::Uno::Int2* __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap_Size(*face);
}

// private static void Current_Glyph_Bitmap_Size_Raw(Uno.IntPtr face, int& width, int& rows) :232
void FreeType__Current_Glyph_Bitmap_Size_Raw_fn(void** face, int32_t* width, int32_t* rows)
{
    FreeType::Current_Glyph_Bitmap_Size_Raw(*face, width, rows);
}

// public static int Descender(Uno.IntPtr face) :303
void FreeType__Descender_fn(void** face, int32_t* __retval)
{
    *__retval = FreeType::Descender(*face);
}

// public static void Done_Face(Uno.IntPtr face) :113
void FreeType__Done_Face_fn(void** face)
{
    FreeType::Done_Face(*face);
}

// private static int Done_Face_Raw(Uno.IntPtr face) :119
void FreeType__Done_Face_Raw_fn(void** face, int32_t* __retval)
{
    *__retval = FreeType::Done_Face_Raw(*face);
}

// public static void Done_Size(Uno.IntPtr size) :135
void FreeType__Done_Size_fn(void** size)
{
    FreeType::Done_Size(*size);
}

// private static int Done_Size_Raw(Uno.IntPtr size) :141
void FreeType__Done_Size_Raw_fn(void** size, int32_t* __retval)
{
    *__retval = FreeType::Done_Size_Raw(*size);
}

// public static string Family_Name(Uno.IntPtr face) :314
void FreeType__Family_Name_fn(void** face, uString** __retval)
{
    *__retval = FreeType::Family_Name(*face);
}

// private static Uno.IntPtr Family_Name_Raw(Uno.IntPtr face) :320
void FreeType__Family_Name_Raw_fn(void** face, void** __retval)
{
    *__retval = FreeType::Family_Name_Raw(*face);
}

// public static int Height(Uno.IntPtr face) :309
void FreeType__Height_fn(void** face, int32_t* __retval)
{
    *__retval = FreeType::Height(*face);
}

// private static void Init() :58
void FreeType__Init_fn()
{
    FreeType::Init();
}

// private static int Init_FreeType(Uno.IntPtr& library) :72
void FreeType__Init_FreeType_fn(void** library, int32_t* __retval)
{
    *__retval = FreeType::Init_FreeType(library);
}

// private static Uno.IntPtr get_Library() :51
void FreeType__get_Library_fn(void** __retval)
{
    *__retval = FreeType::Library();
}

// public static void Load_Glyph(Uno.IntPtr face, uint glyph, int flags) :213
void FreeType__Load_Glyph_fn(void** face, uint32_t* glyph, int32_t* flags)
{
    FreeType::Load_Glyph(*face, *glyph, *flags);
}

// private static int Load_Glyph_Raw(Uno.IntPtr face, uint glyph, int flags) :219
void FreeType__Load_Glyph_Raw_fn(void** face, uint32_t* glyph, int32_t* flags, int32_t* __retval)
{
    *__retval = FreeType::Load_Glyph_Raw(*face, *glyph, *flags);
}

// public static void Load_Render_Glyph(Uno.IntPtr face, uint glyph) :202
void FreeType__Load_Render_Glyph_fn(void** face, uint32_t* glyph)
{
    FreeType::Load_Render_Glyph(*face, *glyph);
}

// private static int Load_Render_Glyph_Raw(Uno.IntPtr face, uint glyph) :208
void FreeType__Load_Render_Glyph_Raw_fn(void** face, uint32_t* glyph, int32_t* __retval)
{
    *__retval = FreeType::Load_Render_Glyph_Raw(*face, *glyph);
}

// public static void New_Face(string fileName, int index, Uno.IntPtr& face) :94
void FreeType__New_Face_fn(uString* fileName, int32_t* index, void** face)
{
    FreeType::New_Face(fileName, *index, face);
}

// private static int New_Face_Raw(Uno.IntPtr library, byte[] fileName, int index, Uno.IntPtr& face) :108
void FreeType__New_Face_Raw_fn(void** library, uArray* fileName, int32_t* index, void** face, int32_t* __retval)
{
    *__retval = FreeType::New_Face_Raw(*library, fileName, *index, face);
}

// public static void New_Memory_Face(byte[] buffer, int index, Uno.IntPtr& face) :83
void FreeType__New_Memory_Face_fn(uArray* buffer, int32_t* index, void** face)
{
    FreeType::New_Memory_Face(buffer, *index, face);
}

// private static int New_Memory_Face_Raw(Uno.IntPtr library, byte[] buffer, int length, int index, Uno.IntPtr& face) :89
void FreeType__New_Memory_Face_Raw_fn(void** library, uArray* buffer, int32_t* length, int32_t* index, void** face, int32_t* __retval)
{
    *__retval = FreeType::New_Memory_Face_Raw(*library, buffer, *length, *index, face);
}

// public static void New_Size(Uno.IntPtr face, Uno.IntPtr& size) :124
void FreeType__New_Size_fn(void** face, void** size)
{
    FreeType::New_Size(*face, size);
}

// private static int New_Size_Raw(Uno.IntPtr face, Uno.IntPtr& size) :130
void FreeType__New_Size_Raw_fn(void** face, void** size, int32_t* __retval)
{
    *__retval = FreeType::New_Size_Raw(*face, size);
}

// public static int Num_Faces(Uno.IntPtr face) :337
void FreeType__Num_Faces_fn(void** face, int32_t* __retval)
{
    *__retval = FreeType::Num_Faces(*face);
}

// public static int Num_Glyphs(Uno.IntPtr face) :343
void FreeType__Num_Glyphs_fn(void** face, int32_t* __retval)
{
    *__retval = FreeType::Num_Glyphs(*face);
}

// public static void Set_Pixel_Sizes(Uno.IntPtr face, int w, int h, float& scale) :157
void FreeType__Set_Pixel_Sizes_fn(void** face, int32_t* w, int32_t* h, float* scale)
{
    FreeType::Set_Pixel_Sizes(*face, *w, *h, scale);
}

// private static int Set_Pixel_Sizes_Raw(Uno.IntPtr rawFace, int w, int h, float& scale) :164
void FreeType__Set_Pixel_Sizes_Raw_fn(void** rawFace, int32_t* w, int32_t* h, float* scale, int32_t* __retval)
{
    *__retval = FreeType::Set_Pixel_Sizes_Raw(*rawFace, *w, *h, scale);
}

// public static string Style_Name(Uno.IntPtr face) :325
void FreeType__Style_Name_fn(void** face, uString** __retval)
{
    *__retval = FreeType::Style_Name(*face);
}

// private static Uno.IntPtr Style_Name_Raw(Uno.IntPtr face) :331
void FreeType__Style_Name_Raw_fn(void** face, void** __retval)
{
    *__retval = FreeType::Style_Name_Raw(*face);
}

void* FreeType::_library_;
bool FreeType::_initialized_;

// public static void Activate_Size(Uno.IntPtr size) [static] :146
void FreeType::Activate_Size(void* size)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Activate_Size(Uno.IntPtr)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Activate_Size_Raw(size));
}

// private static int Activate_Size_Raw(Uno.IntPtr size) [static] :152
int32_t FreeType::Activate_Size_Raw(void* size)
{
    return FT_Activate_Size((FT_Size)size);
}

// public static int Ascender(Uno.IntPtr face) [static] :297
int32_t FreeType::Ascender(void* face)
{
    return (int)((FT_Face)face)->size->metrics.ascender;
}

// public static void BGRAToRGBA(byte[] buffer) [static] :285
void FreeType::BGRAToRGBA(uArray* buffer)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "BGRAToRGBA(byte[])");

    for (int32_t i = 0; i < uPtr(buffer)->Length(); i = i + 4)
    {
        uint8_t b = uPtr(buffer)->Item<uint8_t>(i);
        uint8_t r = buffer->Item<uint8_t>(i + 2);
        buffer->Item<uint8_t>(i) = r;
        buffer->Item<uint8_t>(i + 2) = b;
    }
}

// public static Uno.Content.Images.Bitmap Current_Glyph_Bitmap(Uno.IntPtr face) [static] :265
::g::Uno::Content::Images::Bitmap* FreeType::Current_Glyph_Bitmap(void* face)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Current_Glyph_Bitmap(Uno.IntPtr)");
    ::g::Uno::Int2 size = FreeType::Current_Glyph_Bitmap_Size(face);

    if (FreeType::Current_Glyph_Bitmap_Buffer_Is_BGRA(face))
    {
        int32_t numBytes = (size.X * size.Y) * 4;
        uArray* data = uArray::New(::TYPES[0/*byte[]*/], numBytes);
        ::g::Fuse::Text::Implementation::Memory::Copy(data, FreeType::Current_Glyph_Bitmap_Buffer(face), numBytes);
        FreeType::BGRAToRGBA(data);
        return ::g::Uno::Content::Images::Bitmap::New1(size, 3, ::g::Uno::Buffer::New1(data));
    }
    else
    {
        int32_t numBytes1 = size.X * size.Y;
        uArray* data1 = uArray::New(::TYPES[0/*byte[]*/], numBytes1);
        ::g::Fuse::Text::Implementation::Memory::Copy(data1, FreeType::Current_Glyph_Bitmap_Buffer(face), numBytes1);
        return ::g::Uno::Content::Images::Bitmap::New1(size, 1, ::g::Uno::Buffer::New1(data1));
    }
}

// private static Uno.IntPtr Current_Glyph_Bitmap_Buffer(Uno.IntPtr face) [static] :254
void* FreeType::Current_Glyph_Bitmap_Buffer(void* face)
{
    return (void*)((FT_Face)face)->glyph->bitmap.buffer;
}

// private static bool Current_Glyph_Bitmap_Buffer_Is_BGRA(Uno.IntPtr face) [static] :260
bool FreeType::Current_Glyph_Bitmap_Buffer_Is_BGRA(void* face)
{
    return ((FT_Face)face)->glyph->bitmap.pixel_mode == FT_PIXEL_MODE_BGRA;
}

// public static int2 Current_Glyph_Bitmap_Offset(Uno.IntPtr face) [static] :238
::g::Uno::Int2 FreeType::Current_Glyph_Bitmap_Offset(void* face)
{
    ::g::Uno::Int2 result = ::g::Uno::Int2__New1(0);
    FreeType::Current_Glyph_Bitmap_Offset_Raw(face, &result.X, &result.Y);
    return result;
}

// private static void Current_Glyph_Bitmap_Offset_Raw(Uno.IntPtr face, int& x, int& y) [static] :246
void FreeType::Current_Glyph_Bitmap_Offset_Raw(void* face, int32_t* x, int32_t* y)
{
    FT_Face f = (FT_Face)face;
    *x = f->glyph->bitmap_left;
    *y = f->glyph->bitmap_top;
}

// public static int2 Current_Glyph_Bitmap_Size(Uno.IntPtr face) [static] :224
::g::Uno::Int2 FreeType::Current_Glyph_Bitmap_Size(void* face)
{
    ::g::Uno::Int2 result = ::g::Uno::Int2__New1(0);
    FreeType::Current_Glyph_Bitmap_Size_Raw(face, &result.X, &result.Y);
    return result;
}

// private static void Current_Glyph_Bitmap_Size_Raw(Uno.IntPtr face, int& width, int& rows) [static] :232
void FreeType::Current_Glyph_Bitmap_Size_Raw(void* face, int32_t* width, int32_t* rows)
{
    *width = ((FT_Face)face)->glyph->bitmap.width;
    *rows = ((FT_Face)face)->glyph->bitmap.rows;
}

// public static int Descender(Uno.IntPtr face) [static] :303
int32_t FreeType::Descender(void* face)
{
    return (int)((FT_Face)face)->size->metrics.descender;
}

// public static void Done_Face(Uno.IntPtr face) [static] :113
void FreeType::Done_Face(void* face)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Done_Face(Uno.IntPtr)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Done_Face_Raw(face));
}

// private static int Done_Face_Raw(Uno.IntPtr face) [static] :119
int32_t FreeType::Done_Face_Raw(void* face)
{
    return FT_Done_Face((FT_Face)face);
}

// public static void Done_Size(Uno.IntPtr size) [static] :135
void FreeType::Done_Size(void* size)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Done_Size(Uno.IntPtr)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Done_Size_Raw(size));
}

// private static int Done_Size_Raw(Uno.IntPtr size) [static] :141
int32_t FreeType::Done_Size_Raw(void* size)
{
    return FT_Done_Size((FT_Size)size);
}

// public static string Family_Name(Uno.IntPtr face) [static] :314
uString* FreeType::Family_Name(void* face)
{
    return ::g::Fuse::Text::Implementation::CString::ToString(FreeType::Family_Name_Raw(face));
}

// private static Uno.IntPtr Family_Name_Raw(Uno.IntPtr face) [static] :320
void* FreeType::Family_Name_Raw(void* face)
{
    return ((FT_Face)face)->family_name;
}

// public static int Height(Uno.IntPtr face) [static] :309
int32_t FreeType::Height(void* face)
{
    return (int)((FT_Face)face)->size->metrics.height;
}

// private static void Init() [static] :58
void FreeType::Init()
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Init()");

    if (FreeType::_initialized_)
        return;

    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Init_FreeType(&FreeType::_library_));
    FreeType::_initialized_ = true;
}

// private static int Init_FreeType(Uno.IntPtr& library) [static] :72
int32_t FreeType::Init_FreeType(void** library)
{
    return FT_Init_FreeType((FT_Library*)library);
}

// public static void Load_Glyph(Uno.IntPtr face, uint glyph, int flags) [static] :213
void FreeType::Load_Glyph(void* face, uint32_t glyph, int32_t flags)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Load_Glyph(Uno.IntPtr,uint,int)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Load_Glyph_Raw(face, glyph, flags));
}

// private static int Load_Glyph_Raw(Uno.IntPtr face, uint glyph, int flags) [static] :219
int32_t FreeType::Load_Glyph_Raw(void* face, uint32_t glyph, int32_t flags)
{
    return FT_Load_Glyph((FT_Face)face, glyph, flags);
}

// public static void Load_Render_Glyph(Uno.IntPtr face, uint glyph) [static] :202
void FreeType::Load_Render_Glyph(void* face, uint32_t glyph)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Load_Render_Glyph(Uno.IntPtr,uint)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Load_Render_Glyph_Raw(face, glyph));
}

// private static int Load_Render_Glyph_Raw(Uno.IntPtr face, uint glyph) [static] :208
int32_t FreeType::Load_Render_Glyph_Raw(void* face, uint32_t glyph)
{
    return FT_Load_Glyph((FT_Face)face, glyph, FT_LOAD_DEFAULT | FT_LOAD_RENDER | FT_LOAD_COLOR);
}

// public static void New_Face(string fileName, int index, Uno.IntPtr& face) [static] :94
void FreeType::New_Face(uString* fileName, int32_t index, void** face)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "New_Face(string,int,Uno.IntPtr&)");
    uArray* cStr = ::g::Uno::Text::Utf8::GetBytes(fileName);
    int32_t len = uPtr(cStr)->Length();
    uArray* ntCStr = uArray::New(::TYPES[0/*byte[]*/], len + 1);

    for (int32_t i = 0; i < len; ++i)
        uPtr(ntCStr)->Item<uint8_t>(i) = uPtr(cStr)->Item<uint8_t>(i);

    ntCStr->Item<uint8_t>(len) = 0;
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::New_Face_Raw(FreeType::Library(), ntCStr, index, face));
}

// private static int New_Face_Raw(Uno.IntPtr library, byte[] fileName, int index, Uno.IntPtr& face) [static] :108
int32_t FreeType::New_Face_Raw(void* library, uArray* fileName, int32_t index, void** face)
{
    return [] (void* library, uint8_t* fileName, int index, void** face) -> int
    {
        return FT_New_Face((FT_Library)library, (const char*)fileName, (FT_Long)index, (FT_Face*)face);
    } (library, (uint8_t*)(fileName == nullptr ? nullptr : fileName->Ptr()), index, face);
}

// public static void New_Memory_Face(byte[] buffer, int index, Uno.IntPtr& face) [static] :83
void FreeType::New_Memory_Face(uArray* buffer, int32_t index, void** face)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "New_Memory_Face(byte[],int,Uno.IntPtr&)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::New_Memory_Face_Raw(FreeType::Library(), buffer, uPtr(buffer)->Length(), index, face));
}

// private static int New_Memory_Face_Raw(Uno.IntPtr library, byte[] buffer, int length, int index, Uno.IntPtr& face) [static] :89
int32_t FreeType::New_Memory_Face_Raw(void* library, uArray* buffer, int32_t length, int32_t index, void** face)
{
    return [] (void* library, uint8_t* buffer, int length, int index, void** face) -> int
    {
        return FT_New_Memory_Face((FT_Library)library, (FT_Byte*)buffer, (FT_Long)length, (FT_Long)index, (FT_Face*)face);
    } (library, (uint8_t*)(buffer == nullptr ? nullptr : buffer->Ptr()), length, index, face);
}

// public static void New_Size(Uno.IntPtr face, Uno.IntPtr& size) [static] :124
void FreeType::New_Size(void* face, void** size)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "New_Size(Uno.IntPtr,Uno.IntPtr&)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::New_Size_Raw(face, size));
}

// private static int New_Size_Raw(Uno.IntPtr face, Uno.IntPtr& size) [static] :130
int32_t FreeType::New_Size_Raw(void* face, void** size)
{
    return FT_New_Size((FT_Face)face, (FT_Size*)size);
}

// public static int Num_Faces(Uno.IntPtr face) [static] :337
int32_t FreeType::Num_Faces(void* face)
{
    return (int)((FT_Face)face)->num_faces;
}

// public static int Num_Glyphs(Uno.IntPtr face) [static] :343
int32_t FreeType::Num_Glyphs(void* face)
{
    return (int)((FT_Face)face)->num_glyphs;
}

// public static void Set_Pixel_Sizes(Uno.IntPtr face, int w, int h, float& scale) [static] :157
void FreeType::Set_Pixel_Sizes(void* face, int32_t w, int32_t h, float* scale)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Set_Pixel_Sizes(Uno.IntPtr,int,int,float&)");
    *scale = 1.0f;
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Set_Pixel_Sizes_Raw(face, w, h, scale));
}

// private static int Set_Pixel_Sizes_Raw(Uno.IntPtr rawFace, int w, int h, float& scale) [static] :164
int32_t FreeType::Set_Pixel_Sizes_Raw(void* rawFace, int32_t w, int32_t h, float* scale)
{
    *scale = 1.0f;
    FT_Face face = (FT_Face)rawFace;
    if (FT_IS_SCALABLE(face))
    {
    	return FT_Set_Pixel_Sizes(face, (FT_UInt)w, (FT_UInt)h);
    }
    else if (FT_HAS_FIXED_SIZES(face))
    {
    	w *= 64; // 26.6 fractional pixels
    	h *= 64;
    	int bestIndex = -1;
    	int bestDiff = INT_MAX;
    	for (int i = 0; i < face->num_fixed_sizes; ++i)
    	{
    		int w2 = (int)face->available_sizes[i].x_ppem;
    		int h2 = (int)face->available_sizes[i].y_ppem;
    		int xdiff = w - w2;
    		int ydiff = h - h2;
    		int diff = xdiff * xdiff + ydiff * ydiff;
    		if (diff < bestDiff)
    		{
    			*scale = h == 0
    				? (w == 0 ? 1.0f : (float)w / (float)w2)
    				: (float)h / (float)h2;
    			bestIndex = i;
    			bestDiff = diff;
    		}
    	}
    	if (bestIndex != -1)
    	{
    		return FT_Select_Size(face, bestIndex);
    	}
    }
    return 0x17; // Invalid pixel size
}

// public static string Style_Name(Uno.IntPtr face) [static] :325
uString* FreeType::Style_Name(void* face)
{
    return ::g::Fuse::Text::Implementation::CString::ToString(FreeType::Style_Name_Raw(face));
}

// private static Uno.IntPtr Style_Name_Raw(Uno.IntPtr face) [static] :331
void* FreeType::Style_Name_Raw(void* face)
{
    return ((FT_Face)face)->style_name;
}

// private static Uno.IntPtr get_Library() [static] :51
void* FreeType::Library()
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "get_Library()");
    FreeType::Init();
    return FreeType::_library_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/FreeTypeFontFace.uno
// ---------------------------------------------------------------------------------

// internal sealed extern class FreeTypeFont :129
// {
static void FreeTypeFont_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Text::Implementation::HarfbuzzFont_type, interface0));
    type->SetFields(5,
        ::g::Uno::Int_typeof(), offsetof(FreeTypeFont, _pixelSize), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(FreeTypeFont, _ftFace), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(FreeTypeFont, _ftSize), 0,
        uObject_typeof(), offsetof(FreeTypeFont, _faceMutex), 0,
        ::g::Uno::Float_typeof(), offsetof(FreeTypeFont, _scale), 0);
}

::g::Fuse::Text::Implementation::HarfbuzzFont_type* FreeTypeFont_typeof()
{
    static uSStrong< ::g::Fuse::Text::Implementation::HarfbuzzFont_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::Implementation::HarfbuzzFont_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FreeTypeFont);
    options.TypeSize = sizeof(::g::Fuse::Text::Implementation::HarfbuzzFont_type);
    type = (::g::Fuse::Text::Implementation::HarfbuzzFont_type*)uClassType::New("Fuse.Text.Implementation.FreeTypeFont", options);
    type->fp_build_ = FreeTypeFont_build;
    type->fp_get_Ascender = (void(*)(::g::Fuse::Text::Font*, float*))FreeTypeFont__get_Ascender_fn;
    type->fp_get_Descender = (void(*)(::g::Fuse::Text::Font*, float*))FreeTypeFont__get_Descender_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::Font*))FreeTypeFont__Dispose_fn;
    type->fp_get_LineHeight = (void(*)(::g::Fuse::Text::Font*, float*))FreeTypeFont__get_LineHeight_fn;
    type->fp_get_NumGlyphs = (void(*)(::g::Fuse::Text::Font*, int32_t*))FreeTypeFont__get_NumGlyphs_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Text::Font*, int32_t*))FreeTypeFont__get_PixelSize_fn;
    type->fp_Render = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Glyph*, ::g::Fuse::Text::RenderedGlyph*))FreeTypeFont__Render_fn;
    type->fp_get_Scale = (void(*)(::g::Fuse::Text::Implementation::HarfbuzzFont*, float*))FreeTypeFont__get_Scale_fn;
    type->fp_Shape = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Substring*, int32_t*, int32_t*, uArray**))FreeTypeFont__Shape_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))FreeTypeFont__Dispose_fn;
    return type;
}

// internal FreeTypeFont(Uno.IntPtr ftFace, Uno.IntPtr ftSize, int pixelSize, float scale) :140
void FreeTypeFont__ctor_2_fn(FreeTypeFont* __this, void** ftFace, void** ftSize, int32_t* pixelSize, float* scale)
{
    __this->ctor_2(*ftFace, *ftSize, *pixelSize, *scale);
}

// public override sealed float get_Ascender() :166
void FreeTypeFont__get_Ascender_fn(FreeTypeFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "get_Ascender()");
    float ret6;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        try
        {
            {
                ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
                float __uno_retval = (::g::Fuse::Text::Implementation::HarfbuzzFont__get_Ascender_fn(__this, &ret6), ret6);
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
                return *__retval = __uno_retval, void();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        }
        __after_finally_0:;
    }
}

// public override sealed float get_Descender() :178
void FreeTypeFont__get_Descender_fn(FreeTypeFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "get_Descender()");
    float ret7;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        try
        {
            {
                ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
                float __uno_retval = (::g::Fuse::Text::Implementation::HarfbuzzFont__get_Descender_fn(__this, &ret7), ret7);
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
                return *__retval = __uno_retval, void();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        }
        __after_finally_1:;
    }
}

// public override sealed void Dispose() :151
void FreeTypeFont__Dispose_fn(FreeTypeFont* __this)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "Dispose()");
    ::g::Fuse::Text::Implementation::HarfbuzzFont__Dispose_fn(__this);
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        try
        {
            {
                if (::g::Uno::IntPtr::op_Inequality(__this->_ftSize, ::g::Uno::IntPtr::Zero_))
                {
                    ::g::Fuse::Text::Implementation::FreeType::Done_Size(__this->_ftSize);
                    __this->_ftSize = ::g::Uno::IntPtr::Zero_;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        }
        __after_finally_2:;
    }
}

// public override sealed float get_LineHeight() :190
void FreeTypeFont__get_LineHeight_fn(FreeTypeFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "get_LineHeight()");
    float ret8;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        try
        {
            {
                ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
                float __uno_retval = (::g::Fuse::Text::Implementation::HarfbuzzFont__get_LineHeight_fn(__this, &ret8), ret8);
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
                return *__retval = __uno_retval, void();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        }
        __after_finally_3:;
    }
}

// internal FreeTypeFont New(Uno.IntPtr ftFace, Uno.IntPtr ftSize, int pixelSize, float scale) :140
void FreeTypeFont__New1_fn(void** ftFace, void** ftSize, int32_t* pixelSize, float* scale, FreeTypeFont** __retval)
{
    *__retval = FreeTypeFont::New1(*ftFace, *ftSize, *pixelSize, *scale);
}

// public override sealed int get_NumGlyphs() :202
void FreeTypeFont__get_NumGlyphs_fn(FreeTypeFont* __this, int32_t* __retval)
{
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        try
        {
            {
                int32_t __uno_retval = ::g::Fuse::Text::Implementation::FreeType::Num_Glyphs(__this->_ftFace);
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
                return *__retval = __uno_retval, void();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        }
        __after_finally_4:;
    }
}

// public override sealed int get_PixelSize() :132
void FreeTypeFont__get_PixelSize_fn(FreeTypeFont* __this, int32_t* __retval)
{
    return *__retval = __this->_pixelSize, void();
}

// public override sealed Fuse.Text.RenderedGlyph Render(Fuse.Text.Glyph glyph) :213
void FreeTypeFont__Render_fn(FreeTypeFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "Render(Fuse.Text.Glyph)");
    ::g::Fuse::Text::Glyph glyph_ = *glyph;
    float ret2;
    float ret3;
    float ret4;
    ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
    ::g::Fuse::Text::Implementation::FreeType::Load_Render_Glyph(__this->_ftFace, glyph_.Index);
    ::g::Uno::Content::Images::Bitmap* bitmap = ::g::Fuse::Text::Implementation::FreeType::Current_Glyph_Bitmap(__this->_ftFace);
    ::g::Uno::Float2 offset = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Implicit2(::g::Fuse::Text::Implementation::FreeType::Current_Glyph_Bitmap_Offset(__this->_ftFace)), __this->Scale());
    return *__retval = ::g::Fuse::Text::RenderedGlyph__New1(bitmap, ::g::Uno::Float2__New2(offset.X, (((::g::Fuse::Text::Implementation::HarfbuzzFont__get_LineHeight_fn(__this, &ret2), ret2) - (::g::Fuse::Text::Implementation::HarfbuzzFont__get_Ascender_fn(__this, &ret3), ret3)) - (::g::Fuse::Text::Implementation::HarfbuzzFont__get_Descender_fn(__this, &ret4), ret4)) - offset.Y), __this->Scale()), void();
}

// protected override sealed float get_Scale() :137
void FreeTypeFont__get_Scale_fn(FreeTypeFont* __this, float* __retval)
{
    return *__retval = __this->_scale, void();
}

// public override sealed Fuse.Text.PositionedGlyph[] Shape(Fuse.Text.Substring text, int fontIndex, Fuse.Text.TextDirection dir) :226
void FreeTypeFont__Shape_fn(FreeTypeFont* __this, ::g::Fuse::Text::Substring* text, int32_t* fontIndex, int32_t* dir, uArray** __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "Shape(Fuse.Text.Substring,int,Fuse.Text.TextDirection)");
    uArray* ret5;
    int32_t fontIndex_ = *fontIndex;
    int32_t dir_ = *dir;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        try
        {
            {
                ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
                uArray* __uno_retval = (::g::Fuse::Text::Implementation::HarfbuzzFont__Shape_fn(__this, text, uCRef<int32_t>(fontIndex_), uCRef<int32_t>(dir_), &ret5), ret5);
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
                return *__retval = __uno_retval, void();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        }
        __after_finally_5:;
    }
}

// internal FreeTypeFont(Uno.IntPtr ftFace, Uno.IntPtr ftSize, int pixelSize, float scale) [instance] :140
void FreeTypeFont::ctor_2(void* ftFace, void* ftSize, int32_t pixelSize, float scale)
{
    _faceMutex = ::g::Uno::Object::New();
    ctor_1(::g::Fuse::Text::Implementation::Harfbuzz::ft_font_create(ftFace));
    ::g::Fuse::Text::Implementation::Harfbuzz::ft_font_set_default_load_flags(_hbFont);
    ::g::Fuse::Text::Implementation::Harfbuzz::ft_font_cached_set_funcs(_hbFont);
    _ftFace = ftFace;
    _ftSize = ftSize;
    _pixelSize = pixelSize;
    _scale = scale;
}

// internal FreeTypeFont New(Uno.IntPtr ftFace, Uno.IntPtr ftSize, int pixelSize, float scale) [static] :140
FreeTypeFont* FreeTypeFont::New1(void* ftFace, void* ftSize, int32_t pixelSize, float scale)
{
    FreeTypeFont* obj1 = (FreeTypeFont*)uNew(FreeTypeFont_typeof());
    obj1->ctor_2(ftFace, ftSize, pixelSize, scale);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/FreeTypeFontFace.uno
// ---------------------------------------------------------------------------------

// internal sealed extern class FreeTypeFontFace :11
// {
// static generated FreeTypeFontFace() :11
static void FreeTypeFontFace__cctor__fn(uType* __type)
{
    FreeTypeFontFace::_freeTypeMutex_ = ::g::Uno::Object::New();
}

static void FreeTypeFontFace_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FreeType: No matching face in font file");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Text::FontFace_type, interface0));
    type->SetFields(1,
        ::g::Uno::Byte_typeof()->Array(), offsetof(FreeTypeFontFace, _faceBuffer), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(FreeTypeFontFace, _ftFace), 0,
        uObject_typeof(), offsetof(FreeTypeFontFace, _faceMutex), 0,
        uObject_typeof(), (uintptr_t)&FreeTypeFontFace::_freeTypeMutex_, uFieldFlagsStatic);
}

::g::Fuse::Text::FontFace_type* FreeTypeFontFace_typeof()
{
    static uSStrong< ::g::Fuse::Text::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::FontFace_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FreeTypeFontFace);
    options.TypeSize = sizeof(::g::Fuse::Text::FontFace_type);
    type = (::g::Fuse::Text::FontFace_type*)uClassType::New("Fuse.Text.Implementation.FreeTypeFontFace", options);
    type->fp_build_ = FreeTypeFontFace_build;
    type->fp_cctor_ = FreeTypeFontFace__cctor__fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::FontFace*))FreeTypeFontFace__Dispose_fn;
    type->fp_GetOfPixelSizeInternal = (void(*)(::g::Fuse::Text::FontFace*, int32_t*, ::g::Fuse::Text::Font**))FreeTypeFontFace__GetOfPixelSizeInternal_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))FreeTypeFontFace__Dispose_fn;
    return type;
}

// public FreeTypeFontFace(byte[] buffer, int index, Uno.Predicate<string> stylePredicate) :19
void FreeTypeFontFace__ctor_1_fn(FreeTypeFontFace* __this, uArray* buffer, int32_t* index, uDelegate* stylePredicate)
{
    __this->ctor_1(buffer, *index, stylePredicate);
}

// public FreeTypeFontFace(string fileName, int index, Uno.Predicate<string> stylePredicate) :52
void FreeTypeFontFace__ctor_2_fn(FreeTypeFontFace* __this, uString* fileName, int32_t* index, uDelegate* stylePredicate)
{
    __this->ctor_2(fileName, *index, stylePredicate);
}

// public override sealed void Dispose() :79
void FreeTypeFontFace__Dispose_fn(FreeTypeFontFace* __this)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFontFace", "Dispose()");
    ::g::Fuse::Text::FontFace__Dispose_fn(__this);
    ::g::Uno::Threading::Monitor::Enter(FreeTypeFontFace::_freeTypeMutex_);

    {
        try
        {
            {
                if (::g::Uno::IntPtr::op_Inequality(__this->_ftFace, ::g::Uno::IntPtr::Zero_))
                {
                    ::g::Fuse::Text::Implementation::FreeType::Done_Face(__this->_ftFace);
                    __this->_ftFace = ::g::Uno::IntPtr::Zero_;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
        }
        __after_finally_6:;
    }
}

// public string get_FamilyName() :99
void FreeTypeFontFace__get_FamilyName_fn(FreeTypeFontFace* __this, uString** __retval)
{
    *__retval = __this->FamilyName();
}

// private override sealed Fuse.Text.Font GetOfPixelSizeInternal(int pixelSize) :115
void FreeTypeFontFace__GetOfPixelSizeInternal_fn(FreeTypeFontFace* __this, int32_t* pixelSize, ::g::Fuse::Text::Font** __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFontFace", "GetOfPixelSizeInternal(int)");
    int32_t pixelSize_ = *pixelSize;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        try
        {
            {
                void* ftSize = ::g::Uno::IntPtr::Zero_;
                ::g::Fuse::Text::Implementation::FreeType::New_Size(__this->_ftFace, &ftSize);
                ::g::Fuse::Text::Implementation::FreeType::Activate_Size(ftSize);
                float scale;
                ::g::Fuse::Text::Implementation::FreeType::Set_Pixel_Sizes(__this->_ftFace, 0, pixelSize_, &scale);
                ::g::Fuse::Text::Font* __uno_retval = ::g::Fuse::Text::Implementation::FreeTypeFont::New1(__this->_ftFace, ftSize, pixelSize_, scale);
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
                return *__retval = __uno_retval, void();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
            }
                        throw __t;
            goto __after_finally_7;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        }
        __after_finally_7:;
    }
}

// public FreeTypeFontFace New(byte[] buffer, int index, Uno.Predicate<string> stylePredicate) :19
void FreeTypeFontFace__New1_fn(uArray* buffer, int32_t* index, uDelegate* stylePredicate, FreeTypeFontFace** __retval)
{
    *__retval = FreeTypeFontFace::New1(buffer, *index, stylePredicate);
}

// public FreeTypeFontFace New(string fileName, int index, Uno.Predicate<string> stylePredicate) :52
void FreeTypeFontFace__New2_fn(uString* fileName, int32_t* index, uDelegate* stylePredicate, FreeTypeFontFace** __retval)
{
    *__retval = FreeTypeFontFace::New2(fileName, *index, stylePredicate);
}

// public string get_StyleName() :108
void FreeTypeFontFace__get_StyleName_fn(FreeTypeFontFace* __this, uString** __retval)
{
    *__retval = __this->StyleName();
}

uSStrong<uObject*> FreeTypeFontFace::_freeTypeMutex_;

// public FreeTypeFontFace(byte[] buffer, int index, Uno.Predicate<string> stylePredicate) [instance] :19
void FreeTypeFontFace::ctor_1(uArray* buffer, int32_t index, uDelegate* stylePredicate)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFontFace", ".ctor(byte[],int,Uno.Predicate<string>)");
    bool ret3;
    bool ret4;
    _faceMutex = ::g::Uno::Object::New();
    ctor_();
    _faceBuffer = buffer;
    ::g::Uno::Threading::Monitor::Enter(FreeTypeFontFace::_freeTypeMutex_);

    {
        try
        {
            {
                if (index >= 0)
                {
                    ::g::Fuse::Text::Implementation::FreeType::New_Memory_Face(buffer, index, &_ftFace);
                    ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
                    return;
                }

                ::g::Fuse::Text::Implementation::FreeType::New_Memory_Face(buffer, 0, &_ftFace);

                if (::g::Uno::Delegate::op_Inequality(stylePredicate, NULL) && !(uPtr(stylePredicate)->Invoke(&ret3, 1, (uString*)::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace)), ret3))
                {
                    int32_t numFaces = ::g::Fuse::Text::Implementation::FreeType::Num_Faces(_ftFace);

                    for (int32_t i = 1; i < numFaces; ++i)
                    {
                        ::g::Fuse::Text::Implementation::FreeType::Done_Face(_ftFace);
                        ::g::Fuse::Text::Implementation::FreeType::New_Memory_Face(buffer, i, &_ftFace);

                        if ((uPtr(stylePredicate)->Invoke(&ret4, 1, (uString*)::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace)), ret4))
                        {
                            ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
                            return;
                        }
                    }

                    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"FreeType: N...*/]));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
        }
        __after_finally_8:;
    }
}

// public FreeTypeFontFace(string fileName, int index, Uno.Predicate<string> stylePredicate) [instance] :52
void FreeTypeFontFace::ctor_2(uString* fileName, int32_t index, uDelegate* stylePredicate)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFontFace", ".ctor(string,int,Uno.Predicate<string>)");
    bool ret5;
    bool ret6;
    _faceMutex = ::g::Uno::Object::New();
    ctor_();
    ::g::Uno::Threading::Monitor::Enter(FreeTypeFontFace::_freeTypeMutex_);

    {
        try
        {
            {
                if (index >= 0)
                {
                    ::g::Fuse::Text::Implementation::FreeType::New_Face(fileName, index, &_ftFace);
                    ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
                    return;
                }

                ::g::Fuse::Text::Implementation::FreeType::New_Face(fileName, 0, &_ftFace);

                if (::g::Uno::Delegate::op_Inequality(stylePredicate, NULL) && !(uPtr(stylePredicate)->Invoke(&ret5, 1, (uString*)::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace)), ret5))
                {
                    int32_t numFaces = ::g::Fuse::Text::Implementation::FreeType::Num_Faces(_ftFace);

                    for (int32_t i = 1; i < numFaces; ++i)
                    {
                        ::g::Fuse::Text::Implementation::FreeType::Done_Face(_ftFace);
                        ::g::Fuse::Text::Implementation::FreeType::New_Face(fileName, i, &_ftFace);

                        if ((uPtr(stylePredicate)->Invoke(&ret6, 1, (uString*)::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace)), ret6))
                        {
                            ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
                            return;
                        }
                    }

                    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"FreeType: N...*/]));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
            }
                        throw __t;
            goto __after_finally_9;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex_);
        }
        __after_finally_9:;
    }
}

// public string get_FamilyName() [instance] :99
uString* FreeTypeFontFace::FamilyName()
{
    ::g::Uno::Threading::Monitor::Enter(_faceMutex);

    {
        try
        {
            {
                uString* __uno_retval = ::g::Fuse::Text::Implementation::FreeType::Family_Name(_ftFace);
                ::g::Uno::Threading::Monitor::Exit(_faceMutex);
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(_faceMutex);
            }
                        throw __t;
            goto __after_finally_10;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(_faceMutex);
        }
        __after_finally_10:;
    }
}

// public string get_StyleName() [instance] :108
uString* FreeTypeFontFace::StyleName()
{
    ::g::Uno::Threading::Monitor::Enter(_faceMutex);

    {
        try
        {
            {
                uString* __uno_retval = ::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace);
                ::g::Uno::Threading::Monitor::Exit(_faceMutex);
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(_faceMutex);
            }
                        throw __t;
            goto __after_finally_11;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(_faceMutex);
        }
        __after_finally_11:;
    }
}

// public FreeTypeFontFace New(byte[] buffer, int index, Uno.Predicate<string> stylePredicate) [static] :19
FreeTypeFontFace* FreeTypeFontFace::New1(uArray* buffer, int32_t index, uDelegate* stylePredicate)
{
    FreeTypeFontFace* obj1 = (FreeTypeFontFace*)uNew(FreeTypeFontFace_typeof());
    obj1->ctor_1(buffer, index, stylePredicate);
    return obj1;
}

// public FreeTypeFontFace New(string fileName, int index, Uno.Predicate<string> stylePredicate) [static] :52
FreeTypeFontFace* FreeTypeFontFace::New2(uString* fileName, int32_t index, uDelegate* stylePredicate)
{
    FreeTypeFontFace* obj2 = (FreeTypeFontFace*)uNew(FreeTypeFontFace_typeof());
    obj2->ctor_2(fileName, index, stylePredicate);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/FreeType.uno
// -------------------------------------------------------------------------

// internal static extern class FT_Error :11
// {
static void FT_Error_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FreeType error: ");
}

uClassType* FT_Error_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.FT_Error", options);
    type->fp_build_ = FT_Error_build;
    return type;
}

// public static void Check(int err) :13
void FT_Error__Check_fn(int32_t* err)
{
    FT_Error::Check(*err);
}

// private static Uno.IntPtr ErrorCString(int err) :27
void FT_Error__ErrorCString_fn(int32_t* err, void** __retval)
{
    *__retval = FT_Error::ErrorCString(*err);
}

// private static string ErrorString(int err) :21
void FT_Error__ErrorString_fn(int32_t* err, uString** __retval)
{
    *__retval = FT_Error::ErrorString(*err);
}

// public static void Check(int err) [static] :13
void FT_Error::Check(int32_t err)
{
    uStackFrame __("Fuse.Text.Implementation.FT_Error", "Check(int)");

    if (err != 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[1/*"FreeType er...*/], FT_Error::ErrorString(err))));
}

// private static Uno.IntPtr ErrorCString(int err) [static] :27
void* FT_Error::ErrorCString(int32_t err)
{
    #undef __FTERRORS_H__
    #define FT_ERRORDEF(e, v, s) case e: return (void*)s;
    #define FT_ERROR_START_LIST switch (err) {
    #define FT_ERROR_END_LIST default: return nullptr; }
    #include FT_ERRORS_H
}

// private static string ErrorString(int err) [static] :21
uString* FT_Error::ErrorString(int32_t err)
{
    return ::g::Fuse::Text::Implementation::CString::ToString(FT_Error::ErrorCString(err));
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/Harfbuzz.uno
// -------------------------------------------------------------------------

// internal static extern class Harfbuzz :22
// {
static void Harfbuzz_build(uType* type)
{
}

uClassType* Harfbuzz_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.Harfbuzz", options);
    type->fp_build_ = Harfbuzz_build;
    return type;
}

// public static Uno.IntPtr buffer_create(Uno.IntPtr font, Fuse.Text.Substring text, bool ltr) :73
void Harfbuzz__buffer_create_fn(void** font, ::g::Fuse::Text::Substring* text, bool* ltr, void** __retval)
{
    *__retval = Harfbuzz::buffer_create(*font, text, *ltr);
}

// private static Uno.IntPtr buffer_create_Raw(Uno.IntPtr font, string text, int offset, int length, bool ltr) :79
void Harfbuzz__buffer_create_Raw_fn(void** font, uString* text, int32_t* offset, int32_t* length, bool* ltr, void** __retval)
{
    *__retval = Harfbuzz::buffer_create_Raw(*font, text, *offset, *length, *ltr);
}

// public static void buffer_destroy(Uno.IntPtr buffer) :99
void Harfbuzz__buffer_destroy_fn(void** buffer)
{
    Harfbuzz::buffer_destroy(*buffer);
}

// public static uint buffer_get_length(Uno.IntPtr buffer) :93
void Harfbuzz__buffer_get_length_fn(void** buffer, uint32_t* __retval)
{
    *__retval = Harfbuzz::buffer_get_length(*buffer);
}

// public static extern Uno.IntPtr ct_face_create(Uno.IntPtr cgFont) :44
void Harfbuzz__ct_face_create_fn(void** cgFont, void** __retval)
{
    *__retval = Harfbuzz::ct_face_create(*cgFont);
}

// public static void face_destroy(Uno.IntPtr face) :68
void Harfbuzz__face_destroy_fn(void** face)
{
    Harfbuzz::face_destroy(*face);
}

// public static Uno.IntPtr font_create(Uno.IntPtr hbFace) :50
void Harfbuzz__font_create_fn(void** hbFace, void** __retval)
{
    *__retval = Harfbuzz::font_create(*hbFace);
}

// public static void font_destroy(Uno.IntPtr font) :56
void Harfbuzz__font_destroy_fn(void** font)
{
    Harfbuzz::font_destroy(*font);
}

// public static void font_get_h_extents(Uno.IntPtr font, float& ascender, float& descender, float& lineGap) :136
void Harfbuzz__font_get_h_extents_fn(void** font, float* ascender, float* descender, float* lineGap)
{
    Harfbuzz::font_get_h_extents(*font, ascender, descender, lineGap);
}

// public static void font_set_scale(Uno.IntPtr hbFont, int x_scale, int y_scale) :62
void Harfbuzz__font_set_scale_fn(void** hbFont, int32_t* x_scale, int32_t* y_scale)
{
    Harfbuzz::font_set_scale(*hbFont, *x_scale, *y_scale);
}

// public static void ft_font_cached_set_funcs(Uno.IntPtr hbFont) :38
void Harfbuzz__ft_font_cached_set_funcs_fn(void** hbFont)
{
    Harfbuzz::ft_font_cached_set_funcs(*hbFont);
}

// public static Uno.IntPtr ft_font_create(Uno.IntPtr face) :25
void Harfbuzz__ft_font_create_fn(void** face, void** __retval)
{
    *__retval = Harfbuzz::ft_font_create(*face);
}

// public static void ft_font_set_default_load_flags(Uno.IntPtr hbFont) :32
void Harfbuzz__ft_font_set_default_load_flags_fn(void** hbFont)
{
    Harfbuzz::ft_font_set_default_load_flags(*hbFont);
}

// public static void get_shape_data(Uno.IntPtr font, Uno.IntPtr buffer, byte[] output) :105
void Harfbuzz__get_shape_data_fn(void** font, void** buffer, uArray* output)
{
    Harfbuzz::get_shape_data(*font, *buffer, output);
}

// public static Uno.IntPtr buffer_create(Uno.IntPtr font, Fuse.Text.Substring text, bool ltr) [static] :73
void* Harfbuzz::buffer_create(void* font, ::g::Fuse::Text::Substring* text, bool ltr)
{
    uStackFrame __("Fuse.Text.Implementation.Harfbuzz", "buffer_create(Uno.IntPtr,Fuse.Text.Substring,bool)");
    return Harfbuzz::buffer_create_Raw(font, uPtr(text)->_parent, uPtr(text)->_start, uPtr(text)->Length, ltr);
}

// private static Uno.IntPtr buffer_create_Raw(Uno.IntPtr font, string text, int offset, int length, bool ltr) [static] :79
void* Harfbuzz::buffer_create_Raw(void* font, uString* text, int32_t offset, int32_t length, bool ltr)
{
    return [] (void* font, const char16_t* text, int offset, int length, bool ltr) -> void*
    {
        hb_buffer_t* buffer = hb_buffer_create();
        hb_buffer_pre_allocate(buffer, (unsigned int)length);
        
        hb_buffer_add_utf16(buffer, (uint16_t*)(text + offset), length, 0, -1);
        hb_buffer_set_direction(buffer, ltr ? HB_DIRECTION_LTR : HB_DIRECTION_RTL);
        hb_buffer_guess_segment_properties(buffer);
        hb_shape((hb_font_t*)font, buffer, NULL, 0);
        
        return (void*)buffer;
    } (font, (char16_t*)(text == nullptr ? nullptr : text->Ptr()), offset, length, ltr);
}

// public static void buffer_destroy(Uno.IntPtr buffer) [static] :99
void Harfbuzz::buffer_destroy(void* buffer)
{
    hb_buffer_destroy((hb_buffer_t*)buffer);
}

// public static uint buffer_get_length(Uno.IntPtr buffer) [static] :93
uint32_t Harfbuzz::buffer_get_length(void* buffer)
{
    return hb_buffer_get_length((hb_buffer_t*)buffer);
}

// public static extern Uno.IntPtr ct_face_create(Uno.IntPtr cgFont) [static] :44
void* Harfbuzz::ct_face_create(void* cgFont)
{
    return hb_coretext_face_create((CGFontRef)cgFont);
}

// public static void face_destroy(Uno.IntPtr face) [static] :68
void Harfbuzz::face_destroy(void* face)
{
    hb_face_destroy((hb_face_t*)face);
}

// public static Uno.IntPtr font_create(Uno.IntPtr hbFace) [static] :50
void* Harfbuzz::font_create(void* hbFace)
{
    return hb_font_create((hb_face_t*)hbFace);
}

// public static void font_destroy(Uno.IntPtr font) [static] :56
void Harfbuzz::font_destroy(void* font)
{
    hb_font_destroy((hb_font_t*)font);
}

// public static void font_get_h_extents(Uno.IntPtr font, float& ascender, float& descender, float& lineGap) [static] :136
void Harfbuzz::font_get_h_extents(void* font, float* ascender, float* descender, float* lineGap)
{
    hb_font_extents_t extents;
    hb_font_get_h_extents((hb_font_t*)font, &extents);
    *ascender = extents.ascender / 64.f;
    *descender = - extents.descender / 64.f;
    *lineGap = extents.line_gap / 64.f;
}

// public static void font_set_scale(Uno.IntPtr hbFont, int x_scale, int y_scale) [static] :62
void Harfbuzz::font_set_scale(void* hbFont, int32_t x_scale, int32_t y_scale)
{
    hb_font_set_scale((hb_font_t*)hbFont, x_scale, y_scale);
}

// public static void ft_font_cached_set_funcs(Uno.IntPtr hbFont) [static] :38
void Harfbuzz::ft_font_cached_set_funcs(void* hbFont)
{
    hb_ft_font_cached_set_funcs((hb_font_t*)hbFont);
}

// public static Uno.IntPtr ft_font_create(Uno.IntPtr face) [static] :25
void* Harfbuzz::ft_font_create(void* face)
{
    hb_font_t* result = hb_ft_font_create((FT_Face)face, NULL);
    return result;
}

// public static void ft_font_set_default_load_flags(Uno.IntPtr hbFont) [static] :32
void Harfbuzz::ft_font_set_default_load_flags(void* hbFont)
{
    hb_ft_font_set_load_flags((hb_font_t*)hbFont, FT_LOAD_DEFAULT);
}

// public static void get_shape_data(Uno.IntPtr font, Uno.IntPtr buffer, byte[] output) [static] :105
void Harfbuzz::get_shape_data(void* font, void* buffer, uArray* output)
{
    [] (void* font, void* buffer, uint8_t* output) -> void
    {
        unsigned int glyphCount = hb_buffer_get_length((hb_buffer_t*)buffer);
        hb_glyph_info_t* glyphInfo = hb_buffer_get_glyph_infos((hb_buffer_t*)buffer, nullptr);
        hb_glyph_position_t* glyphPos = hb_buffer_get_glyph_positions((hb_buffer_t*)buffer, nullptr);
        
        struct
        {
        	uint32_t codepoint;
        	uint32_t cluster;
        	float x_advance; float y_advance;
        	float x_offset; float y_offset;
        } current;
        
        for (int i = 0; i < glyphCount; ++i)
        {
        	hb_glyph_info_t info = glyphInfo[i];
        	hb_glyph_position_t pos = glyphPos[i];
        
        	current.codepoint = info.codepoint;
        	current.cluster = info.cluster;
        	current.x_advance = pos.x_advance / 64.f;
        	current.y_advance = pos.y_advance / 64.f;
        	current.x_offset = pos.x_offset / 64.f;
        	current.y_offset = pos.y_offset / 64.f;
        
        	memcpy(output + sizeof(current) * i, &current, sizeof(current));
        }
    } (font, buffer, (uint8_t*)(output == nullptr ? nullptr : output->Ptr()));
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/HarfbuzzFont.uno
// -----------------------------------------------------------------------------

// internal abstract extern class HarfbuzzFont :6
// {
static void HarfbuzzFont_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Text::PositionedGlyph_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HarfbuzzFont_type, interface0));
    type->SetFields(4,
        ::g::Uno::IntPtr_typeof(), offsetof(HarfbuzzFont, _hbFont), 0);
}

HarfbuzzFont_type* HarfbuzzFont_typeof()
{
    static uSStrong<HarfbuzzFont_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::Font_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HarfbuzzFont);
    options.TypeSize = sizeof(HarfbuzzFont_type);
    type = (HarfbuzzFont_type*)uClassType::New("Fuse.Text.Implementation.HarfbuzzFont", options);
    type->fp_build_ = HarfbuzzFont_build;
    type->fp_get_Ascender = (void(*)(::g::Fuse::Text::Font*, float*))HarfbuzzFont__get_Ascender_fn;
    type->fp_get_Descender = (void(*)(::g::Fuse::Text::Font*, float*))HarfbuzzFont__get_Descender_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::Font*))HarfbuzzFont__Dispose_fn;
    type->fp_get_LineHeight = (void(*)(::g::Fuse::Text::Font*, float*))HarfbuzzFont__get_LineHeight_fn;
    type->fp_get_Scale = HarfbuzzFont__get_Scale_fn;
    type->fp_Shape = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Substring*, int32_t*, int32_t*, uArray**))HarfbuzzFont__Shape_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HarfbuzzFont__Dispose_fn;
    return type;
}

// internal HarfbuzzFont(Uno.IntPtr hbFont) :11
void HarfbuzzFont__ctor_1_fn(HarfbuzzFont* __this, void** hbFont)
{
    __this->ctor_1(*hbFont);
}

// public override float get_Ascender() :28
void HarfbuzzFont__get_Ascender_fn(HarfbuzzFont* __this, float* __retval)
{
    float ascender = 0.0f;
    float descender = 0.0f;
    float lineGap = 0.0f;
    ::g::Fuse::Text::Implementation::Harfbuzz::font_get_h_extents(__this->_hbFont, &ascender, &descender, &lineGap);
    return *__retval = ascender * __this->Scale(), void();
}

// public override float get_Descender() :38
void HarfbuzzFont__get_Descender_fn(HarfbuzzFont* __this, float* __retval)
{
    float ascender = 0.0f;
    float descender = 0.0f;
    float lineGap = 0.0f;
    ::g::Fuse::Text::Implementation::Harfbuzz::font_get_h_extents(__this->_hbFont, &ascender, &descender, &lineGap);
    return *__retval = descender * __this->Scale(), void();
}

// public override void Dispose() :16
void HarfbuzzFont__Dispose_fn(HarfbuzzFont* __this)
{
    ::g::Fuse::Text::Font__Dispose_fn(__this);

    if (::g::Uno::IntPtr::op_Inequality(__this->_hbFont, ::g::Uno::IntPtr::Zero_))
    {
        ::g::Fuse::Text::Implementation::Harfbuzz::font_destroy(__this->_hbFont);
        __this->_hbFont = ::g::Uno::IntPtr::Zero_;
    }
}

// public override float get_LineHeight() :49
void HarfbuzzFont__get_LineHeight_fn(HarfbuzzFont* __this, float* __retval)
{
    float ascender = 0.0f;
    float descender = 0.0f;
    float lineGap = 0.0f;
    ::g::Fuse::Text::Implementation::Harfbuzz::font_get_h_extents(__this->_hbFont, &ascender, &descender, &lineGap);
    return *__retval = ((ascender + descender) + lineGap) * __this->Scale(), void();
}

// protected virtual float get_Scale() :45
void HarfbuzzFont__get_Scale_fn(HarfbuzzFont* __this, float* __retval)
{
    return *__retval = 1.0f, void();
}

// public override Fuse.Text.PositionedGlyph[] Shape(Fuse.Text.Substring text, int fontIndex, Fuse.Text.TextDirection dir) :57
void HarfbuzzFont__Shape_fn(HarfbuzzFont* __this, ::g::Fuse::Text::Substring* text, int32_t* fontIndex, int32_t* dir, uArray** __retval)
{
    uStackFrame __("Fuse.Text.Implementation.HarfbuzzFont", "Shape(Fuse.Text.Substring,int,Fuse.Text.TextDirection)");
    int32_t dir_ = *dir;
    int32_t fontIndex_ = *fontIndex;
    void* buffer = ::g::Fuse::Text::Implementation::Harfbuzz::buffer_create(__this->_hbFont, text, dir_ == 0);
    int32_t len = (int32_t)::g::Fuse::Text::Implementation::Harfbuzz::buffer_get_length(buffer);
    int32_t stride = 24;
    uArray* shapeData = uArray::New(::TYPES[0/*byte[]*/], len * stride);
    ::g::Fuse::Text::Implementation::Harfbuzz::get_shape_data(__this->_hbFont, buffer, shapeData);
    uArray* result = uArray::New(::TYPES[1/*Fuse.Text.PositionedGlyph[]*/], len);
    bool littleEndian = true;

    for (int32_t i = 0; i < len; ++i)
    {
        int32_t pos = i * stride;
        uint32_t codepoint = ::g::Uno::Runtime::Implementation::BufferImpl::GetUInt(shapeData, pos, littleEndian);
        pos = pos + 4;
        uint32_t cluster = ::g::Uno::Runtime::Implementation::BufferImpl::GetUInt(shapeData, pos, littleEndian);
        pos = pos + 4;
        float a1 = ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(shapeData, pos, littleEndian);
        pos = pos + 4;
        float a2 = ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(shapeData, pos, littleEndian);
        pos = pos + 4;
        float o1 = ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(shapeData, pos, littleEndian);
        pos = pos + 4;
        float o2 = ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(shapeData, pos, littleEndian);
        pos = pos + 4;
        ::g::Uno::Float2 advance = ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Multiply(__this->Scale(), ::g::Uno::Float2__New2(1.0f, -1.0f)), ::g::Uno::Float2__New2(a1, a2));
        ::g::Uno::Float2 offset = ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Multiply(__this->Scale(), ::g::Uno::Float2__New2(1.0f, -1.0f)), ::g::Uno::Float2__New2(o1, o2));
        uPtr(result)->Item< ::g::Fuse::Text::PositionedGlyph>(i) = ::g::Fuse::Text::PositionedGlyph__New1(::g::Fuse::Text::Glyph__New1(fontIndex_, codepoint), advance, offset, (int32_t)cluster);
    }

    ::g::Fuse::Text::Implementation::Harfbuzz::buffer_destroy(buffer);
    return *__retval = result, void();
}

// internal HarfbuzzFont(Uno.IntPtr hbFont) [instance] :11
void HarfbuzzFont::ctor_1(void* hbFont)
{
    ctor_();
    _hbFont = hbFont;
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/ICU.uno
// --------------------------------------------------------------------

// internal static extern class ICU :23
// {
static void ICU_build(uType* type)
{
}

uClassType* ICU_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.ICU", options);
    type->fp_build_ = ICU_build;
    return type;
}

// public static void CheckError(Fuse.Text.Implementation.ICU.ErrorCode errorCode) :27
void ICU__CheckError_fn(int32_t* errorCode)
{
    ICU::CheckError(*errorCode);
}

// private static Uno.IntPtr ErrorCString(Fuse.Text.Implementation.ICU.ErrorCode errorCode) :43
void ICU__ErrorCString_fn(int32_t* errorCode, void** __retval)
{
    *__retval = ICU::ErrorCString(*errorCode);
}

// private static int IsFailure(Fuse.Text.Implementation.ICU.ErrorCode errorCode) :37
void ICU__IsFailure_fn(int32_t* errorCode, int32_t* __retval)
{
    *__retval = ICU::IsFailure(*errorCode);
}

// public static void CheckError(Fuse.Text.Implementation.ICU.ErrorCode errorCode) [static] :27
void ICU::CheckError(int32_t errorCode)
{
    uStackFrame __("Fuse.Text.Implementation.ICU", "CheckError(Fuse.Text.Implementation.ICU.ErrorCode)");

    if (ICU::IsFailure(errorCode) != 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(uString::Const("UBiDi error: "), ::g::Fuse::Text::Implementation::CString::ToString(ICU::ErrorCString(errorCode)))));
}

// private static Uno.IntPtr ErrorCString(Fuse.Text.Implementation.ICU.ErrorCode errorCode) [static] :43
void* ICU::ErrorCString(int32_t errorCode)
{
    return (void*)u_errorName((::UErrorCode)errorCode);
}

// private static int IsFailure(Fuse.Text.Implementation.ICU.ErrorCode errorCode) [static] :37
int32_t ICU::IsFailure(int32_t errorCode)
{
    return U_FAILURE((::UErrorCode)errorCode);
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/Util.uno
// ---------------------------------------------------------------------

// internal static extern class Memory :9
// {
static void Memory_build(uType* type)
{
}

uClassType* Memory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.Memory", options);
    type->fp_build_ = Memory_build;
    return type;
}

// public static void Copy(byte[] dst, Uno.IntPtr src, int len) :12
void Memory__Copy_fn(uArray* dst, void** src, int32_t* len)
{
    Memory::Copy(dst, *src, *len);
}

// public static void Copy(byte[] dst, Uno.IntPtr src, int len) [static] :12
void Memory::Copy(uArray* dst, void* src, int32_t len)
{
    [] (uint8_t* dst, void* src, int len) -> void
    {
        ::memcpy(dst, src, len);
    } ((uint8_t*)(dst == nullptr ? nullptr : dst->Ptr()), src, len);
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/UBrk.uno
// ---------------------------------------------------------------------

// internal static extern class UBrk :9
// {
static void UBrk_build(uType* type)
{
}

uClassType* UBrk_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.UBrk", options);
    type->fp_build_ = UBrk_build;
    return type;
}

// public static Fuse.Text.Implementation.BitArray GetSoftLineBreaks(Fuse.Text.Substring text) :11
void UBrk__GetSoftLineBreaks_fn(::g::Fuse::Text::Substring* text, ::g::Fuse::Text::Implementation::BitArray** __retval)
{
    *__retval = UBrk::GetSoftLineBreaks(text);
}

// public static Fuse.Text.Implementation.ICU.ErrorCode ubrk(string text, int offset, int length, byte[] outBitArray) :19
void UBrk__ubrk_fn(uString* text, int32_t* offset, int32_t* length, uArray* outBitArray, int32_t* __retval)
{
    *__retval = UBrk::ubrk(text, *offset, *length, outBitArray);
}

// public static Fuse.Text.Implementation.BitArray GetSoftLineBreaks(Fuse.Text.Substring text) [static] :11
::g::Fuse::Text::Implementation::BitArray* UBrk::GetSoftLineBreaks(::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Implementation.UBrk", "GetSoftLineBreaks(Fuse.Text.Substring)");
    ::g::Fuse::Text::Implementation::BitArray* result = ::g::Fuse::Text::Implementation::BitArray::New1(uPtr(text)->Length + 1);
    ::g::Fuse::Text::Implementation::ICU::CheckError(UBrk::ubrk(text->_parent, text->_start, text->Length, result->Data));
    return result;
}

// public static Fuse.Text.Implementation.ICU.ErrorCode ubrk(string text, int offset, int length, byte[] outBitArray) [static] :19
int32_t UBrk::ubrk(uString* text, int32_t offset, int32_t length, uArray* outBitArray)
{
    return [] (const char16_t* text, int offset, int length, uint8_t* outBitArray) -> int
    {
        ::UErrorCode error = U_ZERO_ERROR;
        
        auto bi = ::ubrk_open(UBRK_LINE, 0, (const ::UChar*)(text + offset), length, &error);
        if (U_FAILURE(error))
        	return error;
        
        const int32_t bytesize = 8;
        int32_t boundary = ::ubrk_first(bi);
        while (boundary != UBRK_DONE)
        {
        	int32_t i = boundary / bytesize;
        	uint8_t mask = (uint8_t)(1 << (boundary % bytesize));
        	outBitArray[i] |= mask;
        	boundary = ::ubrk_next(bi);
        }
        
        ubrk_close(bi);
        return U_ZERO_ERROR;
    } ((char16_t*)(text == nullptr ? nullptr : text->Ptr()), offset, length, (uint8_t*)(outBitArray == nullptr ? nullptr : outBitArray->Ptr()));
}
// }

}}}} // ::g::Fuse::Text::Implementation
