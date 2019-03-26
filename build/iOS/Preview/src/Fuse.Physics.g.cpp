// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Box.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Physics.Axis2D.h>
#include <Fuse.Physics.Body.h>
#include <Fuse.Physics.BodyAttr.h>
#include <Fuse.Physics.Draggable.h>
#include <Fuse.Physics.EnteredForceField.h>
#include <Fuse.Physics.ExitedForceField.h>
#include <Fuse.Physics.ForceField.h>
#include <Fuse.Physics.ForceFieldEventArgs.h>
#include <Fuse.Physics.ForceFieldEventHandler.h>
#include <Fuse.Physics.ForceFieldEventTrigger.h>
#include <Fuse.Physics.ForceFieldTrigger.h>
#include <Fuse.Physics.InForceFieldAnimation.h>
#include <Fuse.Physics.IRule.h>
#include <Fuse.Physics.PointAttractor.h>
#include <Fuse.Physics.Spring.h>
#include <Fuse.Physics.WhileDragging.h>
#include <Fuse.Physics.World.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Time.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventArgs.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uType* TYPES[21];

namespace g{
namespace Fuse{
namespace Physics{

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/Draggable.uno
// --------------------------------------------------------------

// public enum Axis2D :5
uEnumType* Axis2D_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Physics.Axis2D", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "XY", 0LL,
        "X", 1LL,
        "Y", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/Body.uno
// ---------------------------------------------------------

// internal sealed class Body :7
// {
// static generated Body() :7
static void Body__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Body::_frictionHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Body_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Physics::World_typeof());
    type->SetFields(0,
        ::g::Fuse::Physics::World_typeof(), offsetof(Body, World), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Body, Visual), 0,
        ::g::Uno::Int_typeof(), offsetof(Body, PinCount), 0,
        ::g::Fuse::Translation_typeof(), offsetof(Body, _translation), 0,
        uObject_typeof(), offsetof(Body, _motionOwner), 0,
        ::TYPES[1/*Fuse.Elements.Element*/], offsetof(Body, _constraint), 0,
        ::g::Uno::Float3_typeof(), offsetof(Body, _velocity), 0,
        ::g::Uno::Float3_typeof(), offsetof(Body, _position), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Body::_frictionHandle_, uFieldFlagsStatic);
}

uType* Body_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Body);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Physics.Body", options);
    type->fp_build_ = Body_build;
    type->fp_cctor_ = Body__cctor__fn;
    return type;
}

// internal Body(Fuse.Physics.World world, Fuse.Visual node) :41
void Body__ctor__fn(Body* __this, ::g::Fuse::Physics::World* world, ::g::Fuse::Visual* node)
{
    __this->ctor_(world, node);
}

// internal void ApplyForce(float3 force) :93
void Body__ApplyForce_fn(Body* __this, ::g::Uno::Float3* force)
{
    __this->ApplyForce(*force);
}

// private void ApplyFriction(double deltaTime) :149
void Body__ApplyFriction_fn(Body* __this, double* deltaTime)
{
    __this->ApplyFriction(*deltaTime);
}

// private void ApplyMotion(double deltaTime) :159
void Body__ApplyMotion_fn(Body* __this, double* deltaTime)
{
    __this->ApplyMotion(*deltaTime);
}

// internal float3 get_CenterPosition() :38
void Body__get_CenterPosition_fn(Body* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->CenterPosition();
}

// internal void ConstrainToBounds(Fuse.Elements.Element elm) :87
void Body__ConstrainToBounds_fn(Body* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ConstrainToBounds(elm);
}

// internal void Dispose() :50
void Body__Dispose_fn(Body* __this)
{
    __this->Dispose();
}

// internal float get_Friction() :25
void Body__get_Friction_fn(Body* __this, float* __retval)
{
    *__retval = __this->Friction();
}

// internal void set_Friction(float value) :26
void Body__set_Friction_fn(Body* __this, float* value)
{
    __this->Friction(*value);
}

// internal static float GetFriction(Fuse.Visual n) :11
void Body__GetFriction_fn(::g::Fuse::Visual* n, float* __retval)
{
    *__retval = Body::GetFriction(n);
}

// internal void Move(float3 delta) :80
void Body__Move_fn(Body* __this, ::g::Uno::Float3* delta)
{
    __this->Move(*delta);
}

// internal Body New(Fuse.Physics.World world, Fuse.Visual node) :41
void Body__New1_fn(::g::Fuse::Physics::World* world, ::g::Fuse::Visual* node, Body** __retval)
{
    *__retval = Body::New1(world, node);
}

// internal static Fuse.Physics.Body Pin(Fuse.Visual n) :55
void Body__Pin_fn(::g::Fuse::Visual* n, Body** __retval)
{
    *__retval = Body::Pin(n);
}

// internal static void SetFriction(Fuse.Visual n, float friction) :18
void Body__SetFriction_fn(::g::Fuse::Visual* n, float* friction)
{
    Body::SetFriction(n, *friction);
}

// internal bool TryLockMotion(object owner) :67
void Body__TryLockMotion_fn(Body* __this, uObject* owner, bool* __retval)
{
    *__retval = __this->TryLockMotion(owner);
}

// internal void UnlockMotion() :75
void Body__UnlockMotion_fn(Body* __this)
{
    __this->UnlockMotion();
}

// internal void Unpin() :60
void Body__Unpin_fn(Body* __this)
{
    __this->Unpin();
}

// internal void Update(double deltaTime) :111
void Body__Update_fn(Body* __this, double* deltaTime)
{
    __this->Update(*deltaTime);
}

// internal float3 get_WorldPosition() :102
void Body__get_WorldPosition_fn(Body* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->WorldPosition();
}

uSStrong< ::g::Fuse::PropertyHandle*> Body::_frictionHandle_;

// internal Body(Fuse.Physics.World world, Fuse.Visual node) [instance] :41
void Body::ctor_(::g::Fuse::Physics::World* world, ::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Physics.Body", ".ctor(Fuse.Physics.World,Fuse.Visual)");
    Visual = node;
    _translation = ::g::Fuse::Translation::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Visual)->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), _translation);
    World = world;
}

// internal void ApplyForce(float3 force) [instance] :93
void Body::ApplyForce(::g::Uno::Float3 force)
{
    _velocity = ::g::Uno::Float3__op_Addition2(_velocity, force);
}

// private void ApplyFriction(double deltaTime) [instance] :149
void Body::ApplyFriction(double deltaTime)
{
    float friction = Friction();

    for (double t = 0.0; t < deltaTime; t = t + 0.001)
        _velocity = ::g::Uno::Float3__op_Multiply1(_velocity, 1.0f - friction);
}

// private void ApplyMotion(double deltaTime) [instance] :159
void Body::ApplyMotion(double deltaTime)
{
    if (_motionOwner != NULL)
        return;

    _position = ::g::Uno::Float3__op_Addition2(_position, ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1(_velocity, (float)deltaTime), 5.0f));
}

// internal float3 get_CenterPosition() [instance] :38
::g::Uno::Float3 Body::CenterPosition()
{
    uStackFrame __("Fuse.Physics.Body", "get_CenterPosition()");
    ::g::Uno::Float4 ind1;
    ind1 = ::g::Uno::Vector::Transform4(uPtr(Visual)->LocalBounds().Center(), uPtr(Visual)->WorldTransform());
    return ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
}

// internal void ConstrainToBounds(Fuse.Elements.Element elm) [instance] :87
void Body::ConstrainToBounds(::g::Fuse::Elements::Element* elm)
{
    _constraint = elm;
}

// internal void Dispose() [instance] :50
void Body::Dispose()
{
    uStackFrame __("Fuse.Physics.Body", "Dispose()");
    bool ret3;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Visual)->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), _translation, &ret3);
}

// internal float get_Friction() [instance] :25
float Body::Friction()
{
    uStackFrame __("Fuse.Physics.Body", "get_Friction()");
    return Body::GetFriction(Visual);
}

// internal void set_Friction(float value) [instance] :26
void Body::Friction(float value)
{
    uStackFrame __("Fuse.Physics.Body", "set_Friction(float)");
    Body::SetFriction(Visual, value);
}

// internal void Move(float3 delta) [instance] :80
void Body::Move(::g::Uno::Float3 delta)
{
    _position = ::g::Uno::Float3__op_Addition2(_position, delta);
}

// internal bool TryLockMotion(object owner) [instance] :67
bool Body::TryLockMotion(uObject* owner)
{
    if (_motionOwner != NULL)
        return false;

    _motionOwner = owner;
    return true;
}

// internal void UnlockMotion() [instance] :75
void Body::UnlockMotion()
{
    _motionOwner = NULL;
}

// internal void Unpin() [instance] :60
void Body::Unpin()
{
    uStackFrame __("Fuse.Physics.Body", "Unpin()");
    uPtr(World)->UnpinBody(this);
}

// internal void Update(double deltaTime) [instance] :111
void Body::Update(double deltaTime)
{
    uStackFrame __("Fuse.Physics.Body", "Update(double)");
    ApplyFriction(deltaTime);
    ApplyMotion(deltaTime);
    uPtr(_translation)->Vector(_position);

    if (_constraint != NULL)
    {
        ::g::Uno::Float3 p = WorldPosition();
        ::g::Uno::Float2 s = ::g::Uno::Float2__New1(0.0f);

        if (uIs((::g::Fuse::Visual*)Visual, ::TYPES[1/*Fuse.Elements.Element*/]))
            s = uPtr(uAs< ::g::Fuse::Elements::Element*>(Visual, ::TYPES[1/*Fuse.Elements.Element*/]))->ActualSize();

        ::g::Uno::Float3 bmin = uPtr(_constraint)->WorldPosition();
        ::g::Uno::Float3 bmax = ::g::Uno::Float3__op_Addition2(::g::Uno::Float3__New4(uPtr(_constraint)->ActualSize(), 0.0f), bmin);
        p.X = ::g::Uno::Math::Max1(p.X, bmin.X);
        p.Y = ::g::Uno::Math::Max1(p.Y, bmin.Y);
        p.Z = ::g::Uno::Math::Max1(p.Z, bmin.Z);
        p.X = ::g::Uno::Math::Min1(p.X, bmax.X - s.X);
        p.Y = ::g::Uno::Math::Min1(p.Y, bmax.Y - s.Y);
        p.Z = ::g::Uno::Math::Max1(p.Z, bmax.Z);
        ::g::Uno::Float3 d = ::g::Uno::Float3__op_Subtraction2(p, WorldPosition());

        if ((double)::g::Uno::Vector::Length1(d) > 0.01)
        {
            _position = ::g::Uno::Float3__op_Addition2(_position, d);
            uPtr(_translation)->Vector(_position);
            _velocity = ::g::Uno::Float3__New1(0.0f);
        }
    }
}

