// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseModels_bundle.h>
#include <Fuse.IRootVisualProvider.h>
#include <Fuse.Models.ModelJavaScript.h>
#include <Fuse.Models.ModelJavaScript.ModelData.h>
#include <Fuse.Models.ZoneJS.h>
#include <Fuse.Node.h>
#include <Fuse.PreviewState.h>
#include <Fuse.PreviewStateData.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.Dependency.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Reactive.Vector.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[1];

namespace g{
namespace Fuse{
namespace Models{

// /usr/local/share/uno/Packages/Fuse.Models/1.9.0/ModelJavaScript.uno
// -------------------------------------------------------------------

// private sealed class ModelJavaScript.ModelData :15
// {
static void ModelJavaScript__ModelData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ModelJavaScript__ModelData, ModulePath), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ModelJavaScript__ModelData, NameTable), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ModelJavaScript__ModelData, Arguments), 0,
        ::g::Uno::Bool_typeof(), offsetof(ModelJavaScript__ModelData, HasArguments), 0);
}

uType* ModelJavaScript__ModelData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ModelJavaScript__ModelData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Models.ModelJavaScript.ModelData", options);
    type->fp_build_ = ModelJavaScript__ModelData_build;
    type->fp_ctor_ = (void*)ModelJavaScript__ModelData__New1_fn;
    return type;
}

// public generated ModelData() :15
void ModelJavaScript__ModelData__ctor__fn(ModelJavaScript__ModelData* __this)
{
    __this->ctor_();
}

// public generated ModelData New() :15
void ModelJavaScript__ModelData__New1_fn(ModelJavaScript__ModelData** __retval)
{
    *__retval = ModelJavaScript__ModelData::New1();
}

// public generated ModelData() [instance] :15
void ModelJavaScript__ModelData::ctor_()
{
}

