"use strict";

Object.defineProperty(exports, "__esModule", {
    value: true
});

var _createClass = function () { function defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, descriptor.key, descriptor); } } return function (Constructor, protoProps, staticProps) { if (protoProps) defineProperties(Constructor.prototype, protoProps); if (staticProps) defineProperties(Constructor, staticProps); return Constructor; }; }();

var _MainView = require("MainView");

function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }

var push = function () {
    function push() {
        var List = arguments.length > 0 && arguments[0] !== undefined ? arguments[0] : _MainView.current.app.timetable;

        _classCallCheck(this, push);

        this.Timer = require("FuseJS/Timer");
        this.setting = {};
        this.alram = List.alram;
        this.nowtime = List.nowtime;
        this.LocalNotify = require("FuseJS/LocalNotifications");

        this.Year = [];
        for (var t = 2019; t <= 2020; t++) {
            this.Year.push(t);
        }
        this.Month = [];
        for (var x = 1; x <= 12; x++) {
            this.Month.push(x);
        }
        this.Date = [];
        for (var y = 1; y <= 31; y++) {
            this.Date.push(y);
        }
        this.Day = [];
        for (var i = 0; i < 2; i++) {
            if (i == 0) this.Day[i] = "오전";else this.Day[i] = "오후";
        }
        this.Hour = [];
        for (var j = 0; j <= 12; j++) {
            this.Hour.push(j);
        }
        this.Minute = [];
        for (var k = 0; k <= 59; k++) {
            this.Minute.push(k);
        }

        this.YearisOpen = false;
        this.MonthisOpen = false;
        this.DateisOpen = false;
        this.DayisOpen = false;
        this.HourisOpen = false;
        this.MinuteisOpen = false;

        this.Yearselect = "";
        this.Monthselect = "";
        this.Dateselect = "";
        this.Dayselect = "";
        this.Hourselect = "";
        this.Minuteselect = "";
        this.Contents = "";
    }

    // this.LocalNotify.onReceivedMessage = function(payload) {
    //     console.log ("전달 받은 로컬 노티피케이션: " + payload);
    //     // LocalNotify.clearAllNotifications();
    //     // LocalNotify.clearBadgeNumber();
    // };

    _createClass(push, [{
        key: "sendLater",
        value: function sendLater() {
            console.log(this.Contents);
            this.LocalNotify.later(4, "드디어!", this.Contents, "그렇죠?", true);
            this.Contents = "";
        }
    }, {
        key: "sendNow",
        value: function sendNow() {
            this.LocalNotify.now("빠밤!", "배달 왔어요!", "전달 데이터", true);
        }
    }, {
        key: "save",
        value: function save() {
            this.setting = {
                year: this.Yearselect,
                month: this.Monthselect,
                date: this.Dateselect,
                day: this.Dayselect,
                hour: this.Hourselect,
                minute: this.Minuteselect
            };
            this.alram.push(this.setting);
            this.nowtime = new Date();
            // this.nowtimeyear=this.nowtime.getFullYear();
            // this.nowtimemonth=this.nowtime.getMonth();
            // this.nowtimedate=this.nowtime.getDate();
            // this.nowtimehours=this.nowtime.getHours();
            // this.nowtimeminutes=this.nowtime.getMinute();
            this.setyear = this.Yearselect;
            this.setmonth = this.Monthselect;
            this.setdate = this.Dateselect;
            if (this.setting.day == "오전") {
                this.sethour = this.Hourselect;
            } else {
                this.sethour = this.Hourselect + 12;
            }
            this.setminute = this.Minuteselect;

            this.settime = new Date(this.setyear, this.setmonth, this.setdate, this.sethour, this.setminute);
            this.difference = this.settime - this.nowtime;
            console.log(this.nowtime);
            console.log(this.settime);
            console.log(this.difference);
            this.alarmsetting();
            _MainView.current.app.navigation.goMain();
        }
    }, {
        key: "YeartoggleOpen",
        value: function YeartoggleOpen() {
            this.YeareisOpen = !this.YearisOpen;
        }
    }, {
        key: "MonthtoggleOpen",
        value: function MonthtoggleOpen() {
            this.MonthisOpen = !this.MonthisOpen;
        }
    }, {
        key: "DatetoggleOpen",
        value: function DatetoggleOpen() {
            this.DateisOpen = !this.DateisOpen;
        }
    }, {
        key: "DaytoggleOpen",
        value: function DaytoggleOpen() {
            this.DayisOpen = !this.DayisOpen;
        }
    }, {
        key: "HourtoggleOpen",
        value: function HourtoggleOpen() {
            this.HourisOpen = !this.HourisOpen;
        }
    }, {
        key: "MinutetoggleOpen",
        value: function MinutetoggleOpen() {
            this.MinuteisOpen = !this.MinuteisOpen;
        }
    }, {
        key: "Yearclick",
        value: function Yearclick(e) {
            this.YearisOpen = false;
            console.log(JSON.stringify(e.data) + "년");
            this.Yearselect = e.data;
        }
    }, {
        key: "Minuteclick",
        value: function Minuteclick(e) {
            this.MonthisOpen = false;
            console.log(JSON.stringify(e.data) + "월");
            this.Monthselect = e.data;
        }
    }, {
        key: "Minuteclick",
        value: function Minuteclick(e) {
            this.DateisOpen = false;
            console.log(JSON.stringify(e.data) + "일");
            this.Dateselect = e.data;
        }
    }, {
        key: "Dayclick",
        value: function Dayclick(e) {
            this.DayisOpen = false;
            console.log(JSON.stringify(e.data));
            this.Dayselect = e.data;
        }
    }, {
        key: "Hourclick",
        value: function Hourclick(e) {
            this.HourisOpen = false;
            console.log(JSON.stringify(e.data) + "시");
            this.Hourselect = e.data;
        }
    }, {
        key: "Minuteclick",
        value: function Minuteclick(e) {
            this.MinuteisOpen = false;
            console.log(JSON.stringify(e.data) + "분");
            this.Minuteselect = e.data;
        }
    }, {
        key: "alarmsetting",
        value: function alarmsetting() {
            console.log("알람 설정 완료");
            console.log(this.setyear + "년" + (this.setmonth + 1) + "월" + (this.setdate + 1) + "일" + this.sethour + "시" + this.setminute + "분에 알람이 울립니다.");
            this.Timer.create(function () {
                console.log("알람이 시작됩니다.");
                _MainView.current.app.navigation.goStartAlram();
            }, this.difference, false);
        }
    }]);

    return push;
}();