// internal float3 get_WorldPosition() [instance] :102
::g::Uno::Float3 Body::WorldPosition()
{
    uStackFrame __("Fuse.Physics.Body", "get_WorldPosition()");
    return uPtr(Visual)->WorldPosition();
}

// internal static float GetFriction(Fuse.Visual n) [static] :11
float Body::GetFriction(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Physics.Body", "GetFriction(Fuse.Visual)");
    Body_typeof()->Init();
    uObject* f = uPtr(uPtr(n)->Properties())->Get(Body::_frictionHandle_);

    if (f == NULL)
        return 0.05f;
    else
        return uUnbox<float>(::g::Uno::Float_typeof(), f);
}

// internal Body New(Fuse.Physics.World world, Fuse.Visual node) [static] :41
Body* Body::New1(::g::Fuse::Physics::World* world, ::g::Fuse::Visual* node)
{
    Body* obj2 = (Body*)uNew(Body_typeof());
    obj2->ctor_(world, node);
    return obj2;
}

// internal static Fuse.Physics.Body Pin(Fuse.Visual n) [static] :55
Body* Body::Pin(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Physics.Body", "Pin(Fuse.Visual)");
    Body_typeof()->Init();
    return uPtr(::g::Fuse::Physics::World::FindWorld(n))->PinBody(n);
}

// internal static void SetFriction(Fuse.Visual n, float friction) [static] :18
void Body::SetFriction(::g::Fuse::Visual* n, float friction)
{
    uStackFrame __("Fuse.Physics.Body", "SetFriction(Fuse.Visual,float)");
    Body_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Body::_frictionHandle_, uBox(::g::Uno::Float_typeof(), friction));
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/BodyAttr.uno
// -------------------------------------------------------------

// public static class BodyAttr :5
// {
static void BodyAttr_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Physics::Body_typeof());
    type->Reflection.SetFunctions(2,
        new uFunction("GetFriction", NULL, (void*)BodyAttr__GetFriction_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("SetFriction", NULL, (void*)BodyAttr__SetFriction_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Float_typeof()));
}

uClassType* BodyAttr_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Physics.BodyAttr", options);
    type->fp_build_ = BodyAttr_build;
    return type;
}

// public static float GetFriction(Fuse.Visual n) :8
void BodyAttr__GetFriction_fn(::g::Fuse::Visual* n, float* __retval)
{
    *__retval = BodyAttr::GetFriction(n);
}

// public static void SetFriction(Fuse.Visual n, float friction) :14
void BodyAttr__SetFriction_fn(::g::Fuse::Visual* n, float* friction)
{
    BodyAttr::SetFriction(n, *friction);
}

// public static float GetFriction(Fuse.Visual n) [static] :8
float BodyAttr::GetFriction(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Physics.BodyAttr", "GetFriction(Fuse.Visual)");
    return ::g::Fuse::Physics::Body::GetFriction(n);
}

// public static void SetFriction(Fuse.Visual n, float friction) [static] :14
void BodyAttr::SetFriction(::g::Fuse::Visual* n, float friction)
{
    uStackFrame __("Fuse.Physics.BodyAttr", "SetFriction(Fuse.Visual,float)");
    ::g::Fuse::Physics::Body::SetFriction(n, friction);
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/Draggable.uno
// --------------------------------------------------------------

// public sealed class Draggable :15
// {
static void Draggable_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Physics::Body_typeof(),
        ::g::Fuse::Input::Pointer_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Draggable_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Draggable_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Draggable_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Draggable_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Draggable_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Draggable_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Draggable_type, interface6),
        ::g::Fuse::Physics::IRule_typeof(), offsetof(Draggable_type, interface7));
    type->SetFields(18,
        ::g::Fuse::Physics::Body_typeof(), offsetof(Draggable, _body), 0,
        ::g::Uno::Bool_typeof(), offsetof(Draggable, _hasLock), 0,
        ::g::Uno::Float3_typeof(), offsetof(Draggable, _pos), 0,
        ::g::Uno::Float3_typeof(), offsetof(Draggable, _forceMotion), 0,
        ::g::Fuse::Physics::Axis2D_typeof(), offsetof(Draggable, _Axis), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(Draggable, _Bounds), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Axis", NULL, (void*)Draggable__get_Axis_fn, 0, false, ::g::Fuse::Physics::Axis2D_typeof(), 0),
        new uFunction("set_Axis", NULL, (void*)Draggable__set_Axis_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Physics::Axis2D_typeof()),
        new uFunction("get_Bounds", NULL, (void*)Draggable__get_Bounds_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_Bounds", NULL, (void*)Draggable__set_Bounds_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)Draggable__New2_fn, 0, true, type, 0));
}

Draggable_type* Draggable_typeof()
{
    static uSStrong<Draggable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 8;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Draggable);
    options.TypeSize = sizeof(Draggable_type);
    type = (Draggable_type*)uClassType::New("Fuse.Physics.Draggable", options);
    type->fp_build_ = Draggable_build;
    type->fp_ctor_ = (void*)Draggable__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Draggable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Draggable__OnUnrooted_fn;
    type->interface7.fp_Update = (void(*)(uObject*, double*, ::g::Fuse::Physics::World*))Draggable__FusePhysicsIRuleUpdate_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Draggable() :15
void Draggable__ctor_3_fn(Draggable* __this)
{
    __this->ctor_3();
}

// public generated Fuse.Physics.Axis2D get_Axis() :25
void Draggable__get_Axis_fn(Draggable* __this, int32_t* __retval)
{
    *__retval = __this->Axis();
}

// public generated void set_Axis(Fuse.Physics.Axis2D value) :25
void Draggable__set_Axis_fn(Draggable* __this, int32_t* value)
{
    __this->Axis(*value);
}

// public generated Fuse.Elements.Element get_Bounds() :19
void Draggable__get_Bounds_fn(Draggable* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Bounds();
}

// public generated void set_Bounds(Fuse.Elements.Element value) :19
void Draggable__set_Bounds_fn(Draggable* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Bounds(value);
}

// private void Fuse.Physics.IRule.Update(double deltaTime, Fuse.Physics.World world) :117
void Draggable__FusePhysicsIRuleUpdate_fn(Draggable* __this, double* deltaTime, ::g::Fuse::Physics::World* world)
{
    uStackFrame __("Fuse.Physics.Draggable", "Fuse.Physics.IRule.Update(double,Fuse.Physics.World)");
    double deltaTime_ = *deltaTime;
    uPtr(__this->_body)->Move(__this->_forceMotion);
    uPtr(__this->_body)->ApplyForce(::g::Uno::Float3__op_Division1(::g::Uno::Float3__op_Multiply1(__this->_forceMotion, 0.3f), (float)deltaTime_));
    uPtr(__this->_body)->ConstrainToBounds(__this->Bounds());
    __this->_forceMotion = ::g::Uno::Float3__New1(0.0f);
}

// private float3 GetPointerPosition(Fuse.Input.PointerEventArgs args) :48
void Draggable__GetPointerPosition_fn(Draggable* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetPointerPosition(args);
}

// public generated Draggable New() :15
void Draggable__New2_fn(Draggable** __retval)
{
    *__retval = Draggable::New2();
}

// private void OnMoved(object sender, Fuse.Input.PointerMovedArgs args) :84
void Draggable__OnMoved_fn(Draggable* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnMoved(sender, args);
}

// private void OnPointerLost() :72
void Draggable__OnPointerLost_fn(Draggable* __this)
{
    __this->OnPointerLost();
}

// private void OnPressed(object sender, Fuse.Input.PointerPressedArgs args) :57
void Draggable__OnPressed_fn(Draggable* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPressed(sender, args);
}

// private void OnReleased(object sender, Fuse.Input.PointerReleasedArgs args) :105
void Draggable__OnReleased_fn(Draggable* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnReleased(sender, args);
}

// protected override sealed void OnRooted() :27
void Draggable__OnRooted_fn(Draggable* __this)
{
    uStackFrame __("Fuse.Physics.Draggable", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_body = ::g::Fuse::Physics::Body::Pin(__this->Parent());
    uPtr(uPtr(__this->_body)->World)->AddRule((uObject*)__this);
    ::g::Fuse::Input::Pointer::AddHandlers(__this->Parent(), uDelegate::New(::TYPES[3/*Fuse.Input.PointerPressedHandler*/], (void*)Draggable__OnPressed_fn, __this), uDelegate::New(::TYPES[4/*Fuse.Input.PointerMovedHandler*/], (void*)Draggable__OnMoved_fn, __this), uDelegate::New(::TYPES[5/*Fuse.Input.PointerReleasedHandler*/], (void*)Draggable__OnReleased_fn, __this), NULL, NULL, NULL);
}

// protected override sealed void OnUnrooted() :37
void Draggable__OnUnrooted_fn(Draggable* __this)
{
    uStackFrame __("Fuse.Physics.Draggable", "OnUnrooted()");
    uPtr(uPtr(__this->_body)->World)->RemoveRule((uObject*)__this);
    uPtr(__this->_body)->Unpin();
    __this->_body = NULL;
    ::g::Fuse::Input::Pointer::RemoveHandlers(__this->Parent(), uDelegate::New(::TYPES[3/*Fuse.Input.PointerPressedHandler*/], (void*)Draggable__OnPressed_fn, __this), uDelegate::New(::TYPES[4/*Fuse.Input.PointerMovedHandler*/], (void*)Draggable__OnMoved_fn, __this), uDelegate::New(::TYPES[5/*Fuse.Input.PointerReleasedHandler*/], (void*)Draggable__OnReleased_fn, __this), NULL, NULL, NULL);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public generated Draggable() [instance] :15
void Draggable::ctor_3()
{
    ctor_2();
}

// public generated Fuse.Physics.Axis2D get_Axis() [instance] :25
int32_t Draggable::Axis()
{
    return _Axis;
}

// public generated void set_Axis(Fuse.Physics.Axis2D value) [instance] :25
void Draggable::Axis(int32_t value)
{
    _Axis = value;
}

// public generated Fuse.Elements.Element get_Bounds() [instance] :19
::g::Fuse::Elements::Element* Draggable::Bounds()
{
    return _Bounds;
}

// public generated void set_Bounds(Fuse.Elements.Element value) [instance] :19
void Draggable::Bounds(::g::Fuse::Elements::Element* value)
{
    _Bounds = value;
}

// private float3 GetPointerPosition(Fuse.Input.PointerEventArgs args) [instance] :48
::g::Uno::Float3 Draggable::GetPointerPosition(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Physics.Draggable", "GetPointerPosition(Fuse.Input.PointerEventArgs)");
    return ::g::Uno::Float3__New4(uPtr(args)->WindowPoint(), 0.0f);
}

// private void OnMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :84
void Draggable::OnMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Physics.Draggable", "OnMoved(object,Fuse.Input.PointerMovedArgs)");

    if (!_hasLock)
        return;

    ::g::Uno::Float3 newPos = GetPointerPosition(args);
    ::g::Uno::Float3 delta = ::g::Uno::Float3__op_Subtraction2(newPos, _pos);
    _pos = newPos;

    switch (Axis())
    {
        case 1:
        {
            delta.Y = 0.0f;
            break;
        }
        case 2:
        {
            delta.X = 0.0f;
            break;
        }
    }

    _forceMotion = ::g::Uno::Float3__op_Addition2(_forceMotion, delta);
}

// private void OnPointerLost() [instance] :72
void Draggable::OnPointerLost()
{
    uStackFrame __("Fuse.Physics.Draggable", "OnPointerLost()");

    if (_hasLock)
    {
        _hasLock = false;
        uPtr(_body)->UnlockMotion();
        ::g::Fuse::Physics::WhileDragging::End(uPtr(_body)->Visual);
    }
}

// private void OnPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :57
void Draggable::OnPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Physics.Draggable", "OnPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_hasLock)
        return;

    if (uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Draggable__OnPointerLost_fn, this), uPtr(args)->Visual()))
    {
        _hasLock = uPtr(_body)->TryLockMotion(this);

        if (!_hasLock)
            return;

        ::g::Fuse::Physics::WhileDragging::Begin(uPtr(_body)->Visual);
        _pos = GetPointerPosition(args);
    }
}