// public generated ModelData New() [static] :15
ModelJavaScript__ModelData* ModelJavaScript__ModelData::New1()
{
    ModelJavaScript__ModelData* obj1 = (ModelJavaScript__ModelData*)uNew(ModelJavaScript__ModelData_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Models/1.9.0/ModelJavaScript.uno
// -------------------------------------------------------------------

// public sealed class ModelJavaScript :13
// {
// static generated ModelJavaScript() :13
static void ModelJavaScript__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    ModelJavaScript::_modelHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void ModelJavaScript_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ModelJavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(ModelJavaScript_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(ModelJavaScript_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(ModelJavaScript_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(ModelJavaScript_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ModelJavaScript_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ModelJavaScript_type, interface6),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(ModelJavaScript_type, interface7),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(ModelJavaScript_type, interface8),
        ::g::Fuse::Node__ISiblingDataProvider_typeof(), offsetof(ModelJavaScript_type, interface9),
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(ModelJavaScript_type, interface10),
        ::g::Fuse::IPreviewStateSaver_typeof(), offsetof(ModelJavaScript_type, interface11));
    type->SetFields(26,
        ::g::Uno::String_typeof(), offsetof(ModelJavaScript, _previewStateModelId), 0,
        ::g::Uno::String_typeof(), offsetof(ModelJavaScript, _modulePath), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ModelJavaScript, _args), 0,
        ::g::Uno::Bool_typeof(), offsetof(ModelJavaScript, _hasArgs), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&ModelJavaScript::_modelHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("CreateFromPreviewState", NULL, (void*)ModelJavaScript__CreateFromPreviewState_fn, 0, true, type, 2, ::g::Fuse::Visual_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetModel", NULL, (void*)ModelJavaScript__GetModel_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetModelArgs", NULL, (void*)ModelJavaScript__GetModelArgs_fn, 0, true, ::g::Fuse::Reactive::IExpression_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetModelNameTable", NULL, (void*)ModelJavaScript__GetModelNameTable_fn, 0, true, ::g::Uno::UX::NameTable_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("SetAppModel", NULL, (void*)ModelJavaScript__SetAppModel_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::IRootVisualProvider_typeof(), ::g::Uno::String_typeof()),
        new uFunction("SetModel", NULL, (void*)ModelJavaScript__SetModel_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::String_typeof()),
        new uFunction("SetModelArgs", NULL, (void*)ModelJavaScript__SetModelArgs_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Reactive::IExpression_typeof()),
        new uFunction("SetModelNameTable", NULL, (void*)ModelJavaScript__SetModelNameTable_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::UX::NameTable_typeof()));
}

ModelJavaScript_type* ModelJavaScript_typeof()
{
    static uSStrong<ModelJavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::JavaScript_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 12;
    options.ObjectSize = sizeof(ModelJavaScript);
    options.TypeSize = sizeof(ModelJavaScript_type);
    type = (ModelJavaScript_type*)uClassType::New("Fuse.Models.ModelJavaScript", options);
    type->fp_build_ = ModelJavaScript_build;
    type->fp_cctor_ = ModelJavaScript__cctor_1_fn;
    type->fp_OnBeforeSubscribeToDependenciesAndDispatchEvaluate = (void(*)(::g::Fuse::Reactive::JavaScript*))ModelJavaScript__OnBeforeSubscribeToDependenciesAndDispatchEvaluate_fn;
    type->interface11.fp_Save = (void(*)(uObject*, ::g::Fuse::PreviewStateData*))ModelJavaScript__FuseIPreviewStateSaverSave_fn;
    type->interface10.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::JavaScript__FuseReactiveIContextSubscribe_fn;
    type->interface10.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::JavaScript__FuseReactiveIContextSubscribeResource_fn;
    type->interface7.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Reactive::JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface8.fp_NewValue = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface8.fp_LostValue = (void(*)(uObject*))::g::Fuse::Reactive::JavaScript__FuseReactiveValueForwarderIValueListenerLostValue_fn;
    type->interface9.fp_TryGetDataProvider = (void(*)(uObject*, int32_t*, uObject**, int32_t*))::g::Fuse::Reactive::JavaScript__FuseNodeISiblingDataProviderTryGetDataProvider_fn;
    type->interface10.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::JavaScript__FuseReactiveIContextget_Node_fn;
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

// private ModelJavaScript(Fuse.Models.ModelJavaScript.ModelData md, [string previewStateId]) :192
void ModelJavaScript__ctor_4_fn(ModelJavaScript* __this, ModelJavaScript__ModelData* md, uString* previewStateId)
{
    __this->ctor_4(md, previewStateId);
}

// public static Fuse.Models.ModelJavaScript CreateFromPreviewState(Fuse.Visual where, string modulePath) :162
void ModelJavaScript__CreateFromPreviewState_fn(::g::Fuse::Visual* where, uString* modulePath, ModelJavaScript** __retval)
{
    *__retval = ModelJavaScript::CreateFromPreviewState(where, modulePath);
}

// private void Dispose() :220
void ModelJavaScript__Dispose_fn(ModelJavaScript* __this)
{
    __this->Dispose();
}

// private void Fuse.IPreviewStateSaver.Save(Fuse.PreviewStateData data) :214
void ModelJavaScript__FuseIPreviewStateSaverSave_fn(ModelJavaScript* __this, ::g::Fuse::PreviewStateData* data)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "Fuse.IPreviewStateSaver.Save(Fuse.PreviewStateData)");
    __this->_preserveModuleInstance = true;
    uPtr(data)->Set(__this->_previewStateModelId, __this);
}

// private string GenerateArgsStringAndPopulateDependencies() :116
void ModelJavaScript__GenerateArgsStringAndPopulateDependencies_fn(ModelJavaScript* __this, uString** __retval)
{
    *__retval = __this->GenerateArgsStringAndPopulateDependencies();
}

// public static string GetModel(Fuse.Visual v) :34
void ModelJavaScript__GetModel_fn(::g::Fuse::Visual* v, uString** __retval)
{
    *__retval = ModelJavaScript::GetModel(v);
}

// public static Fuse.Reactive.IExpression GetModelArgs(Fuse.Visual v) :63
void ModelJavaScript__GetModelArgs_fn(::g::Fuse::Visual* v, uObject** __retval)
{
    *__retval = ModelJavaScript::GetModelArgs(v);
}

// public static Uno.UX.NameTable GetModelNameTable(Fuse.Visual v) :48
void ModelJavaScript__GetModelNameTable_fn(::g::Fuse::Visual* v, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = ModelJavaScript::GetModelNameTable(v);
}

// private static Fuse.Models.ModelJavaScript.ModelData GetOrCreateModelData(Fuse.Visual v) :79
void ModelJavaScript__GetOrCreateModelData_fn(::g::Fuse::Visual* v, ModelJavaScript__ModelData** __retval)
{
    *__retval = ModelJavaScript::GetOrCreateModelData(v);
}

// private ModelJavaScript New(Fuse.Models.ModelJavaScript.ModelData md, [string previewStateId]) :192
void ModelJavaScript__New3_fn(ModelJavaScript__ModelData* md, uString* previewStateId, ModelJavaScript** __retval)
{
    *__retval = ModelJavaScript::New3(md, previewStateId);
}

// protected override sealed void OnBeforeSubscribeToDependenciesAndDispatchEvaluate() :202
void ModelJavaScript__OnBeforeSubscribeToDependenciesAndDispatchEvaluate_fn(ModelJavaScript* __this)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "OnBeforeSubscribeToDependenciesAndDispatchEvaluate()");
    __this->SetupModel();

    if (::g::Uno::String::op_Inequality(__this->_previewStateModelId, NULL))
    {
        ::g::Fuse::PreviewState* previewState = ::g::Fuse::PreviewState::Find(__this);

        if (previewState != NULL)
            uPtr(previewState)->AddSaver((uObject*)__this);
    }
}

