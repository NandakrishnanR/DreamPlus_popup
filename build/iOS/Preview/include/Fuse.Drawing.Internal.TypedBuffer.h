// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.9.0/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct TypedBuffer;}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public class TypedBuffer :20
// {
uType* TypedBuffer_typeof();
void TypedBuffer__ctor__fn(TypedBuffer* __this);
void TypedBuffer__ctor_1_fn(TypedBuffer* __this, int32_t* typeSize1, int32_t* initSize);
void TypedBuffer__CheckGrow_fn(TypedBuffer* __this);
void TypedBuffer__Clear_fn(TypedBuffer* __this);
void TypedBuffer__Count_fn(TypedBuffer* __this, int32_t* __retval);
void TypedBuffer__GetBuffer_fn(TypedBuffer* __this, ::g::Uno::Buffer** __retval);
void TypedBuffer__GetDeviceIndex_fn(TypedBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval);
void TypedBuffer__GetDeviceVertex_fn(TypedBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval);
void TypedBuffer__Init_fn(TypedBuffer* __this, int32_t* initSize);
void TypedBuffer__InitDeviceIndex_fn(TypedBuffer* __this, int32_t* bu);
void TypedBuffer__InitDeviceVertex_fn(TypedBuffer* __this, int32_t* bu);
void TypedBuffer__New1_fn(TypedBuffer** __retval);
void TypedBuffer__New2_fn(int32_t* typeSize1, int32_t* initSize, TypedBuffer** __retval);
void TypedBuffer__UpdateDevice_fn(TypedBuffer* __this);

struct TypedBuffer : uObject
{
    uStrong< ::g::Uno::Buffer*> back;
    int32_t typeSize;
    int32_t capacity;
    int32_t size;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> deviceIndex;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> deviceVertex;

    void ctor_();
    void ctor_1(int32_t typeSize1, int32_t initSize);
    void CheckGrow();
    void Clear();
    int32_t Count();
    ::g::Uno::Buffer* GetBuffer();
    ::g::Uno::Graphics::IndexBuffer* GetDeviceIndex();
    ::g::Uno::Graphics::VertexBuffer* GetDeviceVertex();
    void Init(int32_t initSize);
    void InitDeviceIndex(int32_t bu);
    void InitDeviceVertex(int32_t bu);
    void UpdateDevice();
    static TypedBuffer* New1();
    static TypedBuffer* New2(int32_t typeSize1, int32_t initSize);
};
// }

}}}} // ::g::Fuse::Drawing::Internal