// private void OnReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :105
void Draggable::OnReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Physics.Draggable", "OnReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_hasLock)
    {
        uPtr(args)->ReleaseCapture(this);
        _hasLock = false;
        uPtr(_body)->UnlockMotion();
        ::g::Fuse::Physics::WhileDragging::End(uPtr(_body)->Visual);
    }
}

// public generated Draggable New() [static] :15
Draggable* Draggable::New2()
{
    Draggable* obj1 = (Draggable*)uNew(Draggable_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/ForceFieldTriggers.uno
// -----------------------------------------------------------------------

// public sealed class EnteredForceField :77
// {
static void EnteredForceField_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface8));
    type->SetFields(41,
        ::g::Uno::Float_typeof(), offsetof(EnteredForceField, _oldForce), 0,
        ::g::Uno::Float_typeof(), offsetof(EnteredForceField, _Threshold), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)EnteredForceField__New2_fn, 0, true, type, 0),
        new uFunction("get_Threshold", NULL, (void*)EnteredForceField__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)EnteredForceField__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Physics::ForceFieldTrigger_type* EnteredForceField_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Physics::ForceFieldEventTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(EnteredForceField);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceFieldTrigger_type);
    type = (::g::Fuse::Physics::ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.EnteredForceField", options);
    type->fp_build_ = EnteredForceField_build;
    type->fp_ctor_ = (void*)EnteredForceField__New2_fn;
    type->fp_SetForce = (void(*)(::g::Fuse::Physics::ForceFieldTrigger*, ::g::Fuse::Physics::Body*, float*))EnteredForceField__SetForce_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated EnteredForceField() :77
void EnteredForceField__ctor_7_fn(EnteredForceField* __this)
{
    __this->ctor_7();
}

// public generated EnteredForceField New() :77
void EnteredForceField__New2_fn(EnteredForceField** __retval)
{
    *__retval = EnteredForceField::New2();
}

// internal override sealed void SetForce(Fuse.Physics.Body body, float force) :83
void EnteredForceField__SetForce_fn(EnteredForceField* __this, ::g::Fuse::Physics::Body* body, float* force)
{
    uStackFrame __("Fuse.Physics.EnteredForceField", "SetForce(Fuse.Physics.Body,float)");
    float force_ = *force;

    if ((__this->_oldForce <= __this->Threshold()) && (force_ > __this->Threshold()))
        __this->OnTriggered(body);

    __this->_oldForce = force_;
}

// public generated float get_Threshold() :79
void EnteredForceField__get_Threshold_fn(EnteredForceField* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public generated void set_Threshold(float value) :79
void EnteredForceField__set_Threshold_fn(EnteredForceField* __this, float* value)
{
    __this->Threshold(*value);
}

// public generated EnteredForceField() [instance] :77
void EnteredForceField::ctor_7()
{
    ctor_6();
}

// public generated float get_Threshold() [instance] :79
float EnteredForceField::Threshold()
{
    return _Threshold;
}

// public generated void set_Threshold(float value) [instance] :79
void EnteredForceField::Threshold(float value)
{
    _Threshold = value;
}

// public generated EnteredForceField New() [static] :77
EnteredForceField* EnteredForceField::New2()
{
    EnteredForceField* obj1 = (EnteredForceField*)uNew(EnteredForceField_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/ForceFieldTriggers.uno
// -----------------------------------------------------------------------

// public sealed class ExitedForceField :114
// {
static void ExitedForceField_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface8));
    type->SetFields(41,
        ::g::Uno::Float_typeof(), offsetof(ExitedForceField, _oldForce), 0,
        ::g::Uno::Float_typeof(), offsetof(ExitedForceField, _Threshold), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ExitedForceField__New2_fn, 0, true, type, 0),
        new uFunction("get_Threshold", NULL, (void*)ExitedForceField__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)ExitedForceField__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Physics::ForceFieldTrigger_type* ExitedForceField_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Physics::ForceFieldEventTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(ExitedForceField);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceFieldTrigger_type);
    type = (::g::Fuse::Physics::ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.ExitedForceField", options);
    type->fp_build_ = ExitedForceField_build;
    type->fp_ctor_ = (void*)ExitedForceField__New2_fn;
    type->fp_SetForce = (void(*)(::g::Fuse::Physics::ForceFieldTrigger*, ::g::Fuse::Physics::Body*, float*))ExitedForceField__SetForce_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ExitedForceField() :114
void ExitedForceField__ctor_7_fn(ExitedForceField* __this)
{
    __this->ctor_7();
}

// public generated ExitedForceField New() :114
void ExitedForceField__New2_fn(ExitedForceField** __retval)
{
    *__retval = ExitedForceField::New2();
}

// internal override sealed void SetForce(Fuse.Physics.Body body, float force) :120
void ExitedForceField__SetForce_fn(ExitedForceField* __this, ::g::Fuse::Physics::Body* body, float* force)
{
    uStackFrame __("Fuse.Physics.ExitedForceField", "SetForce(Fuse.Physics.Body,float)");
    float force_ = *force;

    if ((__this->_oldForce > __this->Threshold()) && (force_ <= __this->Threshold()))
        __this->OnTriggered(body);

    __this->_oldForce = force_;
}

// public generated float get_Threshold() :116
void ExitedForceField__get_Threshold_fn(ExitedForceField* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public generated void set_Threshold(float value) :116
void ExitedForceField__set_Threshold_fn(ExitedForceField* __this, float* value)
{
    __this->Threshold(*value);
}

// public generated ExitedForceField() [instance] :114
void ExitedForceField::ctor_7()
{
    ctor_6();
}

// public generated float get_Threshold() [instance] :116
float ExitedForceField::Threshold()
{
    return _Threshold;
}

// public generated void set_Threshold(float value) [instance] :116
void ExitedForceField::Threshold(float value)
{
    _Threshold = value;
}

// public generated ExitedForceField New() [static] :114
ExitedForceField* ExitedForceField::New2()
{
    ExitedForceField* obj1 = (ExitedForceField*)uNew(ExitedForceField_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/ForceField.uno
// ---------------------------------------------------------------

// public abstract class ForceField :4
// {
static void ForceField_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Physics::World_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ForceField_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(ForceField_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(ForceField_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(ForceField_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(ForceField_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ForceField_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ForceField_type, interface6),
        ::g::Fuse::Physics::IRule_typeof(), offsetof(ForceField_type, interface7));
    type->SetFields(18,
        ::g::Fuse::Physics::World_typeof(), offsetof(ForceField, _world), 0);
}

ForceField_type* ForceField_typeof()
{
    static uSStrong<ForceField_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ForceField);
    options.TypeSize = sizeof(ForceField_type);
    type = (ForceField_type*)uClassType::New("Fuse.Physics.ForceField", options);
    type->fp_build_ = ForceField_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ForceField__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ForceField__OnUnrooted_fn;
    type->interface7.fp_Update = (void(*)(uObject*, double*, ::g::Fuse::Physics::World*))ForceField__FusePhysicsIRuleUpdate_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated ForceField() :4
void ForceField__ctor_3_fn(ForceField* __this)
{
    __this->ctor_3();
}

// private void Fuse.Physics.IRule.Update(double deltaTime, Fuse.Physics.World world) :26
void ForceField__FusePhysicsIRuleUpdate_fn(ForceField* __this, double* deltaTime, ::g::Fuse::Physics::World* world)
{
    uStackFrame __("Fuse.Physics.ForceField", "Fuse.Physics.IRule.Update(double,Fuse.Physics.World)");
    double deltaTime_ = *deltaTime;
    __this->OnUpdate(deltaTime_, world);
}

// protected override sealed void OnRooted() :10
void ForceField__OnRooted_fn(ForceField* __this)
{
    uStackFrame __("Fuse.Physics.ForceField", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_world = ::g::Fuse::Physics::World::FindWorld(__this->Parent());
    uPtr(__this->_world)->AddRule((uObject*)__this);
}

// protected override sealed void OnUnrooted() :19
void ForceField__OnUnrooted_fn(ForceField* __this)
{
    uStackFrame __("Fuse.Physics.ForceField", "OnUnrooted()");
    uPtr(__this->_world)->RemoveRule((uObject*)__this);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Physics.World get_World() :8
void ForceField__get_World_fn(ForceField* __this, ::g::Fuse::Physics::World** __retval)
{
    *__retval = __this->World();
}

// protected generated ForceField() [instance] :4
void ForceField::ctor_3()
{
    ctor_2();
}

// internal Fuse.Physics.World get_World() [instance] :8
::g::Fuse::Physics::World* ForceField::World()
{
    return _world;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/ForceFieldTriggers.uno
// -----------------------------------------------------------------------

// public sealed class ForceFieldEventArgs :22
// {
static void ForceFieldEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Physics::Body_typeof(), offsetof(ForceFieldEventArgs, _Body), 0,
        ::g::Fuse::Physics::ForceField_typeof(), offsetof(ForceFieldEventArgs, _ForceField), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Visual", NULL, (void*)ForceFieldEventArgs__get_Visual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0));
}

uType* ForceFieldEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ForceFieldEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Physics.ForceFieldEventArgs", options);
    type->fp_build_ = ForceFieldEventArgs_build;
    return type;
}

// internal ForceFieldEventArgs(Fuse.Physics.Body body, Fuse.Physics.ForceField field) :29
void ForceFieldEventArgs__ctor_1_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field)
{
    __this->ctor_1(body, field);
}

// internal generated Fuse.Physics.Body get_Body() :24
void ForceFieldEventArgs__get_Body_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body** __retval)
{
    *__retval = __this->Body();
}

// private generated void set_Body(Fuse.Physics.Body value) :24
void ForceFieldEventArgs__set_Body_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body* value)
{
    __this->Body(value);
}

// internal generated Fuse.Physics.ForceField get_ForceField() :25
void ForceFieldEventArgs__get_ForceField_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::ForceField** __retval)
{
    *__retval = __this->ForceField();
}

// private generated void set_ForceField(Fuse.Physics.ForceField value) :25
void ForceFieldEventArgs__set_ForceField_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::ForceField* value)
{
    __this->ForceField(value);
}

// internal ForceFieldEventArgs New(Fuse.Physics.Body body, Fuse.Physics.ForceField field) :29
void ForceFieldEventArgs__New2_fn(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field, ForceFieldEventArgs** __retval)
{
    *__retval = ForceFieldEventArgs::New2(body, field);
}

// public Fuse.Visual get_Visual() :27
void ForceFieldEventArgs__get_Visual_fn(ForceFieldEventArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// internal ForceFieldEventArgs(Fuse.Physics.Body body, Fuse.Physics.ForceField field) [instance] :29
void ForceFieldEventArgs::ctor_1(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field)
{
    ctor_();
    Body(body);
    ForceField(field);
}

// internal generated Fuse.Physics.Body get_Body() [instance] :24
::g::Fuse::Physics::Body* ForceFieldEventArgs::Body()
{
    return _Body;
}

// private generated void set_Body(Fuse.Physics.Body value) [instance] :24
void ForceFieldEventArgs::Body(::g::Fuse::Physics::Body* value)
{
    _Body = value;
}

// internal generated Fuse.Physics.ForceField get_ForceField() [instance] :25
::g::Fuse::Physics::ForceField* ForceFieldEventArgs::ForceField()
{
    return _ForceField;
}

// private generated void set_ForceField(Fuse.Physics.ForceField value) [instance] :25
void ForceFieldEventArgs::ForceField(::g::Fuse::Physics::ForceField* value)
{
    _ForceField = value;
}

// public Fuse.Visual get_Visual() [instance] :27
::g::Fuse::Visual* ForceFieldEventArgs::Visual()
{
    uStackFrame __("Fuse.Physics.ForceFieldEventArgs", "get_Visual()");
    return uPtr(Body())->Visual;
}

// internal ForceFieldEventArgs New(Fuse.Physics.Body body, Fuse.Physics.ForceField field) [static] :29
ForceFieldEventArgs* ForceFieldEventArgs::New2(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field)
{
    ForceFieldEventArgs* obj1 = (ForceFieldEventArgs*)uNew(ForceFieldEventArgs_typeof());
    obj1->ctor_1(body, field);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/ForceFieldTriggers.uno
// -----------------------------------------------------------------------

// public delegate void ForceFieldEventHandler(object sender, Fuse.Physics.ForceFieldEventArgs args) :36
uDelegateType* ForceFieldEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Physics.ForceFieldEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Physics::ForceFieldEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/ForceFieldTriggers.uno
// -----------------------------------------------------------------------

// public abstract class ForceFieldEventTrigger :38
// {
static void ForceFieldEventTrigger_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Physics::ForceFieldEventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface8));
    type->SetFields(40,
        ::TYPES[6/*Fuse.Physics.ForceFieldEventHandler*/], offsetof(ForceFieldEventTrigger, Handler1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("add_Handler", NULL, (void*)ForceFieldEventTrigger__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*Fuse.Physics.ForceFieldEventHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)ForceFieldEventTrigger__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*Fuse.Physics.ForceFieldEventHandler*/]));
}