// private static void OnModelDataChanged(Fuse.Models.ModelJavaScript.ModelData md, Fuse.Visual v) :68
void ModelJavaScript__OnModelDataChanged_fn(ModelJavaScript__ModelData* md, ::g::Fuse::Visual* v)
{
    ModelJavaScript::OnModelDataChanged(md, v);
}

// public static void SetAppModel(Fuse.IRootVisualProvider rootVisualProvider, string modulePath) :92
void ModelJavaScript__SetAppModel_fn(uObject* rootVisualProvider, uString* modulePath)
{
    ModelJavaScript::SetAppModel(rootVisualProvider, modulePath);
}

// public static void SetModel(Fuse.Visual v, string modulePath) :26
void ModelJavaScript__SetModel_fn(::g::Fuse::Visual* v, uString* modulePath)
{
    ModelJavaScript::SetModel(v, modulePath);
}

// public static void SetModelArgs(Fuse.Visual v, Fuse.Reactive.IExpression args) :54
void ModelJavaScript__SetModelArgs_fn(::g::Fuse::Visual* v, uObject* args)
{
    ModelJavaScript::SetModelArgs(v, args);
}

// public static void SetModelNameTable(Fuse.Visual v, Uno.UX.NameTable nt) :40
void ModelJavaScript__SetModelNameTable_fn(::g::Fuse::Visual* v, ::g::Uno::UX::NameTable* nt)
{
    ModelJavaScript::SetModelNameTable(v, nt);
}

// private void SetupModel() :133
void ModelJavaScript__SetupModel_fn(ModelJavaScript* __this)
{
    __this->SetupModel();
}

// private static Fuse.Reactive.IExpression[] UnpackArgs(Fuse.Reactive.IExpression argsExpr) :100
void ModelJavaScript__UnpackArgs_fn(uObject* argsExpr, uArray** __retval)
{
    *__retval = ModelJavaScript::UnpackArgs(argsExpr);
}

uSStrong< ::g::Fuse::PropertyHandle*> ModelJavaScript::_modelHandle_;

// private ModelJavaScript(Fuse.Models.ModelJavaScript.ModelData md, [string previewStateId]) [instance] :192
void ModelJavaScript::ctor_4(ModelJavaScript__ModelData* md, uString* previewStateId)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", ".ctor(Fuse.Models.ModelJavaScript.ModelData,[string])");
    ctor_3(uPtr(md)->NameTable);
    _previewStateModelId = previewStateId;
    _modulePath = md->ModulePath;
    _args = md->Arguments;
    _hasArgs = md->HasArguments;
    FileName(uString::Const("(model-script)"));
}

// private void Dispose() [instance] :220
void ModelJavaScript::Dispose()
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "Dispose()");
    _preserveModuleInstance = false;
    DisposeModuleInstance();
}

// private string GenerateArgsStringAndPopulateDependencies() [instance] :116
uString* ModelJavaScript::GenerateArgsStringAndPopulateDependencies()
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "GenerateArgsStringAndPopulateDependencies()");
    uString* argsString = uString::Const("");

    if (!_hasArgs)
        return argsString;

    uArray* args = ModelJavaScript::UnpackArgs(_args);

    for (int32_t i = 0; i < uPtr(args)->Length(); ++i)
    {
        uString* depName = ::g::Uno::String::op_Addition1(uString::Const("__modelArg"), uBox<int32_t>(::g::Uno::Int_typeof(), i));
        argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(uString::Const(", "), depName));
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Dependencies()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::JavaScript__Dependency_typeof(), NULL)), ::g::Fuse::Reactive::JavaScript__Dependency::New1(depName, uPtr(args)->Strong<uObject*>(i)));
    }

    return argsString;
}

