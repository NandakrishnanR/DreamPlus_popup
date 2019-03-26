// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/CharacterNumber.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct CharacterNumber;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public struct CharacterNumber :11
// {
uStructType* CharacterNumber_typeof();
void CharacterNumber__ctor__fn(CharacterNumber* __this, int32_t* character);
void CharacterNumber__Equals_fn(CharacterNumber* __this, uType* __type, uObject* obj, bool* __retval);
void CharacterNumber__Equals2_fn(CharacterNumber* __this, CharacterNumber* other, bool* __retval);
void CharacterNumber__GetHashCode_fn(CharacterNumber* __this, uType* __type, int32_t* __retval);
void CharacterNumber__New1_fn(int32_t* character, CharacterNumber* __retval);
void CharacterNumber__op_Equality_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_GreaterThan_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_GreaterThanOrEqual_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_Implicit1_fn(CharacterNumber* line, int32_t* __retval);
void CharacterNumber__op_Inequality_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_LessThan_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_LessThanOrEqual_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__ToString_fn(CharacterNumber* __this, uType* __type, uString** __retval);

struct CharacterNumber
{
    int32_t _characterMinusOne;

    void ctor_(int32_t character);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return CharacterNumber__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(CharacterNumber other);
    int32_t GetHashCode(uType* __type) { int32_t __retval; return CharacterNumber__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return CharacterNumber__ToString_fn(this, __type, &__retval), __retval; }
};

CharacterNumber CharacterNumber__New1(int32_t character);
bool CharacterNumber__op_Equality(CharacterNumber left, CharacterNumber right);
bool CharacterNumber__op_GreaterThan(CharacterNumber left, CharacterNumber right);
bool CharacterNumber__op_GreaterThanOrEqual(CharacterNumber left, CharacterNumber right);
int32_t CharacterNumber__op_Implicit1(CharacterNumber line);
bool CharacterNumber__op_Inequality(CharacterNumber left, CharacterNumber right);
bool CharacterNumber__op_LessThan(CharacterNumber left, CharacterNumber right);
bool CharacterNumber__op_LessThanOrEqual(CharacterNumber left, CharacterNumber right);
// }

}}} // ::g::Outracks::Simulator