::g::Fuse::Physics::ForceFieldTrigger_type* ForceFieldEventTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Physics::ForceFieldTrigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(ForceFieldEventTrigger);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceFieldTrigger_type);
    type = (::g::Fuse::Physics::ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.ForceFieldEventTrigger", options);
    type->fp_build_ = ForceFieldEventTrigger_build;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated ForceFieldEventTrigger() :38
void ForceFieldEventTrigger__ctor_6_fn(ForceFieldEventTrigger* __this)
{
    __this->ctor_6();
}

// public generated void add_Handler(Fuse.Physics.ForceFieldEventHandler value) :40
void ForceFieldEventTrigger__add_Handler_fn(ForceFieldEventTrigger* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Physics.ForceFieldEventHandler value) :40
void ForceFieldEventTrigger__remove_Handler_fn(ForceFieldEventTrigger* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// internal void OnTriggered(Fuse.Physics.Body body) :42
void ForceFieldEventTrigger__OnTriggered_fn(ForceFieldEventTrigger* __this, ::g::Fuse::Physics::Body* body)
{
    __this->OnTriggered(body);
}

// protected generated ForceFieldEventTrigger() [instance] :38
void ForceFieldEventTrigger::ctor_6()
{
    ctor_5();
}

// public generated void add_Handler(Fuse.Physics.ForceFieldEventHandler value) [instance] :40
void ForceFieldEventTrigger::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Physics.ForceFieldEventTrigger", "add_Handler(Fuse.Physics.ForceFieldEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[6/*Fuse.Physics.ForceFieldEventHandler*/]);
}

// public generated void remove_Handler(Fuse.Physics.ForceFieldEventHandler value) [instance] :40
void ForceFieldEventTrigger::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Physics.ForceFieldEventTrigger", "remove_Handler(Fuse.Physics.ForceFieldEventHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[6/*Fuse.Physics.ForceFieldEventHandler*/]);
}