// private void SetupModel() [instance] :133
void ModelJavaScript::SetupModel()
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "SetupModel()");

    if (::g::Uno::String::op_Equality(_modulePath, NULL))
    {
        Code(::g::Uno::String::Empty());
        return;
    }

    ::g::Fuse::Models::ZoneJS::Initialize();
    uString* argsString = GenerateArgsStringAndPopulateDependencies();
    uString* code = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("var Model = require('FuseJS/Internal/Model');\n"
        "var ViewModelAdapter = require('FuseJS/Internal/ViewModelAdapter')\n"
        "var self = this;\n"
        "var modelClass = require('"), _modulePath), uString::Const("');\n"
        "")), uString::Const("if (!(modelClass instanceof Function) && 'default' in modelClass) { modelClass = modelClass.default }\n"
        "")), uString::Const("if (!(modelClass instanceof Function)) { throw new Error('\"")), _modulePath), uString::Const("\" does not export a class or function required to construct a Model'); }\n"
        "")), uString::Const("var modelInstance = Object.create(modelClass.prototype);\n"
        "")), uString::Const("module.exports = new Model(modelInstance, function() {\n"
        "")), uString::Const("    modelClass.call(modelInstance")), argsString), uString::Const(");\n"
        "")), uString::Const("    ViewModelAdapter.adaptView(self, module, modelInstance);\n"
        "")), uString::Const("    return modelInstance;\n"
        "")), uString::Const("});\n"
        ""));
    Code(code);
}

// public static Fuse.Models.ModelJavaScript CreateFromPreviewState(Fuse.Visual where, string modulePath) [static] :162
ModelJavaScript* ModelJavaScript::CreateFromPreviewState(::g::Fuse::Visual* where, uString* modulePath)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "CreateFromPreviewState(Fuse.Visual,string)");
    ModelJavaScript_typeof()->Init();
    ModelJavaScript__ModelData* collection1;
    uString* previewStateId = uString::Const("ModelJavaScript-App");
    ::g::Fuse::PreviewState* previewState = ::g::Fuse::PreviewState::Find(where);

    if ((previewState != NULL) && (uPtr(previewState)->Current() != NULL))
    {
        ModelJavaScript* previous = uAs<ModelJavaScript*>(uPtr(uPtr(previewState)->Current())->Consume(previewStateId), ModelJavaScript_typeof());

        if (previous != NULL)
        {
            if (::g::Uno::String::op_Equality(uPtr(previous)->_modulePath, modulePath))
                return previous;
            else
                uPtr(previous)->Dispose();
        }
    }

    collection1 = ModelJavaScript__ModelData::New1();
    uPtr(collection1)->ModulePath = modulePath;
    ModelJavaScript__ModelData* md = collection1;
    return ModelJavaScript::New3(md, previewStateId);
}

// public static string GetModel(Fuse.Visual v) [static] :34
uString* ModelJavaScript::GetModel(::g::Fuse::Visual* v)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "GetModel(Fuse.Visual)");
    ModelJavaScript_typeof()->Init();
    return uPtr(ModelJavaScript::GetOrCreateModelData(v))->ModulePath;
}

// public static Fuse.Reactive.IExpression GetModelArgs(Fuse.Visual v) [static] :63
uObject* ModelJavaScript::GetModelArgs(::g::Fuse::Visual* v)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "GetModelArgs(Fuse.Visual)");
    ModelJavaScript_typeof()->Init();
    return uPtr(ModelJavaScript::GetOrCreateModelData(v))->Arguments;
}

// public static Uno.UX.NameTable GetModelNameTable(Fuse.Visual v) [static] :48
::g::Uno::UX::NameTable* ModelJavaScript::GetModelNameTable(::g::Fuse::Visual* v)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "GetModelNameTable(Fuse.Visual)");
    ModelJavaScript_typeof()->Init();
    return uPtr(ModelJavaScript::GetOrCreateModelData(v))->NameTable;
}

