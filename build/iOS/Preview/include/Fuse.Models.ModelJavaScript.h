// This file was generated based on /usr/local/share/uno/Packages/Fuse.Models/1.9.0/ModelJavaScript.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IPreviewStateSaver.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.ValueForwarder.IValueListener.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Models{struct ModelJavaScript;}}}
namespace g{namespace Fuse{namespace Models{struct ModelJavaScript__ModelData;}}}
namespace g{namespace Fuse{struct PreviewStateData;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Models{

// public sealed class ModelJavaScript :13
// {
struct ModelJavaScript_type : ::g::Fuse::Reactive::JavaScript_type
{
    ::g::Fuse::IPreviewStateSaver interface11;
};

ModelJavaScript_type* ModelJavaScript_typeof();
void ModelJavaScript__ctor_4_fn(ModelJavaScript* __this, ModelJavaScript__ModelData* md, uString* previewStateId);
void ModelJavaScript__CreateFromPreviewState_fn(::g::Fuse::Visual* where, uString* modulePath, ModelJavaScript** __retval);
void ModelJavaScript__Dispose_fn(ModelJavaScript* __this);
void ModelJavaScript__FuseIPreviewStateSaverSave_fn(ModelJavaScript* __this, ::g::Fuse::PreviewStateData* data);
void ModelJavaScript__GenerateArgsStringAndPopulateDependencies_fn(ModelJavaScript* __this, uString** __retval);
void ModelJavaScript__GetModel_fn(::g::Fuse::Visual* v, uString** __retval);
void ModelJavaScript__GetModelArgs_fn(::g::Fuse::Visual* v, uObject** __retval);
void ModelJavaScript__GetModelNameTable_fn(::g::Fuse::Visual* v, ::g::Uno::UX::NameTable** __retval);
void ModelJavaScript__GetOrCreateModelData_fn(::g::Fuse::Visual* v, ModelJavaScript__ModelData** __retval);
void ModelJavaScript__New3_fn(ModelJavaScript__ModelData* md, uString* previewStateId, ModelJavaScript** __retval);
void ModelJavaScript__OnBeforeSubscribeToDependenciesAndDispatchEvaluate_fn(ModelJavaScript* __this);
void ModelJavaScript__OnModelDataChanged_fn(ModelJavaScript__ModelData* md, ::g::Fuse::Visual* v);
void ModelJavaScript__SetAppModel_fn(uObject* rootVisualProvider, uString* modulePath);
void ModelJavaScript__SetModel_fn(::g::Fuse::Visual* v, uString* modulePath);
void ModelJavaScript__SetModelArgs_fn(::g::Fuse::Visual* v, uObject* args);
void ModelJavaScript__SetModelNameTable_fn(::g::Fuse::Visual* v, ::g::Uno::UX::NameTable* nt);
void ModelJavaScript__SetupModel_fn(ModelJavaScript* __this);
void ModelJavaScript__UnpackArgs_fn(uObject* argsExpr, uArray** __retval);

struct ModelJavaScript : ::g::Fuse::Reactive::JavaScript
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _modelHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _modelHandle() { return ModelJavaScript_typeof()->Init(), _modelHandle_; }
    uStrong<uString*> _previewStateModelId;
    uStrong<uString*> _modulePath;
    uStrong<uObject*> _args;
    bool _hasArgs;

    void ctor_4(ModelJavaScript__ModelData* md, uString* previewStateId);
    void Dispose();
    uString* GenerateArgsStringAndPopulateDependencies();
    void SetupModel();
    static ModelJavaScript* CreateFromPreviewState(::g::Fuse::Visual* where, uString* modulePath);
    static uString* GetModel(::g::Fuse::Visual* v);
    static uObject* GetModelArgs(::g::Fuse::Visual* v);
    static ::g::Uno::UX::NameTable* GetModelNameTable(::g::Fuse::Visual* v);
    static ModelJavaScript__ModelData* GetOrCreateModelData(::g::Fuse::Visual* v);
    static ModelJavaScript* New3(ModelJavaScript__ModelData* md, uString* previewStateId);
    static void OnModelDataChanged(ModelJavaScript__ModelData* md, ::g::Fuse::Visual* v);
    static void SetAppModel(uObject* rootVisualProvider, uString* modulePath);
    static void SetModel(::g::Fuse::Visual* v, uString* modulePath);
    static void SetModelArgs(::g::Fuse::Visual* v, uObject* args);
    static void SetModelNameTable(::g::Fuse::Visual* v, ::g::Uno::UX::NameTable* nt);
    static uArray* UnpackArgs(uObject* argsExpr);
};
// }

}}} // ::g::Fuse::Models