// internal void OnTriggered(Fuse.Physics.Body body) [instance] :42
void ForceFieldEventTrigger::OnTriggered(::g::Fuse::Physics::Body* body)
{
    uStackFrame __("Fuse.Physics.ForceFieldEventTrigger", "OnTriggered(Fuse.Physics.Body)");
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
    {
        ::g::Fuse::Physics::ForceFieldEventArgs* args = ::g::Fuse::Physics::ForceFieldEventArgs::New2(body, ForceField());
        uPtr(Handler1)->Invoke(2, this, args);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/ForceFieldTriggers.uno
// -----------------------------------------------------------------------

// public abstract class ForceFieldTrigger :6
// {
static void ForceFieldTrigger_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Physics.ForceFieldTrigger>*/, type, NULL);
    ::TYPES[8] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Physics.ForceFieldTrigger>*/, type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ForceFieldTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(ForceFieldTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(ForceFieldTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(ForceFieldTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(ForceFieldTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ForceFieldTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ForceFieldTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(ForceFieldTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(ForceFieldTrigger_type, interface8));
    type->SetFields(39,
        ::g::Fuse::Physics::ForceField_typeof(), offsetof(ForceFieldTrigger, _ForceField), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_ForceField", NULL, (void*)ForceFieldTrigger__get_ForceField_fn, 0, false, ::g::Fuse::Physics::ForceField_typeof(), 0),
        new uFunction("set_ForceField", NULL, (void*)ForceFieldTrigger__set_ForceField_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Physics::ForceField_typeof()));
}

ForceFieldTrigger_type* ForceFieldTrigger_typeof()
{
    static uSStrong<ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(ForceFieldTrigger);
    options.TypeSize = sizeof(ForceFieldTrigger_type);
    type = (ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.ForceFieldTrigger", options);
    type->fp_build_ = ForceFieldTrigger_build;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated ForceFieldTrigger() :6
void ForceFieldTrigger__ctor_5_fn(ForceFieldTrigger* __this)
{
    __this->ctor_5();
}

// public generated Fuse.Physics.ForceField get_ForceField() :8
void ForceFieldTrigger__get_ForceField_fn(ForceFieldTrigger* __this, ::g::Fuse::Physics::ForceField** __retval)
{
    *__retval = __this->ForceField();
}

// public generated void set_ForceField(Fuse.Physics.ForceField value) :8
void ForceFieldTrigger__set_ForceField_fn(ForceFieldTrigger* __this, ::g::Fuse::Physics::ForceField* value)
{
    __this->ForceField(value);
}

// internal static void SetForce(Fuse.Physics.ForceField field, Fuse.Physics.Body body, float force) :10
void ForceFieldTrigger__SetForce1_fn(::g::Fuse::Physics::ForceField* field, ::g::Fuse::Physics::Body* body, float* force)
{
    ForceFieldTrigger::SetForce1(field, body, *force);
}

// protected generated ForceFieldTrigger() [instance] :6
void ForceFieldTrigger::ctor_5()
{
    ctor_4();
}

// public generated Fuse.Physics.ForceField get_ForceField() [instance] :8
::g::Fuse::Physics::ForceField* ForceFieldTrigger::ForceField()
{
    return _ForceField;
}

// public generated void set_ForceField(Fuse.Physics.ForceField value) [instance] :8
void ForceFieldTrigger::ForceField(::g::Fuse::Physics::ForceField* value)
{
    _ForceField = value;
}

// internal static void SetForce(Fuse.Physics.ForceField field, Fuse.Physics.Body body, float force) [static] :10
void ForceFieldTrigger::SetForce1(::g::Fuse::Physics::ForceField* field, ::g::Fuse::Physics::Body* body, float force)
{
    uStackFrame __("Fuse.Physics.ForceFieldTrigger", "SetForce(Fuse.Physics.ForceField,Fuse.Physics.Body,float)");

    for (ForceFieldTrigger* fft = (ForceFieldTrigger*)uPtr(uPtr(body)->Visual)->FirstChild(::TYPES[7/*Fuse.Visual.FirstChild<Fuse.Physics.ForceFieldTrigger>*/]); fft != NULL; fft = (ForceFieldTrigger*)uPtr(fft)->NextSibling(::TYPES[8/*Fuse.Node.NextSibling<Fuse.Physics.ForceFieldTrigger>*/]))
        if (uPtr(fft)->ForceField() == field)
            uPtr(fft)->SetForce(body, force);
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/ForceFieldTriggers.uno
// -----------------------------------------------------------------------

// public sealed class InForceFieldAnimation :156
// {
static void InForceFieldAnimation_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Physics::ForceFieldTrigger_type, interface8));
    type->SetFields(40,
        ::g::Uno::Float_typeof(), offsetof(InForceFieldAnimation, _From), 0,
        ::g::Uno::Float_typeof(), offsetof(InForceFieldAnimation, _To), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_From", NULL, (void*)InForceFieldAnimation__get_From_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_From", NULL, (void*)InForceFieldAnimation__set_From_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)InForceFieldAnimation__New2_fn, 0, true, type, 0),
        new uFunction("get_To", NULL, (void*)InForceFieldAnimation__get_To_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_To", NULL, (void*)InForceFieldAnimation__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Physics::ForceFieldTrigger_type* InForceFieldAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceFieldTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Physics::ForceFieldTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(InForceFieldAnimation);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceFieldTrigger_type);
    type = (::g::Fuse::Physics::ForceFieldTrigger_type*)uClassType::New("Fuse.Physics.InForceFieldAnimation", options);
    type->fp_build_ = InForceFieldAnimation_build;
    type->fp_ctor_ = (void*)InForceFieldAnimation__New2_fn;
    type->fp_SetForce = (void(*)(::g::Fuse::Physics::ForceFieldTrigger*, ::g::Fuse::Physics::Body*, float*))InForceFieldAnimation__SetForce_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public InForceFieldAnimation() :167
void InForceFieldAnimation__ctor_6_fn(InForceFieldAnimation* __this)
{
    __this->ctor_6();
}

// public generated float get_From() :161
void InForceFieldAnimation__get_From_fn(InForceFieldAnimation* __this, float* __retval)
{
    *__retval = __this->From();
}

// public generated void set_From(float value) :161
void InForceFieldAnimation__set_From_fn(InForceFieldAnimation* __this, float* value)
{
    __this->From(*value);
}

// public InForceFieldAnimation New() :167
void InForceFieldAnimation__New2_fn(InForceFieldAnimation** __retval)
{
    *__retval = InForceFieldAnimation::New2();
}

// internal override sealed void SetForce(Fuse.Physics.Body body, float force) :173
void InForceFieldAnimation__SetForce_fn(InForceFieldAnimation* __this, ::g::Fuse::Physics::Body* body, float* force)
{
    uStackFrame __("Fuse.Physics.InForceFieldAnimation", "SetForce(Fuse.Physics.Body,float)");
    float force_ = *force;
    float f = ::g::Uno::Math::Clamp1((force_ - __this->From()) / (__this->To() - __this->From()), 0.0f, 1.0f);
    __this->Seek((double)f, 0);
}

// public generated float get_To() :165
void InForceFieldAnimation__get_To_fn(InForceFieldAnimation* __this, float* __retval)
{
    *__retval = __this->To();
}

// public generated void set_To(float value) :165
void InForceFieldAnimation__set_To_fn(InForceFieldAnimation* __this, float* value)
{
    __this->To(*value);
}

// public InForceFieldAnimation() [instance] :167
void InForceFieldAnimation::ctor_6()
{
    ctor_5();
    From(0.0f);
    To(1.0f);
}

// public generated float get_From() [instance] :161
float InForceFieldAnimation::From()
{
    return _From;
}

// public generated void set_From(float value) [instance] :161
void InForceFieldAnimation::From(float value)
{
    _From = value;
}

// public generated float get_To() [instance] :165
float InForceFieldAnimation::To()
{
    return _To;
}

// public generated void set_To(float value) [instance] :165
void InForceFieldAnimation::To(float value)
{
    _To = value;
}

// public InForceFieldAnimation New() [static] :167
InForceFieldAnimation* InForceFieldAnimation::New2()
{
    InForceFieldAnimation* obj1 = (InForceFieldAnimation*)uNew(InForceFieldAnimation_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/World.uno
// ----------------------------------------------------------

// internal abstract interface IRule :6
// {
uInterfaceType* IRule_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Physics.IRule", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/PointAttractor.uno
// -------------------------------------------------------------------

// public sealed class PointAttractor :8
// {
static void PointAttractor_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[11] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::IDisposable_typeof();
    ::TYPES[13] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Physics::Body_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceField_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Physics::ForceField_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Physics::ForceField_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Physics::ForceField_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Physics::ForceField_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceField_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Physics::ForceField_type, interface6),
        ::g::Fuse::Physics::IRule_typeof(), offsetof(::g::Fuse::Physics::ForceField_type, interface7));
    type->SetFields(19,
        ::g::Uno::Float3_typeof(), offsetof(PointAttractor, _offset), 0,
        ::g::Uno::Float_typeof(), offsetof(PointAttractor, _radius), 0,
        ::g::Uno::Float_typeof(), offsetof(PointAttractor, _strength), 0,
        ::g::Uno::Bool_typeof(), offsetof(PointAttractor, _Exclusive), 0,
        ::g::Uno::String_typeof(), offsetof(PointAttractor, _Tag), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Exclusive", NULL, (void*)PointAttractor__get_Exclusive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Exclusive", NULL, (void*)PointAttractor__set_Exclusive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)PointAttractor__New2_fn, 0, true, type, 0),
        new uFunction("get_Offset", NULL, (void*)PointAttractor__get_Offset_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)PointAttractor__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_Radius", NULL, (void*)PointAttractor__get_Radius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Radius", NULL, (void*)PointAttractor__set_Radius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Strength", NULL, (void*)PointAttractor__get_Strength_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Strength", NULL, (void*)PointAttractor__set_Strength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Tag", NULL, (void*)PointAttractor__get_Tag_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Tag", NULL, (void*)PointAttractor__set_Tag_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Physics::ForceField_type* PointAttractor_typeof()
{
    static uSStrong< ::g::Fuse::Physics::ForceField_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Physics::ForceField_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PointAttractor);
    options.TypeSize = sizeof(::g::Fuse::Physics::ForceField_type);
    type = (::g::Fuse::Physics::ForceField_type*)uClassType::New("Fuse.Physics.PointAttractor", options);
    type->fp_build_ = PointAttractor_build;
    type->fp_ctor_ = (void*)PointAttractor__New2_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Physics::ForceField*, double*, ::g::Fuse::Physics::World*))PointAttractor__OnUpdate_fn;
    type->interface7.fp_Update = (void(*)(uObject*, double*, ::g::Fuse::Physics::World*))::g::Fuse::Physics::ForceField__FusePhysicsIRuleUpdate_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated PointAttractor() :8
void PointAttractor__ctor_4_fn(PointAttractor* __this)
{
    __this->ctor_4();
}

// private bool AnyStrongerForce(Fuse.Physics.Body b, float force, Fuse.Physics.World w) :49
void PointAttractor__AnyStrongerForce_fn(PointAttractor* __this, ::g::Fuse::Physics::Body* b, float* force, ::g::Fuse::Physics::World* w, bool* __retval)
{
    *__retval = __this->AnyStrongerForce(b, *force, w);
}

// private float CalcForce(Fuse.Physics.Body b) :43
void PointAttractor__CalcForce_fn(PointAttractor* __this, ::g::Fuse::Physics::Body* b, float* __retval)
{
    *__retval = __this->CalcForce(b);
}

// private float Curve(float x) :67
void PointAttractor__Curve_fn(PointAttractor* __this, float* x, float* __retval)
{
    *__retval = __this->Curve(*x);
}

// private float3 DirectionTo(Fuse.Physics.Body b) :38
void PointAttractor__DirectionTo_fn(PointAttractor* __this, ::g::Fuse::Physics::Body* b, ::g::Uno::Float3* __retval)
{
    *__retval = __this->DirectionTo(b);
}

// public generated bool get_Exclusive() :36
void PointAttractor__get_Exclusive_fn(PointAttractor* __this, bool* __retval)
{
    *__retval = __this->Exclusive();
}

// public generated void set_Exclusive(bool value) :36
void PointAttractor__set_Exclusive_fn(PointAttractor* __this, bool* value)
{
    __this->Exclusive(*value);
}

// public generated PointAttractor New() :8
void PointAttractor__New2_fn(PointAttractor** __retval)
{
    *__retval = PointAttractor::New2();
}

// public float3 get_Offset() :13
void PointAttractor__get_Offset_fn(PointAttractor* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float3 value) :14
void PointAttractor__set_Offset_fn(PointAttractor* __this, ::g::Uno::Float3* value)
{
    __this->Offset(*value);
}

// protected override sealed void OnUpdate(double deltaTime, Fuse.Physics.World world) :72
void PointAttractor__OnUpdate_fn(PointAttractor* __this, double* deltaTime, ::g::Fuse::Physics::World* world)
{
    uStackFrame __("Fuse.Physics.PointAttractor", "OnUpdate(double,Fuse.Physics.World)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Physics::Body*> > ret6;
    double deltaTime_ = *deltaTime;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Physics::Body*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(__this->World())->Bodies()), &ret6), ret6);

    {
        try
        {
            {
                while (enum2.MoveNext(::TYPES[13/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]))
                {
                    ::g::Fuse::Physics::Body* b = enum2.Current(::TYPES[13/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]);

                    if (uPtr(b)->Visual == __this->Parent())
                        continue;

                    float force = __this->CalcForce(b);
                    ::g::Fuse::Physics::ForceFieldTrigger::SetForce1(__this, b, force);

                    if (force == 0.0f)
                        continue;

                    if (__this->Exclusive())
                    {
                        if (__this->AnyStrongerForce(b, force, world))
                            continue;
                    }

                    ::g::Uno::Float3 dir = __this->DirectionTo(b);
                    float dist = ::g::Uno::Vector::Length1(dir);

                    if (dist < 0.5f)
                    {
                        enum2.Dispose(::TYPES[13/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]);
                        return;
                    }

                    dir = ::g::Uno::Float3__op_Division1(dir, dist);
                    dir = ::g::Uno::Float3__op_Multiply1(dir, (__this->Curve(force) * 50.0f) * __this->_strength);
                    ::g::Uno::Float3 f = ::g::Uno::Float3__op_Multiply1(dir, (float)deltaTime_);
                    uPtr(b)->ApplyForce(f);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::TYPES[13/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum2.Dispose(::TYPES[13/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]);
        }
        __after_finally_0:;
    }
}

// public float get_Radius() :20
void PointAttractor__get_Radius_fn(PointAttractor* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value) :21
void PointAttractor__set_Radius_fn(PointAttractor* __this, float* value)
{
    __this->Radius(*value);
}

// public float get_Strength() :27
void PointAttractor__get_Strength_fn(PointAttractor* __this, float* __retval)
{
    *__retval = __this->Strength();
}

// public void set_Strength(float value) :28
void PointAttractor__set_Strength_fn(PointAttractor* __this, float* value)
{
    __this->Strength(*value);
}

// public generated string get_Tag() :65
void PointAttractor__get_Tag_fn(PointAttractor* __this, uString** __retval)
{
    *__retval = __this->Tag();
}

// public generated void set_Tag(string value) :65
void PointAttractor__set_Tag_fn(PointAttractor* __this, uString* value)
{
    __this->Tag(value);
}

// private float3 get_TargetPoint() :33
void PointAttractor__get_TargetPoint_fn(PointAttractor* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->TargetPoint();
}

// public generated PointAttractor() [instance] :8
void PointAttractor::ctor_4()
{
    _radius = 100.0f;
    _strength = 100.0f;
    ctor_3();
}

// private bool AnyStrongerForce(Fuse.Physics.Body b, float force, Fuse.Physics.World w) [instance] :49
bool PointAttractor::AnyStrongerForce(::g::Fuse::Physics::Body* b, float force, ::g::Fuse::Physics::World* w)
{
    uStackFrame __("Fuse.Physics.PointAttractor", "AnyStrongerForce(Fuse.Physics.Body,float,Fuse.Physics.World)");
    uObject* ret5;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(w)->Rules()), ::TYPES[9/*Uno.Collections.IEnumerable<Fuse.Physics.IRule>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[10/*Uno.Collections.IEnumerator*/])))
                {
                    uObject* r = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[11/*Uno.Collections.IEnumerator<Fuse.Physics.IRule>*/]), &ret5), ret5);

                    if (r == this)
                        continue;

                    PointAttractor* pa = uAs<PointAttractor*>(r, __type);

                    if (pa != NULL)
                    {
                        if (uPtr(pa)->CalcForce(b) > force)
                        {
                            bool __uno_retval = true;
                            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[12/*Uno.IDisposable*/]));
                            return __uno_retval;
                        }
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[12/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[12/*Uno.IDisposable*/]));
        }
        __after_finally_1:;
    }

    return false;
}