// private static Fuse.Models.ModelJavaScript.ModelData GetOrCreateModelData(Fuse.Visual v) [static] :79
ModelJavaScript__ModelData* ModelJavaScript::GetOrCreateModelData(::g::Fuse::Visual* v)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "GetOrCreateModelData(Fuse.Visual)");
    ModelJavaScript_typeof()->Init();
    ModelJavaScript__ModelData* md = uAs<ModelJavaScript__ModelData*>(uPtr(uPtr(v)->Properties())->Get(ModelJavaScript::_modelHandle_), ModelJavaScript__ModelData_typeof());

    if (md == NULL)
    {
        md = ModelJavaScript__ModelData::New1();
        uPtr(uPtr(v)->Properties())->Set(ModelJavaScript::_modelHandle_, md);
    }

    return md;
}

// private ModelJavaScript New(Fuse.Models.ModelJavaScript.ModelData md, [string previewStateId]) [static] :192
ModelJavaScript* ModelJavaScript::New3(ModelJavaScript__ModelData* md, uString* previewStateId)
{
    ModelJavaScript* obj2 = (ModelJavaScript*)uNew(ModelJavaScript_typeof());
    obj2->ctor_4(md, previewStateId);
    return obj2;
}

// private static void OnModelDataChanged(Fuse.Models.ModelJavaScript.ModelData md, Fuse.Visual v) [static] :68
void ModelJavaScript::OnModelDataChanged(ModelJavaScript__ModelData* md, ::g::Fuse::Visual* v)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "OnModelDataChanged(Fuse.Models.ModelJavaScript.ModelData,Fuse.Visual)");
    ModelJavaScript_typeof()->Init();
    uPtr(v)->RemoveAllChildren(::g::Fuse::Visual_typeof()->MakeMethod(8/*RemoveAllChildren<Fuse.Models.ModelJavaScript>*/, ModelJavaScript_typeof(), NULL));

    if ((uPtr(md)->NameTable == NULL) || ::g::Uno::String::op_Equality(uPtr(md)->ModulePath, NULL))
        return;

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(v->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), ModelJavaScript::New3(md, NULL));
}

// public static void SetAppModel(Fuse.IRootVisualProvider rootVisualProvider, string modulePath) [static] :92
void ModelJavaScript::SetAppModel(uObject* rootVisualProvider, uString* modulePath)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "SetAppModel(Fuse.IRootVisualProvider,string)");
    ModelJavaScript_typeof()->Init();
    uPtr(::g::Fuse::IRootVisualProvider::Root(uInterface(uPtr(rootVisualProvider), ::g::Fuse::IRootVisualProvider_typeof())))->RemoveAllChildren(::g::Fuse::Visual_typeof()->MakeMethod(8/*RemoveAllChildren<Fuse.Models.ModelJavaScript>*/, ModelJavaScript_typeof(), NULL));
    ModelJavaScript* appModel = ModelJavaScript::CreateFromPreviewState(::g::Fuse::IRootVisualProvider::Root(uInterface(rootVisualProvider, ::g::Fuse::IRootVisualProvider_typeof())), modulePath);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(::g::Fuse::IRootVisualProvider::Root(uInterface(rootVisualProvider, ::g::Fuse::IRootVisualProvider_typeof())))->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), appModel);
}

// public static void SetModel(Fuse.Visual v, string modulePath) [static] :26
void ModelJavaScript::SetModel(::g::Fuse::Visual* v, uString* modulePath)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "SetModel(Fuse.Visual,string)");
    ModelJavaScript_typeof()->Init();
    ModelJavaScript__ModelData* md = ModelJavaScript::GetOrCreateModelData(v);
    uPtr(md)->ModulePath = modulePath;
    ModelJavaScript::OnModelDataChanged(md, v);
}

// public static void SetModelArgs(Fuse.Visual v, Fuse.Reactive.IExpression args) [static] :54
void ModelJavaScript::SetModelArgs(::g::Fuse::Visual* v, uObject* args)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "SetModelArgs(Fuse.Visual,Fuse.Reactive.IExpression)");
    ModelJavaScript_typeof()->Init();
    ModelJavaScript__ModelData* md = ModelJavaScript::GetOrCreateModelData(v);
    uPtr(md)->Arguments = args;
    md->HasArguments = true;
    ModelJavaScript::OnModelDataChanged(md, v);
}

// public static void SetModelNameTable(Fuse.Visual v, Uno.UX.NameTable nt) [static] :40
void ModelJavaScript::SetModelNameTable(::g::Fuse::Visual* v, ::g::Uno::UX::NameTable* nt)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "SetModelNameTable(Fuse.Visual,Uno.UX.NameTable)");
    ModelJavaScript_typeof()->Init();
    ModelJavaScript__ModelData* md = ModelJavaScript::GetOrCreateModelData(v);
    uPtr(md)->NameTable = nt;
    ModelJavaScript::OnModelDataChanged(md, v);
}