exports.default = push;
//# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbInB1c2guanMiXSwibmFtZXMiOlsicHVzaCIsIkxpc3QiLCJhcHAiLCJ0aW1ldGFibGUiLCJUaW1lciIsInJlcXVpcmUiLCJzZXR0aW5nIiwiYWxyYW0iLCJub3d0aW1lIiwiTG9jYWxOb3RpZnkiLCJZZWFyIiwidCIsIk1vbnRoIiwieCIsIkRhdGUiLCJ5IiwiRGF5IiwiaSIsIkhvdXIiLCJqIiwiTWludXRlIiwiayIsIlllYXJpc09wZW4iLCJNb250aGlzT3BlbiIsIkRhdGVpc09wZW4iLCJEYXlpc09wZW4iLCJIb3VyaXNPcGVuIiwiTWludXRlaXNPcGVuIiwiWWVhcnNlbGVjdCIsIk1vbnRoc2VsZWN0IiwiRGF0ZXNlbGVjdCIsIkRheXNlbGVjdCIsIkhvdXJzZWxlY3QiLCJNaW51dGVzZWxlY3QiLCJDb250ZW50cyIsImNvbnNvbGUiLCJsb2ciLCJsYXRlciIsIm5vdyIsInllYXIiLCJtb250aCIsImRhdGUiLCJkYXkiLCJob3VyIiwibWludXRlIiwic2V0eWVhciIsInNldG1vbnRoIiwic2V0ZGF0ZSIsInNldGhvdXIiLCJzZXRtaW51dGUiLCJzZXR0aW1lIiwiZGlmZmVyZW5jZSIsImFsYXJtc2V0dGluZyIsIm5hdmlnYXRpb24iLCJnb01haW4iLCJZZWFyZWlzT3BlbiIsImUiLCJKU09OIiwic3RyaW5naWZ5IiwiZGF0YSIsImNyZWF0ZSIsImdvU3RhcnRBbHJhbSJdLCJtYXBwaW5ncyI6Ijs7Ozs7Ozs7QUFBQTs7OztJQUVxQkEsSTtBQUNqQixvQkFBMEM7QUFBQSxZQUE5QkMsSUFBOEIsdUVBQXZCLGtCQUFRQyxHQUFSLENBQVlDLFNBQVc7O0FBQUE7O0FBQ3RDLGFBQUtDLEtBQUwsR0FBYUMsUUFBUSxjQUFSLENBQWI7QUFDQSxhQUFLQyxPQUFMLEdBQWMsRUFBZDtBQUNBLGFBQUtDLEtBQUwsR0FBV04sS0FBS00sS0FBaEI7QUFDQSxhQUFLQyxPQUFMLEdBQWFQLEtBQUtPLE9BQWxCO0FBQ0EsYUFBS0MsV0FBTCxHQUFtQkosUUFBUSwyQkFBUixDQUFuQjs7QUFHQSxhQUFLSyxJQUFMLEdBQVUsRUFBVjtBQUNBLGFBQUksSUFBSUMsSUFBRSxJQUFWLEVBQWVBLEtBQUcsSUFBbEIsRUFBdUJBLEdBQXZCLEVBQTJCO0FBQ3ZCLGlCQUFLRCxJQUFMLENBQVVWLElBQVYsQ0FBZVcsQ0FBZjtBQUNIO0FBQ0QsYUFBS0MsS0FBTCxHQUFXLEVBQVg7QUFDQSxhQUFJLElBQUlDLElBQUUsQ0FBVixFQUFZQSxLQUFHLEVBQWYsRUFBa0JBLEdBQWxCLEVBQXNCO0FBQ2xCLGlCQUFLRCxLQUFMLENBQVdaLElBQVgsQ0FBZ0JhLENBQWhCO0FBQ0g7QUFDRCxhQUFLQyxJQUFMLEdBQVUsRUFBVjtBQUNBLGFBQUksSUFBSUMsSUFBRSxDQUFWLEVBQVlBLEtBQUcsRUFBZixFQUFrQkEsR0FBbEIsRUFBc0I7QUFDbEIsaUJBQUtELElBQUwsQ0FBVWQsSUFBVixDQUFlZSxDQUFmO0FBQ0g7QUFDSixhQUFLQyxHQUFMLEdBQVMsRUFBVDtBQUNHLGFBQUksSUFBSUMsSUFBRSxDQUFWLEVBQWFBLElBQUUsQ0FBZixFQUFrQkEsR0FBbEIsRUFBc0I7QUFDbEIsZ0JBQUdBLEtBQUcsQ0FBTixFQUNBLEtBQUtELEdBQUwsQ0FBU0MsQ0FBVCxJQUFZLElBQVosQ0FEQSxLQUdBLEtBQUtELEdBQUwsQ0FBU0MsQ0FBVCxJQUFZLElBQVo7QUFDSDtBQUNELGFBQUtDLElBQUwsR0FBVSxFQUFWO0FBQ0EsYUFBSSxJQUFJQyxJQUFFLENBQVYsRUFBWUEsS0FBRyxFQUFmLEVBQWtCQSxHQUFsQixFQUFzQjtBQUNsQixpQkFBS0QsSUFBTCxDQUFVbEIsSUFBVixDQUFlbUIsQ0FBZjtBQUNIO0FBQ0QsYUFBS0MsTUFBTCxHQUFZLEVBQVo7QUFDQSxhQUFJLElBQUlDLElBQUUsQ0FBVixFQUFZQSxLQUFHLEVBQWYsRUFBa0JBLEdBQWxCLEVBQXNCO0FBQ2xCLGlCQUFLRCxNQUFMLENBQVlwQixJQUFaLENBQWlCcUIsQ0FBakI7QUFDSDs7QUFLRCxhQUFLQyxVQUFMLEdBQWdCLEtBQWhCO0FBQ0EsYUFBS0MsV0FBTCxHQUFpQixLQUFqQjtBQUNBLGFBQUtDLFVBQUwsR0FBZ0IsS0FBaEI7QUFDQSxhQUFLQyxTQUFMLEdBQWUsS0FBZjtBQUNBLGFBQUtDLFVBQUwsR0FBZ0IsS0FBaEI7QUFDQSxhQUFLQyxZQUFMLEdBQWtCLEtBQWxCOztBQUdBLGFBQUtDLFVBQUwsR0FBa0IsRUFBbEI7QUFDQSxhQUFLQyxXQUFMLEdBQW1CLEVBQW5CO0FBQ0EsYUFBS0MsVUFBTCxHQUFrQixFQUFsQjtBQUNBLGFBQUtDLFNBQUwsR0FBaUIsRUFBakI7QUFDQSxhQUFLQyxVQUFMLEdBQWtCLEVBQWxCO0FBQ0EsYUFBS0MsWUFBTCxHQUFvQixFQUFwQjtBQUNBLGFBQUtDLFFBQUwsR0FBZ0IsRUFBaEI7QUFFSDs7QUFLSjtBQUNBO0FBQ0E7QUFDQTtBQUNBOzs7O29DQUVZO0FBQ1hDLG9CQUFRQyxHQUFSLENBQVksS0FBS0YsUUFBakI7QUFDRyxpQkFBS3pCLFdBQUwsQ0FBaUI0QixLQUFqQixDQUF1QixDQUF2QixFQUEwQixNQUExQixFQUFrQyxLQUFLSCxRQUF2QyxFQUFpRCxNQUFqRCxFQUF5RCxJQUF6RDtBQUNBLGlCQUFLQSxRQUFMLEdBQWdCLEVBQWhCO0FBQ0g7OztrQ0FFUztBQUNOLGlCQUFLekIsV0FBTCxDQUFpQjZCLEdBQWpCLENBQXFCLEtBQXJCLEVBQTRCLFNBQTVCLEVBQXVDLFFBQXZDLEVBQWlELElBQWpEO0FBQ0g7OzsrQkFFUztBQUNBLGlCQUFLaEMsT0FBTCxHQUFjO0FBQ2JpQyxzQkFBTSxLQUFLWCxVQURFO0FBRWJZLHVCQUFPLEtBQUtYLFdBRkM7QUFHYlksc0JBQU0sS0FBS1gsVUFIRTtBQUliWSxxQkFBSyxLQUFLWCxTQUpHO0FBS2JZLHNCQUFNLEtBQUtYLFVBTEU7QUFNYlksd0JBQVEsS0FBS1g7QUFOQSxhQUFkO0FBUUEsaUJBQUsxQixLQUFMLENBQVdQLElBQVgsQ0FBZ0IsS0FBS00sT0FBckI7QUFDQSxpQkFBS0UsT0FBTCxHQUFhLElBQUlNLElBQUosRUFBYjtBQUNBO0FBQ0E7QUFDQTtBQUNBO0FBQ0E7QUFDQyxpQkFBSytCLE9BQUwsR0FBYSxLQUFLakIsVUFBbEI7QUFDQSxpQkFBS2tCLFFBQUwsR0FBYyxLQUFLakIsV0FBbkI7QUFDQSxpQkFBS2tCLE9BQUwsR0FBYSxLQUFLakIsVUFBbEI7QUFDRCxnQkFBRyxLQUFLeEIsT0FBTCxDQUFhb0MsR0FBYixJQUFrQixJQUFyQixFQUEwQjtBQUN6QixxQkFBS00sT0FBTCxHQUFhLEtBQUtoQixVQUFsQjtBQUNBLGFBRkQsTUFHSTtBQUNILHFCQUFLZ0IsT0FBTCxHQUFhLEtBQUtoQixVQUFMLEdBQWdCLEVBQTdCO0FBQ0M7QUFDRCxpQkFBS2lCLFNBQUwsR0FBZSxLQUFLaEIsWUFBcEI7O0FBRUQsaUJBQUtpQixPQUFMLEdBQWEsSUFBSXBDLElBQUosQ0FBUyxLQUFLK0IsT0FBZCxFQUFzQixLQUFLQyxRQUEzQixFQUFvQyxLQUFLQyxPQUF6QyxFQUFpRCxLQUFLQyxPQUF0RCxFQUE4RCxLQUFLQyxTQUFuRSxDQUFiO0FBQ0EsaUJBQUtFLFVBQUwsR0FBZ0IsS0FBS0QsT0FBTCxHQUFlLEtBQUsxQyxPQUFwQztBQUNBMkIsb0JBQVFDLEdBQVIsQ0FBWSxLQUFLNUIsT0FBakI7QUFDQTJCLG9CQUFRQyxHQUFSLENBQVksS0FBS2MsT0FBakI7QUFDQWYsb0JBQVFDLEdBQVIsQ0FBWSxLQUFLZSxVQUFqQjtBQUNBLGlCQUFLQyxZQUFMO0FBQ0EsOEJBQVFsRCxHQUFSLENBQVltRCxVQUFaLENBQXVCQyxNQUF2QjtBQUNOOzs7eUNBR2U7QUFDWixpQkFBS0MsV0FBTCxHQUFtQixDQUFDLEtBQUtqQyxVQUF6QjtBQUNIOzs7MENBQ2dCO0FBQ2IsaUJBQUtDLFdBQUwsR0FBbUIsQ0FBQyxLQUFLQSxXQUF6QjtBQUNIOzs7eUNBQ2U7QUFDWixpQkFBS0MsVUFBTCxHQUFrQixDQUFDLEtBQUtBLFVBQXhCO0FBQ0g7Ozt3Q0FDYztBQUNYLGlCQUFLQyxTQUFMLEdBQWlCLENBQUMsS0FBS0EsU0FBdkI7QUFDSDs7O3lDQUNlO0FBQ1osaUJBQUtDLFVBQUwsR0FBa0IsQ0FBQyxLQUFLQSxVQUF4QjtBQUNIOzs7MkNBQ2lCO0FBQ2QsaUJBQUtDLFlBQUwsR0FBb0IsQ0FBQyxLQUFLQSxZQUExQjtBQUNIOzs7a0NBSVM2QixDLEVBQUU7QUFDUixpQkFBS2xDLFVBQUwsR0FBa0IsS0FBbEI7QUFDQWEsb0JBQVFDLEdBQVIsQ0FBWXFCLEtBQUtDLFNBQUwsQ0FBZUYsRUFBRUcsSUFBakIsSUFBeUIsR0FBckM7QUFDQSxpQkFBSy9CLFVBQUwsR0FBa0I0QixFQUFFRyxJQUFwQjtBQUVIOzs7b0NBQ1lILEMsRUFBRTtBQUNYLGlCQUFLakMsV0FBTCxHQUFtQixLQUFuQjtBQUNBWSxvQkFBUUMsR0FBUixDQUFZcUIsS0FBS0MsU0FBTCxDQUFlRixFQUFFRyxJQUFqQixJQUF5QixHQUFyQztBQUNBLGlCQUFLOUIsV0FBTCxHQUFtQjJCLEVBQUVHLElBQXJCO0FBRUg7OztvQ0FDWUgsQyxFQUFFO0FBQ1gsaUJBQUtoQyxVQUFMLEdBQWtCLEtBQWxCO0FBQ0FXLG9CQUFRQyxHQUFSLENBQVlxQixLQUFLQyxTQUFMLENBQWVGLEVBQUVHLElBQWpCLElBQXlCLEdBQXJDO0FBQ0EsaUJBQUs3QixVQUFMLEdBQWtCMEIsRUFBRUcsSUFBcEI7QUFFSDs7O2lDQUNTSCxDLEVBQUU7QUFDUixpQkFBSy9CLFNBQUwsR0FBaUIsS0FBakI7QUFDQVUsb0JBQVFDLEdBQVIsQ0FBWXFCLEtBQUtDLFNBQUwsQ0FBZUYsRUFBRUcsSUFBakIsQ0FBWjtBQUNBLGlCQUFLNUIsU0FBTCxHQUFleUIsRUFBRUcsSUFBakI7QUFFSDs7O2tDQUNVSCxDLEVBQUU7QUFDVCxpQkFBSzlCLFVBQUwsR0FBa0IsS0FBbEI7QUFDR1Msb0JBQVFDLEdBQVIsQ0FBWXFCLEtBQUtDLFNBQUwsQ0FBZUYsRUFBRUcsSUFBakIsSUFBdUIsR0FBbkM7QUFDSCxpQkFBSzNCLFVBQUwsR0FBa0J3QixFQUFFRyxJQUFwQjtBQUVIOzs7b0NBQ1lILEMsRUFBRTtBQUNYLGlCQUFLN0IsWUFBTCxHQUFvQixLQUFwQjtBQUNBUSxvQkFBUUMsR0FBUixDQUFZcUIsS0FBS0MsU0FBTCxDQUFlRixFQUFFRyxJQUFqQixJQUF5QixHQUFyQztBQUNBLGlCQUFLMUIsWUFBTCxHQUFvQnVCLEVBQUVHLElBQXRCO0FBRUg7Ozt1Q0FLYztBQUNWeEIsb0JBQVFDLEdBQVIsQ0FBWSxVQUFaO0FBQ0FELG9CQUFRQyxHQUFSLENBQVksS0FBS1MsT0FBTCxHQUFhLEdBQWIsSUFBa0IsS0FBS0MsUUFBTCxHQUFjLENBQWhDLElBQW1DLEdBQW5DLElBQXdDLEtBQUtDLE9BQUwsR0FBYSxDQUFyRCxJQUF3RCxHQUF4RCxHQUE0RCxLQUFLQyxPQUFqRSxHQUF5RSxHQUF6RSxHQUE2RSxLQUFLQyxTQUFsRixHQUE0RixjQUF4RztBQUNELGlCQUFLN0MsS0FBTCxDQUFXd0QsTUFBWCxDQUFrQixZQUFXO0FBQ3pCekIsd0JBQVFDLEdBQVIsQ0FBWSxZQUFaO0FBQ0Ysa0NBQVFsQyxHQUFSLENBQVltRCxVQUFaLENBQXVCUSxZQUF2QjtBQUNELGFBSEQsRUFHRyxLQUFLVixVQUhSLEVBR29CLEtBSHBCO0FBSUg7Ozs7OztrQkF0TGdCbkQsSSIsImZpbGUiOiJwdXNoLmpzIiwic291cmNlc0NvbnRlbnQiOlsiaW1wb3J0IHtjdXJyZW50fSBmcm9tICdNYWluVmlldydcblxuZXhwb3J0IGRlZmF1bHQgY2xhc3MgcHVzaCB7XG4gICAgY29uc3RydWN0b3IoTGlzdCA9IGN1cnJlbnQuYXBwLnRpbWV0YWJsZSkge1xuICAgICAgICB0aGlzLlRpbWVyID0gcmVxdWlyZShcIkZ1c2VKUy9UaW1lclwiKTtcbiAgICAgICAgdGhpcy5zZXR0aW5nPSB7fTtcbiAgICAgICAgdGhpcy5hbHJhbT1MaXN0LmFscmFtO1xuICAgICAgICB0aGlzLm5vd3RpbWU9TGlzdC5ub3d0aW1lO1xuICAgICAgICB0aGlzLkxvY2FsTm90aWZ5ID0gcmVxdWlyZShcIkZ1c2VKUy9Mb2NhbE5vdGlmaWNhdGlvbnNcIik7XG4gICAgICAgIFxuXG4gICAgICAgIHRoaXMuWWVhcj1bXVxuICAgICAgICBmb3IodmFyIHQ9MjAxOTt0PD0yMDIwO3QrKyl7XG4gICAgICAgICAgICB0aGlzLlllYXIucHVzaCh0KTtcbiAgICAgICAgfVxuICAgICAgICB0aGlzLk1vbnRoPVtdXG4gICAgICAgIGZvcih2YXIgeD0xO3g8PTEyO3grKyl7XG4gICAgICAgICAgICB0aGlzLk1vbnRoLnB1c2goeCk7XG4gICAgICAgIH1cbiAgICAgICAgdGhpcy5EYXRlPVtdXG4gICAgICAgIGZvcih2YXIgeT0xO3k8PTMxO3krKyl7XG4gICAgICAgICAgICB0aGlzLkRhdGUucHVzaCh5KTtcbiAgICAgICAgfVxuICAgIFx0dGhpcy5EYXk9W107XG4gICAgICAgIGZvcih2YXIgaT0wOyBpPDI7IGkrKyl7XG4gICAgICAgICAgICBpZihpPT0wKVxuICAgICAgICAgICAgdGhpcy5EYXlbaV09XCLsmKTsoIRcIjtcbiAgICAgICAgICAgIGVsc2VcbiAgICAgICAgICAgIHRoaXMuRGF5W2ldPVwi7Jik7ZuEXCI7XG4gICAgICAgIH1cbiAgICAgICAgdGhpcy5Ib3VyPVtdXG4gICAgICAgIGZvcih2YXIgaj0wO2o8PTEyO2orKyl7XG4gICAgICAgICAgICB0aGlzLkhvdXIucHVzaChqKTtcbiAgICAgICAgfVxuICAgICAgICB0aGlzLk1pbnV0ZT1bXVxuICAgICAgICBmb3IodmFyIGs9MDtrPD01OTtrKyspe1xuICAgICAgICAgICAgdGhpcy5NaW51dGUucHVzaChrKTtcbiAgICAgICAgfVxuICAgICAgICBcblxuICAgICAgICBcblxuICAgICAgICB0aGlzLlllYXJpc09wZW49ZmFsc2U7XG4gICAgICAgIHRoaXMuTW9udGhpc09wZW49ZmFsc2U7XG4gICAgICAgIHRoaXMuRGF0ZWlzT3Blbj1mYWxzZTtcbiAgICAgICAgdGhpcy5EYXlpc09wZW49ZmFsc2U7XG4gICAgICAgIHRoaXMuSG91cmlzT3Blbj1mYWxzZTtcbiAgICAgICAgdGhpcy5NaW51dGVpc09wZW49ZmFsc2U7XG4gICAgICAgIFxuXG4gICAgICAgIHRoaXMuWWVhcnNlbGVjdCA9IFwiXCI7XG4gICAgICAgIHRoaXMuTW9udGhzZWxlY3QgPSBcIlwiO1xuICAgICAgICB0aGlzLkRhdGVzZWxlY3QgPSBcIlwiO1xuICAgICAgICB0aGlzLkRheXNlbGVjdCA9IFwiXCI7XG4gICAgICAgIHRoaXMuSG91cnNlbGVjdCA9IFwiXCI7XG4gICAgICAgIHRoaXMuTWludXRlc2VsZWN0ID0gXCJcIjtcbiAgICAgICAgdGhpcy5Db250ZW50cyA9IFwiXCI7XG5cbiAgICB9XG5cblxuXG5cblx0Ly8gdGhpcy5Mb2NhbE5vdGlmeS5vblJlY2VpdmVkTWVzc2FnZSA9IGZ1bmN0aW9uKHBheWxvYWQpIHtcblx0Ly8gICAgIGNvbnNvbGUubG9nIChcIuyghOuLrCDrsJvsnYAg66Gc7LusIOuFuO2LsO2UvOy8gOydtOyFmDogXCIgKyBwYXlsb2FkKTtcblx0Ly8gICAgIC8vIExvY2FsTm90aWZ5LmNsZWFyQWxsTm90aWZpY2F0aW9ucygpO1xuXHQvLyAgICAgLy8gTG9jYWxOb3RpZnkuY2xlYXJCYWRnZU51bWJlcigpO1xuXHQvLyB9O1xuXG5cdHNlbmRMYXRlcigpIHtcblx0XHRjb25zb2xlLmxvZyh0aGlzLkNvbnRlbnRzKTtcblx0ICAgIHRoaXMuTG9jYWxOb3RpZnkubGF0ZXIoNCwgXCLrk5zrlJTslrQhXCIsIHRoaXMuQ29udGVudHMsIFwi6re466CH7KOgP1wiLCB0cnVlKTtcblx0ICAgIHRoaXMuQ29udGVudHMgPSBcIlwiO1xuXHR9XG5cblx0c2VuZE5vdygpIHtcblx0ICAgIHRoaXMuTG9jYWxOb3RpZnkubm93KFwi67mg67CkIVwiLCBcIuuwsOuLrCDsmZTslrTsmpQhXCIsIFwi7KCE64usIOuNsOydtO2EsFwiLCB0cnVlKTtcblx0fVxuXG4gICAgc2F2ZSgpIHtcbiAgICAgICAgICAgdGhpcy5zZXR0aW5nPSB7XG4gICAgICAgICAgIFx0eWVhcjogdGhpcy5ZZWFyc2VsZWN0LFxuICAgICAgICAgICAgbW9udGg6IHRoaXMuTW9udGhzZWxlY3QsXG4gICAgICAgICAgICBkYXRlOiB0aGlzLkRhdGVzZWxlY3QsXG4gICAgICAgICAgICBkYXk6IHRoaXMuRGF5c2VsZWN0LFxuICAgICAgICAgICAgaG91cjogdGhpcy5Ib3Vyc2VsZWN0LFxuICAgICAgICAgICAgbWludXRlOiB0aGlzLk1pbnV0ZXNlbGVjdFxuICAgICAgICAgICB9O1xuICAgICAgICAgICB0aGlzLmFscmFtLnB1c2godGhpcy5zZXR0aW5nKTtcbiAgICAgICAgICAgdGhpcy5ub3d0aW1lPW5ldyBEYXRlKCk7XG4gICAgICAgICAgIC8vIHRoaXMubm93dGltZXllYXI9dGhpcy5ub3d0aW1lLmdldEZ1bGxZZWFyKCk7XG4gICAgICAgICAgIC8vIHRoaXMubm93dGltZW1vbnRoPXRoaXMubm93dGltZS5nZXRNb250aCgpO1xuICAgICAgICAgICAvLyB0aGlzLm5vd3RpbWVkYXRlPXRoaXMubm93dGltZS5nZXREYXRlKCk7XG4gICAgICAgICAgIC8vIHRoaXMubm93dGltZWhvdXJzPXRoaXMubm93dGltZS5nZXRIb3VycygpO1xuICAgICAgICAgICAvLyB0aGlzLm5vd3RpbWVtaW51dGVzPXRoaXMubm93dGltZS5nZXRNaW51dGUoKTtcbiAgICAgICAgICAgIHRoaXMuc2V0eWVhcj10aGlzLlllYXJzZWxlY3Q7XG4gICAgICAgICAgICB0aGlzLnNldG1vbnRoPXRoaXMuTW9udGhzZWxlY3Q7XG4gICAgICAgICAgICB0aGlzLnNldGRhdGU9dGhpcy5EYXRlc2VsZWN0O1xuICAgICAgICAgICBpZih0aGlzLnNldHRpbmcuZGF5PT1cIuyYpOyghFwiKXtcbiAgICAgICAgICAgIHRoaXMuc2V0aG91cj10aGlzLkhvdXJzZWxlY3Q7XG4gICAgICAgICAgIH1cbiAgICAgICAgICAgZWxzZXtcbiAgICAgICAgICAgIHRoaXMuc2V0aG91cj10aGlzLkhvdXJzZWxlY3QrMTI7XG4gICAgICAgICAgICB9XG4gICAgICAgICAgICB0aGlzLnNldG1pbnV0ZT10aGlzLk1pbnV0ZXNlbGVjdDtcbiAgICAgICAgICAgIFxuICAgICAgICAgICB0aGlzLnNldHRpbWU9bmV3IERhdGUodGhpcy5zZXR5ZWFyLHRoaXMuc2V0bW9udGgsdGhpcy5zZXRkYXRlLHRoaXMuc2V0aG91cix0aGlzLnNldG1pbnV0ZSk7XG4gICAgICAgICAgIHRoaXMuZGlmZmVyZW5jZT10aGlzLnNldHRpbWUgLSB0aGlzLm5vd3RpbWU7XG4gICAgICAgICAgIGNvbnNvbGUubG9nKHRoaXMubm93dGltZSk7XG4gICAgICAgICAgIGNvbnNvbGUubG9nKHRoaXMuc2V0dGltZSk7XG4gICAgICAgICAgIGNvbnNvbGUubG9nKHRoaXMuZGlmZmVyZW5jZSk7XG4gICAgICAgICAgIHRoaXMuYWxhcm1zZXR0aW5nKCk7XG4gICAgICAgICAgIGN1cnJlbnQuYXBwLm5hdmlnYXRpb24uZ29NYWluKClcbiAgICB9XG5cblxuICAgIFllYXJ0b2dnbGVPcGVuKCl7XG4gICAgICAgIHRoaXMuWWVhcmVpc09wZW4gPSAhdGhpcy5ZZWFyaXNPcGVuO1xuICAgIH1cbiAgICBNb250aHRvZ2dsZU9wZW4oKXtcbiAgICAgICAgdGhpcy5Nb250aGlzT3BlbiA9ICF0aGlzLk1vbnRoaXNPcGVuO1xuICAgIH1cbiAgICBEYXRldG9nZ2xlT3Blbigpe1xuICAgICAgICB0aGlzLkRhdGVpc09wZW4gPSAhdGhpcy5EYXRlaXNPcGVuO1xuICAgIH1cbiAgICBEYXl0b2dnbGVPcGVuKCl7XG4gICAgICAgIHRoaXMuRGF5aXNPcGVuID0gIXRoaXMuRGF5aXNPcGVuO1xuICAgIH1cbiAgICBIb3VydG9nZ2xlT3Blbigpe1xuICAgICAgICB0aGlzLkhvdXJpc09wZW4gPSAhdGhpcy5Ib3VyaXNPcGVuO1xuICAgIH1cbiAgICBNaW51dGV0b2dnbGVPcGVuKCl7XG4gICAgICAgIHRoaXMuTWludXRlaXNPcGVuID0gIXRoaXMuTWludXRlaXNPcGVuO1xuICAgIH1cbiAgICBcblxuXG4gICAgWWVhcmNsaWNrKGUpe1xuICAgICAgICB0aGlzLlllYXJpc09wZW4gPSBmYWxzZTtcbiAgICAgICAgY29uc29sZS5sb2coSlNPTi5zdHJpbmdpZnkoZS5kYXRhKSArIFwi64WEXCIpO1xuICAgICAgICB0aGlzLlllYXJzZWxlY3QgPSBlLmRhdGE7XG4gICAgICAgXG4gICAgfVxuICAgICBNaW51dGVjbGljayhlKXtcbiAgICAgICAgdGhpcy5Nb250aGlzT3BlbiA9IGZhbHNlO1xuICAgICAgICBjb25zb2xlLmxvZyhKU09OLnN0cmluZ2lmeShlLmRhdGEpICsgXCLsm5RcIik7XG4gICAgICAgIHRoaXMuTW9udGhzZWxlY3QgPSBlLmRhdGE7XG4gICAgICAgXG4gICAgfVxuICAgICBNaW51dGVjbGljayhlKXtcbiAgICAgICAgdGhpcy5EYXRlaXNPcGVuID0gZmFsc2U7XG4gICAgICAgIGNvbnNvbGUubG9nKEpTT04uc3RyaW5naWZ5KGUuZGF0YSkgKyBcIuydvFwiKTtcbiAgICAgICAgdGhpcy5EYXRlc2VsZWN0ID0gZS5kYXRhO1xuICAgICAgIFxuICAgIH1cbiAgICAgRGF5Y2xpY2soZSl7XG4gICAgICAgIHRoaXMuRGF5aXNPcGVuID0gZmFsc2U7XG4gICAgICAgIGNvbnNvbGUubG9nKEpTT04uc3RyaW5naWZ5KGUuZGF0YSkpO1xuICAgICAgICB0aGlzLkRheXNlbGVjdD1lLmRhdGE7XG4gICAgICAgIFxuICAgIH1cbiAgICAgSG91cmNsaWNrKGUpe1xuICAgICAgICB0aGlzLkhvdXJpc09wZW4gPSBmYWxzZTtcbiAgICAgICAgICAgY29uc29sZS5sb2coSlNPTi5zdHJpbmdpZnkoZS5kYXRhKStcIuyLnFwiKTtcbiAgICAgICAgdGhpcy5Ib3Vyc2VsZWN0ID0gZS5kYXRhO1xuICAgICAgXG4gICAgfVxuICAgICBNaW51dGVjbGljayhlKXtcbiAgICAgICAgdGhpcy5NaW51dGVpc09wZW4gPSBmYWxzZTtcbiAgICAgICAgY29uc29sZS5sb2coSlNPTi5zdHJpbmdpZnkoZS5kYXRhKSArIFwi67aEXCIpO1xuICAgICAgICB0aGlzLk1pbnV0ZXNlbGVjdCA9IGUuZGF0YTtcbiAgICAgICBcbiAgICB9XG4gICAgIFxuXG5cblxuICAgIGFsYXJtc2V0dGluZygpIHtcbiAgICAgICAgIGNvbnNvbGUubG9nKFwi7JWM656MIOyEpOyglSDsmYTro4xcIik7XG4gICAgICAgICBjb25zb2xlLmxvZyh0aGlzLnNldHllYXIrXCLrhYRcIisodGhpcy5zZXRtb250aCsxKStcIuyblFwiKyh0aGlzLnNldGRhdGUrMSkrXCLsnbxcIit0aGlzLnNldGhvdXIrXCLsi5xcIit0aGlzLnNldG1pbnV0ZStcIuu2hOyXkCDslYzrnozsnbQg7Jq466a964uI64ukLlwiKTtcbiAgICAgICAgdGhpcy5UaW1lci5jcmVhdGUoZnVuY3Rpb24oKSB7XG4gICAgICAgICAgICBjb25zb2xlLmxvZyhcIuyVjOuejOydtCDsi5zsnpHrkKnri4jri6QuXCIpO1xuICAgICAgICAgIGN1cnJlbnQuYXBwLm5hdmlnYXRpb24uZ29TdGFydEFscmFtKCk7XG4gICAgICAgIH0sIHRoaXMuZGlmZmVyZW5jZSwgZmFsc2UpO1xuICAgIH1cbiAgICB9XG4iXX0=