// private float CalcForce(Fuse.Physics.Body b) [instance] :43
float PointAttractor::CalcForce(::g::Fuse::Physics::Body* b)
{
    uStackFrame __("Fuse.Physics.PointAttractor", "CalcForce(Fuse.Physics.Body)");
    float dist = ::g::Uno::Vector::Length1(DirectionTo(b));
    return ::g::Uno::Math::Max1(_radius - dist, 0.0f) / _radius;
}

// private float Curve(float x) [instance] :67
float PointAttractor::Curve(float x)
{
    return (float)::g::Uno::Math::Sin((double)(x * x) * 3.1415926535897931);
}

// private float3 DirectionTo(Fuse.Physics.Body b) [instance] :38
::g::Uno::Float3 PointAttractor::DirectionTo(::g::Fuse::Physics::Body* b)
{
    uStackFrame __("Fuse.Physics.PointAttractor", "DirectionTo(Fuse.Physics.Body)");
    return ::g::Uno::Float3__op_Subtraction2(TargetPoint(), uPtr(b)->CenterPosition());
}

// public generated bool get_Exclusive() [instance] :36
bool PointAttractor::Exclusive()
{
    return _Exclusive;
}

// public generated void set_Exclusive(bool value) [instance] :36
void PointAttractor::Exclusive(bool value)
{
    _Exclusive = value;
}

// public float3 get_Offset() [instance] :13
::g::Uno::Float3 PointAttractor::Offset()
{
    return _offset;
}

// public void set_Offset(float3 value) [instance] :14
void PointAttractor::Offset(::g::Uno::Float3 value)
{
    _offset = value;
}

// public float get_Radius() [instance] :20
float PointAttractor::Radius()
{
    return _radius;
}

// public void set_Radius(float value) [instance] :21
void PointAttractor::Radius(float value)
{
    _radius = value;
}

// public float get_Strength() [instance] :27
float PointAttractor::Strength()
{
    return _strength;
}

// public void set_Strength(float value) [instance] :28
void PointAttractor::Strength(float value)
{
    _strength = value;
}

// public generated string get_Tag() [instance] :65
uString* PointAttractor::Tag()
{
    return _Tag;
}

// public generated void set_Tag(string value) [instance] :65
void PointAttractor::Tag(uString* value)
{
    _Tag = value;
}

// private float3 get_TargetPoint() [instance] :33
::g::Uno::Float3 PointAttractor::TargetPoint()
{
    uStackFrame __("Fuse.Physics.PointAttractor", "get_TargetPoint()");
    ::g::Uno::Float4 ind3;
    return ::g::Uno::Float3__op_Addition2((ind3 = ::g::Uno::Vector::Transform4(uPtr(Parent())->LocalBounds().Center(), uPtr(Parent())->WorldTransform()), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z)), Offset());
}