// private static Fuse.Reactive.IExpression[] UnpackArgs(Fuse.Reactive.IExpression argsExpr) [static] :100
uArray* ModelJavaScript::UnpackArgs(uObject* argsExpr)
{
    uStackFrame __("Fuse.Models.ModelJavaScript", "UnpackArgs(Fuse.Reactive.IExpression)");
    ModelJavaScript_typeof()->Init();
    ::g::Fuse::Reactive::Expression* ret3;
    ::g::Fuse::Reactive::Vector* vector = uAs< ::g::Fuse::Reactive::Vector*>(argsExpr, ::g::Fuse::Reactive::Vector_typeof());

    if (vector != NULL)
    {
        uObject* vectorArgs = uPtr(vector)->Arguments();
        uArray* outputArgs = uArray::New(::g::Fuse::Reactive::IExpression_typeof()->Array(), ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(vectorArgs), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL))));

        for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(vectorArgs, ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL))); ++i)
            uPtr(outputArgs)->Strong<uObject*>(i) = (uObject*)(::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(vectorArgs), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL)), uCRef<int32_t>(i), &ret3), ret3);

        return outputArgs;
    }

    return uArray::Init<uObject*>(::g::Fuse::Reactive::IExpression_typeof()->Array(), 1, argsExpr);
}
// }

// /usr/local/share/uno/Packages/Fuse.Models/1.9.0/ZoneJS.uno
// ----------------------------------------------------------

// internal sealed class ZoneJS :7
// {
static void ZoneJS_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Internal/ZoneJS");
    type->SetDependencies(
        ::g::FuseModels_bundle_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(ZoneJS_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::Module_typeof(), offsetof(ZoneJS, _module), 0,
        type, (uintptr_t)&ZoneJS::_instance_, uFieldFlagsStatic);
}

ZoneJS_type* ZoneJS_typeof()
{
    static uSStrong<ZoneJS_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ZoneJS);
    options.TypeSize = sizeof(ZoneJS_type);
    type = (ZoneJS_type*)uClassType::New("Fuse.Models.ZoneJS", options);
    type->fp_build_ = ZoneJS_build;
    type->fp_ctor_ = (void*)ZoneJS__New1_fn;
    type->interface0.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))ZoneJS__FuseScriptingIModuleProviderGetModule_fn;
    return type;
}

// internal ZoneJS() :11
void ZoneJS__ctor__fn(ZoneJS* __this)
{
    __this->ctor_();
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :21
void ZoneJS__FuseScriptingIModuleProviderGetModule_fn(ZoneJS* __this, ::g::Fuse::Scripting::Module** __retval)
{
    return *__retval = __this->_module, void();
}

// public static void Initialize() :34
void ZoneJS__Initialize_fn()
{
    ZoneJS::Initialize();
}

// private static Fuse.Scripting.Module LoadModule() :26
void ZoneJS__LoadModule_fn(::g::Fuse::Scripting::Module** __retval)
{
    *__retval = ZoneJS::LoadModule();
}

// internal ZoneJS New() :11
void ZoneJS__New1_fn(ZoneJS** __retval)
{
    *__retval = ZoneJS::New1();
}

uSStrong<ZoneJS*> ZoneJS::_instance_;

// internal ZoneJS() [instance] :11
void ZoneJS::ctor_()
{
    uStackFrame __("Fuse.Models.ZoneJS", ".ctor()");

    if (ZoneJS::_instance_ != NULL)
        return;

    _module = ZoneJS::LoadModule();
    ::g::Uno::UX::Resource::SetGlobalKey(ZoneJS::_instance_ = this, ::STRINGS[0/*"FuseJS/Inte...*/]);
}

// public static void Initialize() [static] :34
void ZoneJS::Initialize()
{
    ZoneJS::New1();
}

// private static Fuse.Scripting.Module LoadModule() [static] :26
::g::Fuse::Scripting::Module* ZoneJS::LoadModule()
{
    uStackFrame __("Fuse.Models.ZoneJS", "LoadModule()");
    return ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit1(::g::FuseModels_bundle::zonec51ed9d2()));
}

// internal ZoneJS New() [static] :11
ZoneJS* ZoneJS::New1()
{
    ZoneJS* obj1 = (ZoneJS*)uNew(ZoneJS_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Models
