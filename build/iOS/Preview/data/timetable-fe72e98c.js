'use strict';

Object.defineProperty(exports, "__esModule", {
    value: true
});

var _createClass = function () { function defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, descriptor.key, descriptor); } } return function (Constructor, protoProps, staticProps) { if (protoProps) defineProperties(Constructor.prototype, protoProps); if (staticProps) defineProperties(Constructor, staticProps); return Constructor; }; }();

var _Timeset = require('./Timeset');

var _Timeset2 = _interopRequireDefault(_Timeset);

function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { default: obj }; }

function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }

var Timetable = function () {
    function Timetable() {
        _classCallCheck(this, Timetable);

        this.alram = [];
    }

    _createClass(Timetable, [{
        key: 'addAlram',
        value: function addAlram(description) {
            this.alram.push(new _Timeset2.default(description));
            console.log(JSON.stringify(this.alram));
        }
    }]);

    return Timetable;
}();

exports.default = Timetable;
//# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIlRpbWV0YWJsZS5qcyJdLCJuYW1lcyI6WyJUaW1ldGFibGUiLCJhbHJhbSIsImRlc2NyaXB0aW9uIiwicHVzaCIsImNvbnNvbGUiLCJsb2ciLCJKU09OIiwic3RyaW5naWZ5Il0sIm1hcHBpbmdzIjoiOzs7Ozs7OztBQUFBOzs7Ozs7OztJQUVxQkEsUztBQUNqQix5QkFBYztBQUFBOztBQUNWLGFBQUtDLEtBQUwsR0FBYSxFQUFiO0FBQ0g7Ozs7aUNBRVFDLFcsRUFBYTtBQUNsQixpQkFBS0QsS0FBTCxDQUFXRSxJQUFYLENBQWdCLHNCQUFZRCxXQUFaLENBQWhCO0FBQ0FFLG9CQUFRQyxHQUFSLENBQVlDLEtBQUtDLFNBQUwsQ0FBZSxLQUFLTixLQUFwQixDQUFaO0FBQ0g7Ozs7OztrQkFSZ0JELFMiLCJmaWxlIjoiVGltZXRhYmxlLmpzIiwic291cmNlc0NvbnRlbnQiOlsiaW1wb3J0IFRpbWVzZXQgZnJvbSAnLi9UaW1lc2V0J1xuXG5leHBvcnQgZGVmYXVsdCBjbGFzcyBUaW1ldGFibGUge1xuICAgIGNvbnN0cnVjdG9yKCkge1xuICAgICAgICB0aGlzLmFscmFtID0gW107XG4gICAgfVxuXG4gICAgYWRkQWxyYW0oZGVzY3JpcHRpb24pIHtcbiAgICAgICAgdGhpcy5hbHJhbS5wdXNoKG5ldyBUaW1lc2V0KGRlc2NyaXB0aW9uKSlcbiAgICAgICAgY29uc29sZS5sb2coSlNPTi5zdHJpbmdpZnkodGhpcy5hbHJhbSkpO1xuICAgIH1cbn0iXX0=