// public generated PointAttractor New() [static] :8
PointAttractor* PointAttractor::New2()
{
    PointAttractor* obj4 = (PointAttractor*)uNew(PointAttractor_typeof());
    obj4->ctor_4();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/Spring.uno
// -----------------------------------------------------------

// public sealed class Spring :7
// {
static void Spring_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Physics::Body_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Spring_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Spring_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Spring_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Spring_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Spring_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Spring_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Spring_type, interface6),
        ::g::Fuse::Physics::IRule_typeof(), offsetof(Spring_type, interface7));
    type->SetFields(18,
        ::g::Fuse::Visual_typeof(), offsetof(Spring, _target), 0,
        ::g::Fuse::Physics::Body_typeof(), offsetof(Spring, _targetBody), 0,
        ::g::Uno::Float_typeof(), offsetof(Spring, _length), 0,
        ::g::Uno::Float_typeof(), offsetof(Spring, _stiffness), 0,
        ::g::Fuse::Physics::Body_typeof(), offsetof(Spring, _body), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Length", NULL, (void*)Spring__get_Length_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Length", NULL, (void*)Spring__set_Length_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Spring__New2_fn, 0, true, type, 0),
        new uFunction("get_Stiffness", NULL, (void*)Spring__get_Stiffness_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Stiffness", NULL, (void*)Spring__set_Stiffness_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Target", NULL, (void*)Spring__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Spring__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

Spring_type* Spring_typeof()
{
    static uSStrong<Spring_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 8;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Spring);
    options.TypeSize = sizeof(Spring_type);
    type = (Spring_type*)uClassType::New("Fuse.Physics.Spring", options);
    type->fp_build_ = Spring_build;
    type->fp_ctor_ = (void*)Spring__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Spring__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Spring__OnUnrooted_fn;
    type->interface7.fp_Update = (void(*)(uObject*, double*, ::g::Fuse::Physics::World*))Spring__FusePhysicsIRuleUpdate_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Spring() :7
void Spring__ctor_3_fn(Spring* __this)
{
    __this->ctor_3();
}

// private void Fuse.Physics.IRule.Update(double deltaTime, Fuse.Physics.World world) :68
void Spring__FusePhysicsIRuleUpdate_fn(Spring* __this, double* deltaTime, ::g::Fuse::Physics::World* world)
{
    uStackFrame __("Fuse.Physics.Spring", "Fuse.Physics.IRule.Update(double,Fuse.Physics.World)");
    double deltaTime_ = *deltaTime;

    if ((__this->_body == NULL) || (__this->_targetBody == NULL))
        return;

    ::g::Uno::Float3 vec = ::g::Uno::Float3__op_Subtraction2(uPtr(__this->_body)->WorldPosition(), uPtr(__this->_targetBody)->WorldPosition());
    float dist = ::g::Uno::Vector::Length1(vec);

    if (::g::Uno::Math::Abs1(dist) < 0.001f)
        return;

    ::g::Uno::Float3 dir = ::g::Uno::Float3__op_Division1(vec, dist);
    ::g::Uno::Float3 force = ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1(dir, dist - __this->Length()), (float)deltaTime_), __this->_stiffness), 100.0f);
    uPtr(__this->_targetBody)->ApplyForce(force);
    uPtr(__this->_body)->ApplyForce(::g::Uno::Float3__op_Multiply1(force, -1.0f));
}

// public float get_Length() :30
void Spring__get_Length_fn(Spring* __this, float* __retval)
{
    *__retval = __this->Length();
}

// public void set_Length(float value) :31
void Spring__set_Length_fn(Spring* __this, float* value)
{
    __this->Length(*value);
}

// public generated Spring New() :7
void Spring__New2_fn(Spring** __retval)
{
    *__retval = Spring::New2();
}

// protected override sealed void OnRooted() :43
void Spring__OnRooted_fn(Spring* __this)
{
    uStackFrame __("Fuse.Physics.Spring", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_body = ::g::Fuse::Physics::Body::Pin(__this->Parent());
    uPtr(uPtr(__this->_body)->World)->AddRule((uObject*)__this);

    if (__this->_target != NULL)
        __this->_targetBody = ::g::Fuse::Physics::Body::Pin(__this->_target);
}

// protected override sealed void OnUnrooted() :52
void Spring__OnUnrooted_fn(Spring* __this)
{
    uStackFrame __("Fuse.Physics.Spring", "OnUnrooted()");
    uPtr(uPtr(__this->_body)->World)->RemoveRule((uObject*)__this);
    uPtr(__this->_body)->Unpin();
    __this->_body = NULL;

    if (__this->_targetBody != NULL)
    {
        uPtr(__this->_targetBody)->Unpin();
        __this->_targetBody = NULL;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public float get_Stiffness() :37
void Spring__get_Stiffness_fn(Spring* __this, float* __retval)
{
    *__retval = __this->Stiffness();
}

// public void set_Stiffness(float value) :38
void Spring__set_Stiffness_fn(Spring* __this, float* value)
{
    __this->Stiffness(*value);
}

// public Fuse.Visual get_Target() :13
void Spring__get_Target_fn(Spring* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Visual value) :14
void Spring__set_Target_fn(Spring* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Spring() [instance] :7
void Spring::ctor_3()
{
    _length = 1.0f;
    _stiffness = 1.0f;
    ctor_2();
}

// public float get_Length() [instance] :30
float Spring::Length()
{
    return _length;
}

// public void set_Length(float value) [instance] :31
void Spring::Length(float value)
{
    _length = value;
}

// public float get_Stiffness() [instance] :37
float Spring::Stiffness()
{
    return _stiffness;
}

// public void set_Stiffness(float value) [instance] :38
void Spring::Stiffness(float value)
{
    _stiffness = value;
}

// public Fuse.Visual get_Target() [instance] :13
::g::Fuse::Visual* Spring::Target()
{
    return _target;
}

// public void set_Target(Fuse.Visual value) [instance] :14
void Spring::Target(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Physics.Spring", "set_Target(Fuse.Visual)");
    _target = value;

    if (_body != NULL)
    {
        if (_targetBody != NULL)
            uPtr(_targetBody)->Unpin();

        if (_target != NULL)
            _targetBody = ::g::Fuse::Physics::Body::Pin(_target);
        else
            _targetBody = NULL;
    }
}

// public generated Spring New() [static] :7
Spring* Spring::New2()
{
    Spring* obj1 = (Spring*)uNew(Spring_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/Draggable.uno
// --------------------------------------------------------------

// public sealed class WhileDragging :133
// {
static void WhileDragging_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Physics.WhileDragging>*/, type, NULL);
    ::TYPES[15] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Physics.WhileDragging>*/, type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(39);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileDragging__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhileDragging_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileDragging);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Physics.WhileDragging", options);
    type->fp_build_ = WhileDragging_build;
    type->fp_ctor_ = (void*)WhileDragging__New2_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileDragging() :133
void WhileDragging__ctor_5_fn(WhileDragging* __this)
{
    __this->ctor_5();
}

// internal static void Begin(Fuse.Visual n) :135
void WhileDragging__Begin_fn(::g::Fuse::Visual* n)
{
    WhileDragging::Begin(n);
}

// internal static void End(Fuse.Visual n) :141
void WhileDragging__End_fn(::g::Fuse::Visual* n)
{
    WhileDragging::End(n);
}

// public generated WhileDragging New() :133
void WhileDragging__New2_fn(WhileDragging** __retval)
{
    *__retval = WhileDragging::New2();
}

// public generated WhileDragging() [instance] :133
void WhileDragging::ctor_5()
{
    ctor_4();
}

// internal static void Begin(Fuse.Visual n) [static] :135
void WhileDragging::Begin(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Physics.WhileDragging", "Begin(Fuse.Visual)");

    for (WhileDragging* v = (WhileDragging*)uPtr(n)->FirstChild(::TYPES[14/*Fuse.Visual.FirstChild<Fuse.Physics.WhileDragging>*/]); v != NULL; v = (WhileDragging*)uPtr(v)->NextSibling(::TYPES[15/*Fuse.Node.NextSibling<Fuse.Physics.WhileDragging>*/]))
        uPtr(v)->Activate(NULL);
}

// internal static void End(Fuse.Visual n) [static] :141
void WhileDragging::End(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Physics.WhileDragging", "End(Fuse.Visual)");

    for (WhileDragging* v = (WhileDragging*)uPtr(n)->FirstChild(::TYPES[14/*Fuse.Visual.FirstChild<Fuse.Physics.WhileDragging>*/]); v != NULL; v = (WhileDragging*)uPtr(v)->NextSibling(::TYPES[15/*Fuse.Node.NextSibling<Fuse.Physics.WhileDragging>*/]))
        uPtr(v)->Deactivate();
}

// public generated WhileDragging New() [static] :133
WhileDragging* WhileDragging::New2()
{
    WhileDragging* obj1 = (WhileDragging*)uNew(WhileDragging_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Physics/1.9.0/World.uno
// ----------------------------------------------------------

// public sealed class World :13
// {
// static generated World() :13
static void World__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    World::_globalWorld_ = World::New1();
    World::_worldHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void World_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Physics::Body_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[18] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Physics::IRule_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Physics::IRule_typeof();
    ::TYPES[13] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Physics::Body_typeof(), NULL);
    ::TYPES[20] = ::g::Fuse::Physics::Body_typeof();
    type->SetDependencies(
        ::g::Fuse::Properties_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::TYPES[16/*Uno.Collections.List<Fuse.Physics.Body>*/], offsetof(World, _bodies), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(World, _bodyHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(World, _isSimulating), 0,
        ::TYPES[17/*Uno.Collections.List<Fuse.Physics.IRule>*/], offsetof(World, _rules), 0,
        ::g::Uno::Bool_typeof(), offsetof(World, _firstFrame), 0,
        type, (uintptr_t)&World::_globalWorld_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&World::_worldHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetIsPhysicsWorld", NULL, (void*)World__GetIsPhysicsWorld_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Rules", NULL, (void*)World__get_Rules_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[19/*Fuse.Physics.IRule*/], NULL), 0),
        new uFunction("SetIsPhysicsWorld", NULL, (void*)World__SetIsPhysicsWorld_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetIsPhysicsWorldStyle", NULL, (void*)World__SetIsPhysicsWorldStyle_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Bool_typeof()));
}

uType* World_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(World);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Physics.World", options);
    type->fp_build_ = World_build;
    type->fp_ctor_ = (void*)World__New1_fn;
    type->fp_cctor_ = World__cctor__fn;
    return type;
}

// private World() :15
void World__ctor__fn(World* __this)
{
    __this->ctor_();
}

// internal void AddRule(Fuse.Physics.IRule rule) :122
void World__AddRule_fn(World* __this, uObject* rule)
{
    __this->AddRule(rule);
}

// internal Uno.Collections.List<Fuse.Physics.Body> get_Bodies() :59
void World__get_Bodies_fn(World* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Bodies();
}

// private void EndSimulation() :112
void World__EndSimulation_fn(World* __this)
{
    __this->EndSimulation();
}

// private void EnsureSimulation() :105
void World__EnsureSimulation_fn(World* __this)
{
    __this->EnsureSimulation();
}

// internal static Fuse.Physics.World FindWorld(Fuse.Visual n) :47
void World__FindWorld_fn(::g::Fuse::Visual* n, World** __retval)
{
    *__retval = World::FindWorld(n);
}

// public static bool GetIsPhysicsWorld(Fuse.Visual n) :42
void World__GetIsPhysicsWorld_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = World::GetIsPhysicsWorld(n);
}

// private World New() :15
void World__New1_fn(World** __retval)
{
    *__retval = World::New1();
}

// private void OnUpdate() :134
void World__OnUpdate_fn(World* __this)
{
    __this->OnUpdate();
}

// internal Fuse.Physics.Body PinBody(Fuse.Visual node) :68
void World__PinBody_fn(World* __this, ::g::Fuse::Visual* node, ::g::Fuse::Physics::Body** __retval)
{
    *__retval = __this->PinBody(node);
}

// internal void RemoveRule(Fuse.Physics.IRule rule) :127
void World__RemoveRule_fn(World* __this, uObject* rule)
{
    __this->RemoveRule(rule);
}

// public Uno.Collections.IEnumerable<Fuse.Physics.IRule> get_Rules() :120
void World__get_Rules_fn(World* __this, uObject** __retval)
{
    *__retval = __this->Rules();
}

// public static void SetIsPhysicsWorld(Fuse.Visual n, bool isPhysicsWorld) :22
void World__SetIsPhysicsWorld_fn(::g::Fuse::Visual* n, bool* isPhysicsWorld)
{
    World::SetIsPhysicsWorld(n, *isPhysicsWorld);
}

// public static void SetIsPhysicsWorldStyle(Fuse.Visual n, bool isPhysicsWorld) :36
void World__SetIsPhysicsWorldStyle_fn(::g::Fuse::Visual* n, bool* isPhysicsWorld)
{
    World::SetIsPhysicsWorldStyle(n, *isPhysicsWorld);
}

// internal Fuse.Physics.Body TryGetBody(Fuse.Visual node) :63
void World__TryGetBody_fn(World* __this, ::g::Fuse::Visual* node, ::g::Fuse::Physics::Body** __retval)
{
    *__retval = __this->TryGetBody(node);
}

// internal void UnpinBody(Fuse.Physics.Body body) :86
void World__UnpinBody_fn(World* __this, ::g::Fuse::Physics::Body* body)
{
    __this->UnpinBody(body);
}

uSStrong<World*> World::_globalWorld_;
uSStrong< ::g::Fuse::PropertyHandle*> World::_worldHandle_;

// private World() [instance] :15
void World::ctor_()
{
    _bodies = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Fuse.Physics.Body>*/]));
    _bodyHandle = ::g::Fuse::Properties::CreateHandle();
    _rules = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<Fuse.Physics.IRule>*/]));
    _firstFrame = true;
}

