// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.9.0/Internal/Cache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Cache;}}}
namespace g{namespace Fuse{namespace Internal{struct CacheItem;}}}
namespace g{namespace Fuse{namespace Internal{struct CacheRef;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public sealed class Cache<TKey, TValue> :14
// {
struct Cache_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Cache_type* Cache_typeof();
void Cache__ctor__fn(Cache* __this, uDelegate* factory, int32_t* maxUnused);
void Cache__Dispose_fn(Cache* __this);
void Cache__Get_fn(Cache* __this, void* key, ::g::Fuse::Internal::CacheItem* __retval);
void Cache__New1_fn(uType* __type, uDelegate* factory, int32_t* maxUnused, Cache** __retval);
void Cache__RemoveUnused_fn(Cache* __this, ::g::Uno::Collections::LinkedListNode* node);
void Cache__SignalUnused_fn(Cache* __this, ::g::Fuse::Internal::CacheRef* cacheRef);
void Cache__SignalUsed_fn(Cache* __this, ::g::Fuse::Internal::CacheRef* cacheRef);

struct Cache : uObject
{
    int32_t _maxUnused;
    uStrong< ::g::Uno::Collections::LinkedList*> _unused;
    uStrong< ::g::Uno::Collections::Dictionary*> _dict;
    uStrong<uDelegate*> _factory;
    uStrong<uObject*> _mutex;

    void ctor_(uDelegate* factory, int32_t maxUnused);
    void Dispose();
    template<class TKey>
    ::g::Fuse::Internal::CacheItem Get(TKey key);
    void RemoveUnused(::g::Uno::Collections::LinkedListNode* node);
    void SignalUnused(::g::Fuse::Internal::CacheRef* cacheRef);
    void SignalUsed(::g::Fuse::Internal::CacheRef* cacheRef);
    static Cache* New1(uType* __type, uDelegate* factory, int32_t maxUnused);
};

}}} // ::g::Fuse::Internal

#include <Fuse.Internal.CacheItem-2.h>

namespace g{
namespace Fuse{
namespace Internal{

template<class TKey>
::g::Fuse::Internal::CacheItem Cache::Get(TKey key) { ::g::Fuse::Internal::CacheItem __retval; return Cache__Get_fn(this, uConstrain(__type->T(0), key), &__retval), __retval; }
// }

}}} // ::g::Fuse::Internal
