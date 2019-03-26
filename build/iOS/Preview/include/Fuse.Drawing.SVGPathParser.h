// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.9.0/LineParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSegments;}}}
namespace g{namespace Fuse{namespace Drawing{struct SVGPathParser;}}}
namespace g{namespace Fuse{namespace Drawing{struct Token;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class SVGPathParser :24
// {
uType* SVGPathParser_typeof();
void SVGPathParser__ctor__fn(SVGPathParser* __this, uString* data, uObject* segments);
void SVGPathParser__Execute_fn(SVGPathParser* __this, char16_t* c, char16_t* prev);
void SVGPathParser__New1_fn(uString* data, uObject* segments, SVGPathParser** __retval);
void SVGPathParser__Parse_fn(SVGPathParser* __this);
void SVGPathParser__ReadFloat_fn(SVGPathParser* __this, float* __retval);
void SVGPathParser__ReadFloat2_fn(SVGPathParser* __this, ::g::Uno::Float2* __retval);
void SVGPathParser__StartNewToken_fn(SVGPathParser* __this, int32_t* prevLastChar, int32_t* nextFirstChar, bool* hasAction);

struct SVGPathParser : uObject
{
    uStrong< ::g::Fuse::Drawing::Token*> _headToken;
    uStrong< ::g::Fuse::Drawing::Token*> _prevToken;
    uStrong< ::g::Fuse::Drawing::Token*> _token;
    uStrong< ::g::Fuse::Drawing::LineSegments*> _segments;
    uStrong<uString*> _data;
    ::g::Uno::Float2 _prevControl;
    bool _hasPrevControlC;
    bool _hasPrevControlQ;
    bool _hasCurrentPoint;

    void ctor_(uString* data, uObject* segments);
    void Execute(char16_t c, char16_t prev);
    void Parse();
    float ReadFloat();
    ::g::Uno::Float2 ReadFloat2();
    void StartNewToken(int32_t prevLastChar, int32_t nextFirstChar, bool hasAction);
    static SVGPathParser* New1(uString* data, uObject* segments);
};
// }

}}} // ::g::Fuse::Drawing