// internal void AddRule(Fuse.Physics.IRule rule) [instance] :122
void World::AddRule(uObject* rule)
{
    uStackFrame __("Fuse.Physics.World", "AddRule(Fuse.Physics.IRule)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_rules), rule);
}

// internal Uno.Collections.List<Fuse.Physics.Body> get_Bodies() [instance] :59
::g::Uno::Collections::List* World::Bodies()
{
    return _bodies;
}

// private void EndSimulation() [instance] :112
void World::EndSimulation()
{
    uStackFrame __("Fuse.Physics.World", "EndSimulation()");
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)World__OnUpdate_fn, this), 0);
    _isSimulating = false;
}

// private void EnsureSimulation() [instance] :105
void World::EnsureSimulation()
{
    uStackFrame __("Fuse.Physics.World", "EnsureSimulation()");

    if (_isSimulating)
        return;

    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)World__OnUpdate_fn, this), 0);
    _isSimulating = true;
}

// private void OnUpdate() [instance] :134
void World::OnUpdate()
{
    uStackFrame __("Fuse.Physics.World", "OnUpdate()");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Physics::Body*> > ret5;

    if (_firstFrame)
    {
        _firstFrame = false;
        return;
    }

    double deltaTime = ::g::Fuse::Time::FrameInterval();
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_rules), &ret4), ret4);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Physics.IRule>.Enumerator*/]))
                {
                    uObject* r = enum1.Current(::TYPES[18/*Uno.Collections.List<Fuse.Physics.IRule>.Enumerator*/]);
                    ::g::Fuse::Physics::IRule::Update(uInterface(uPtr(r), ::TYPES[19/*Fuse.Physics.IRule*/]), deltaTime, this);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Physics.IRule>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            enum1.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Physics.IRule>.Enumerator*/]);
        }
        __after_finally_2:;
    }

    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Physics::Body*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_bodies), &ret5), ret5);

    {
        try
        {
            {
                while (enum2.MoveNext(::TYPES[13/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]))
                {
                    ::g::Fuse::Physics::Body* b = enum2.Current(::TYPES[13/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]);
                    uPtr(b)->Update(deltaTime);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::TYPES[13/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            enum2.Dispose(::TYPES[13/*Uno.Collections.List<Fuse.Physics.Body>.Enumerator*/]);
        }
        __after_finally_3:;
    }
}

// internal Fuse.Physics.Body PinBody(Fuse.Visual node) [instance] :68
::g::Fuse::Physics::Body* World::PinBody(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Physics.World", "PinBody(Fuse.Visual)");
    ::g::Fuse::Physics::Body* body = TryGetBody(node);

    if (body == NULL)
    {
        body = ::g::Fuse::Physics::Body::New1(this, node);
        uPtr(uPtr(node)->Properties())->Set(_bodyHandle, body);
        ::g::Uno::Collections::List__Add_fn(uPtr(_bodies), body);
    }

    uPtr(body)->PinCount++;
    EnsureSimulation();
    return body;
}

// internal void RemoveRule(Fuse.Physics.IRule rule) [instance] :127
void World::RemoveRule(uObject* rule)
{
    uStackFrame __("Fuse.Physics.World", "RemoveRule(Fuse.Physics.IRule)");
    bool ret6;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_rules), rule, &ret6);
}

// public Uno.Collections.IEnumerable<Fuse.Physics.IRule> get_Rules() [instance] :120
uObject* World::Rules()
{
    uStackFrame __("Fuse.Physics.World", "get_Rules()");
    return (uObject*)_rules;
}

// internal Fuse.Physics.Body TryGetBody(Fuse.Visual node) [instance] :63
::g::Fuse::Physics::Body* World::TryGetBody(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Physics.World", "TryGetBody(Fuse.Visual)");
    return uAs< ::g::Fuse::Physics::Body*>(uPtr(uPtr(node)->Properties())->Get(_bodyHandle), ::TYPES[20/*Fuse.Physics.Body*/]);
}

// internal void UnpinBody(Fuse.Physics.Body body) [instance] :86
void World::UnpinBody(::g::Fuse::Physics::Body* body)
{
    uStackFrame __("Fuse.Physics.World", "UnpinBody(Fuse.Physics.Body)");
    bool ret7;
    uPtr(body)->PinCount--;

    if (body->PinCount == 0)
    {
        uPtr(uPtr(uPtr(body)->Visual)->Properties())->Clear(_bodyHandle);
        ::g::Uno::Collections::List__Remove_fn(uPtr(_bodies), body, &ret7);
        body->Dispose();
    }

    if (uPtr(_bodies)->Count() == 0)
        EndSimulation();
}

// internal static Fuse.Physics.World FindWorld(Fuse.Visual n) [static] :47
World* World::FindWorld(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Physics.World", "FindWorld(Fuse.Visual)");
    World_typeof()->Init();
    World* w = uAs<World*>(uPtr(uPtr(n)->Properties())->Get(World::_worldHandle_), World_typeof());

    if (w != NULL)
        return w;

    if (n->Parent() != NULL)
        return World::FindWorld(uPtr(n)->Parent());

    return World::_globalWorld_;
}

// public static bool GetIsPhysicsWorld(Fuse.Visual n) [static] :42
bool World::GetIsPhysicsWorld(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Physics.World", "GetIsPhysicsWorld(Fuse.Visual)");
    World_typeof()->Init();
    return uPtr(uPtr(n)->Properties())->Get(World::_worldHandle_) != NULL;
}

// private World New() [static] :15
World* World::New1()
{
    World* obj3 = (World*)uNew(World_typeof());
    obj3->ctor_();
    return obj3;
}

// public static void SetIsPhysicsWorld(Fuse.Visual n, bool isPhysicsWorld) [static] :22
void World::SetIsPhysicsWorld(::g::Fuse::Visual* n, bool isPhysicsWorld)
{
    uStackFrame __("Fuse.Physics.World", "SetIsPhysicsWorld(Fuse.Visual,bool)");
    World_typeof()->Init();

    if (isPhysicsWorld)
    {
        if (uPtr(uPtr(n)->Properties())->Get(World::_worldHandle_) == NULL)
            uPtr(uPtr(n)->Properties())->Set(World::_worldHandle_, World::New1());
    }
    else
        uPtr(uPtr(n)->Properties())->Clear(World::_worldHandle_);
}

// public static void SetIsPhysicsWorldStyle(Fuse.Visual n, bool isPhysicsWorld) [static] :36
void World::SetIsPhysicsWorldStyle(::g::Fuse::Visual* n, bool isPhysicsWorld)
{
    uStackFrame __("Fuse.Physics.World", "SetIsPhysicsWorldStyle(Fuse.Visual,bool)");
    World_typeof()->Init();
    World::SetIsPhysicsWorld(n, isPhysicsWorld);
}
// }

}}} // ::g::Fuse::Physics
