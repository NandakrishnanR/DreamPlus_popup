"use strict";

var Observable = require('FuseJS/Observable');
var LocalNotify = require("FuseJS/LocalNotifications");
var push = require("FuseJS/Push");

push.on("registrationSucceeded", function (regID) {
	console.log("Reg Succeeded: " + regID);
});

push.on("error", function (reason) {
	console.log("Reg Failed: " + reason);
});

push.on("receivedMessage", function (payload) {
	console.log("Recieved Push Notification: " + payload);
});

var Contents = Observable("");

var Year = [];
for (var j = 2019; j <= 2030; j++) {
	Year.push(j);
}
var Month = [];
for (var i = 1; i <= 12; i++) {
	Month.push(i);
}
var Day = [];
for (var i = 1; i <= 31; i++) {
	Day.push(i);
}
var Hour = [];
for (var i = 0; i <= 23; i++) {
	Hour.push(i);
}
var Minute = [];
for (var i = 0; i <= 59; i++) {
	Minute.push(i);
}

// Popup
var YearisOpen = Observable(false);
var MonthisOpen = Observable(false);
var DayisOpen = Observable(false);
var HourisOpen = Observable(false);
var MinuteisOpen = Observable(false);

//선택값
var Yearselect = Observable("");
var Monthselect = Observable("");
var Dayselect = Observable("");
var Hourselect = Observable("");
var Minuteselect = Observable("");

// var pushtime = Observable("");
// var pushtimeisOpen = Observable(false);

// function pushtimeclick(){
// 	pushtimeisOpen.value = false;
// }


// 시간 선택창 띄우기
function YeartoggleOpen() {
	console.log(Year);
	console.log("open toggle");
	YearisOpen.value = true;
}

function MonthtoggleOpen() {
	console.log(Month);
	console.log("open toggle");
	MonthisOpen.value = true;
}

function DaytoggleOpen() {
	console.log(Day);
	console.log("open toggle");
	DayisOpen.value = true;
}

function HourtoggleOpen() {
	console.log(Hour);
	console.log("open toggle");
	HourisOpen.value = true;
}

function MinutetoggleOpen() {
	console.log(Minute);
	console.log("open toggle");
	MinuteisOpen.value = true;
}

// 시간 선택하기
function Yearclick(e) {
	Yearselect.value = e.data;
	console.log(e.data);
	console.log("set Year");
	YearisOpen.value = false;
}

function Monthclick(e) {
	Monthselect.value = e.data;
	console.log(e.data);
	console.log("set Month");
	MonthisOpen.value = false;
}

function Dayclick(e) {
	Dayselect.value = e.data;
	console.log(e.data);
	console.log("set Day");
	DayisOpen.value = false;
}

function Hourclick(e) {
	Hourselect.value = e.data;
	console.log(e.data);
	console.log("set Hour");
	HourisOpen.value = false;
}

function Minuteclick(e) {
	Minuteselect.value = e.data;
	console.log(e.data);
	console.log("set Minute");
	MinuteisOpen.value = false;
}

LocalNotify.onReceivedMessage = function (payload) {
	console.log("전달 받은 로컬 노티피케이션: " + payload);
	// LocalNotify.clearAllNotifications();
	// LocalNotify.clearBadgeNumber();
};

//시간 계산해서 푸시알림보내기
function timesend() {
	Monthselect.value = Monthselect.value - 1;
	console.log(Monthselect);
	var nowtime = new Date();
	var settime = new Date(Yearselect.value, Monthselect.value, Dayselect.value, Hourselect.value, Minuteselect.value);
	//차이를 초로 계산
	var difference = (settime - nowtime) / 1000;
	console.log(nowtime);
	console.log(settime);
	console.log(difference);

	// pushtime.value = settime;
	// console.log(pushtime);
	//    pushtimeisOpen.value = true;

	LocalNotify.later(difference, "드디어!", Contents.value, "그렇죠?", true);
}

module.exports = {
	Contents: Contents,
	Year: Year,
	Yearselect: Yearselect,
	Yearvalue: Yearvalue,
	Yearclick: Yearclick,
	YearisOpen: YearisOpen,
	YeartoggleOpen: YeartoggleOpen,

	Month: Month,
	Monthselect: Monthselect,
	Monthvalue: Monthvalue,
	Monthclick: Monthclick,
	MonthisOpen: MonthisOpen,
	MonthtoggleOpen: MonthtoggleOpen,

	Day: Day,
	Dayselect: Dayselect,
	Dayvalue: Dayvalue,
	Dayclick: Dayclick,
	DayisOpen: DayisOpen,
	DaytoggleOpen: DaytoggleOpen,

	Hour: Hour,
	Hourselect: Hourselect,
	Hourvalue: Hourvalue,
	Hourclick: Hourclick,
	HourisOpen: HourisOpen,
	HourtoggleOpen: HourtoggleOpen,

	Minute: Minute,
	Minuteselect: Minuteselect,
	Minutevalue: Minutevalue,
	Minuteclick: Minuteclick,
	MinuteisOpen: MinuteisOpen,
	MinutetoggleOpen: MinutetoggleOpen,

	timesend: timesend
	// pushtime : pushtime,
	// pushtimeisOpen : pushtimeisOpen,
	// pushtimeclick : pushtimeclick

};
//# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIlB1c2hhbGltLmpzIl0sIm5hbWVzIjpbIk9ic2VydmFibGUiLCJyZXF1aXJlIiwiTG9jYWxOb3RpZnkiLCJwdXNoIiwib24iLCJyZWdJRCIsImNvbnNvbGUiLCJsb2ciLCJyZWFzb24iLCJwYXlsb2FkIiwiQ29udGVudHMiLCJZZWFyIiwiaiIsIk1vbnRoIiwiaSIsIkRheSIsIkhvdXIiLCJNaW51dGUiLCJZZWFyaXNPcGVuIiwiTW9udGhpc09wZW4iLCJEYXlpc09wZW4iLCJIb3VyaXNPcGVuIiwiTWludXRlaXNPcGVuIiwiWWVhcnNlbGVjdCIsIk1vbnRoc2VsZWN0IiwiRGF5c2VsZWN0IiwiSG91cnNlbGVjdCIsIk1pbnV0ZXNlbGVjdCIsIlllYXJ0b2dnbGVPcGVuIiwidmFsdWUiLCJNb250aHRvZ2dsZU9wZW4iLCJEYXl0b2dnbGVPcGVuIiwiSG91cnRvZ2dsZU9wZW4iLCJNaW51dGV0b2dnbGVPcGVuIiwiWWVhcmNsaWNrIiwiZSIsImRhdGEiLCJNb250aGNsaWNrIiwiRGF5Y2xpY2siLCJIb3VyY2xpY2siLCJNaW51dGVjbGljayIsIm9uUmVjZWl2ZWRNZXNzYWdlIiwidGltZXNlbmQiLCJub3d0aW1lIiwiRGF0ZSIsInNldHRpbWUiLCJkaWZmZXJlbmNlIiwibGF0ZXIiLCJtb2R1bGUiLCJleHBvcnRzIiwiWWVhcnZhbHVlIiwiTW9udGh2YWx1ZSIsIkRheXZhbHVlIiwiSG91cnZhbHVlIiwiTWludXRldmFsdWUiXSwibWFwcGluZ3MiOiI7O0FBQUEsSUFBSUEsYUFBYUMsUUFBUSxtQkFBUixDQUFqQjtBQUNBLElBQUlDLGNBQWNELFFBQVEsMkJBQVIsQ0FBbEI7QUFDQSxJQUFJRSxPQUFPRixRQUFRLGFBQVIsQ0FBWDs7QUFHQUUsS0FBS0MsRUFBTCxDQUFRLHVCQUFSLEVBQWlDLFVBQVNDLEtBQVQsRUFBZ0I7QUFDN0NDLFNBQVFDLEdBQVIsQ0FBWSxvQkFBb0JGLEtBQWhDO0FBQ0gsQ0FGRDs7QUFJQUYsS0FBS0MsRUFBTCxDQUFRLE9BQVIs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WUEsU0FwQkk7QUFxQmhCVyxnQkFBZ0JBLGFBckJBOztBQXVCaEJmLE9BQU9BLElBdkJTO0FBd0JoQlUsYUFBYUEsVUF4Qkc7QUF5QmhCMkIsWUFBWUEsU0F6Qkk7QUEwQmhCZCxZQUFZQSxTQTFCSTtBQTJCaEJsQixhQUFhQSxVQTNCRztBQTRCaEJXLGlCQUFpQkEsY0E1QkQ7O0FBOEJoQmYsU0FBU0EsTUE5Qk87QUErQmhCVSxlQUFlQSxZQS9CQztBQWdDaEIyQixjQUFjQSxXQWhDRTtBQWlDaEJkLGNBQWNBLFdBakNFO0FBa0NoQmxCLGVBQWVBLFlBbENDO0FBbUNoQlcsbUJBQW1CQSxnQkFuQ0g7O0FBcUNoQlMsV0FBV0E7QUFDWDtBQUNBO0FBQ0E7O0FBeENnQixDQUFqQiIsImZpbGUiOiJQdXNoYWxpbS5qcyIsInNvdXJjZXNDb250ZW50IjpbInZhciBPYnNlcnZhYmxlID0gcmVxdWlyZSgnRnVzZUpTL09ic2VydmFibGUnKTtcbnZhciBMb2NhbE5vdGlmeSA9IHJlcXVpcmUoXCJGdXNlSlMvTG9jYWxOb3RpZmljYXRpb25zXCIpO1xudmFyIHB1c2ggPSByZXF1aXJlKFwiRnVzZUpTL1B1c2hcIik7XG5cblxucHVzaC5vbihcInJlZ2lzdHJhdGlvblN1Y2NlZWRlZFwiLCBmdW5jdGlvbihyZWdJRCkge1xuICAgIGNvbnNvbGUubG9nKFwiUmVnIFN1Y2NlZWRlZDogXCIgKyByZWdJRCk7XG59KTtcblxucHVzaC5vbihcImVycm9yXCIsIGZ1bmN0aW9uKHJlYXNvbikge1xuICAgIGNvbnNvbGUubG9nKFwiUmVnIEZhaWxlZDogXCIgKyByZWFzb24pO1xufSk7XG5cbnB1c2gub24oXCJyZWNlaXZlZE1lc3NhZ2VcIiwgZnVuY3Rpb24ocGF5bG9hZCkge1xuICAgIGNvbnNvbGUubG9nKFwiUmVjaWV2ZWQgUHVzaCBOb3RpZmljYXRpb246IFwiICsgcGF5bG9hZCk7XG59KTtcblxuXG5cblxudmFyIENvbnRlbnRzID0gT2JzZXJ2YWJsZShcIlwiKTtcblxudmFyIFllYXIgPSBbXTtcbmZvcih2YXIgaj0yMDE5O2o8PTIwMzA7aisrKXtcblx0WWVhci5wdXNoKGopO1xufVxudmFyIE1vbnRoID0gW107XG5mb3IodmFyIGk9MTsgaTw9MTI7IGkrKyl7XG5cdE1vbnRoLnB1c2goaSk7XG59XG52YXIgRGF5ID0gW107XG5mb3IodmFyIGk9MTsgaTw9MzE7IGkrKyl7XG5cdERheS5wdXNoKGkpO1xufVxudmFyIEhvdXIgPSBbXTtcbmZvcih2YXIgaT0wOyBpPD0yMzsgaSsrKXtcblx0SG91ci5wdXNoKGkpO1xufVxudmFyIE1pbnV0ZSA9IFtdO1xuZm9yKHZhciBpPTA7IGk8PTU5OyBpKyspe1xuXHRNaW51dGUucHVzaChpKTtcbn1cblxuXG4vLyBQb3B1cFxudmFyIFllYXJpc09wZW4gPSBPYnNlcnZhYmxlKGZhbHNlKTtcbnZhciBNb250aGlzT3BlbiA9IE9ic2VydmFibGUoZmFsc2UpO1xudmFyIERheWlzT3BlbiA9IE9ic2VydmFibGUoZmFsc2UpO1xudmFyIEhvdXJpc09wZW4gPSBPYnNlcnZhYmxlKGZhbHNlKTtcbnZhciBNaW51dGVpc09wZW4gPSBPYnNlcnZhYmxlKGZhbHNlKTtcblxuLy/shKDtg53qsJJcbnZhciBZZWFyc2VsZWN0ID0gT2JzZXJ2YWJsZShcIlwiKTtcbnZhciBNb250aHNlbGVjdCA9IE9ic2VydmFibGUoXCJcIik7XG52YXIgRGF5c2VsZWN0ID0gT2JzZXJ2YWJsZShcIlwiKTtcbnZhciBIb3Vyc2VsZWN0ID0gT2JzZXJ2YWJsZShcIlwiKTtcbnZhciBNaW51dGVzZWxlY3QgPSBPYnNlcnZhYmxlKFwiXCIpO1xuXG5cbi8vIHZhciBwdXNodGltZSA9IE9ic2VydmFibGUoXCJcIik7XG4vLyB2YXIgcHVzaHRpbWVpc09wZW4gPSBPYnNlcnZhYmxlKGZhbHNlKTtcblxuLy8gZnVuY3Rpb24gcHVzaHRpbWVjbGljaygpe1xuLy8gXHRwdXNodGltZWlzT3Blbi52YWx1ZSA9IGZhbHNlO1xuLy8gfVxuXG5cblxuLy8g7Iuc6rCEIOyEoO2DneywvSDrnYTsmrDquLBcbmZ1bmN0aW9uIFllYXJ0b2dnbGVPcGVuKCl7XG5cdGNvbnNvbGUubG9nKFllYXIpO1xuXHRjb25zb2xlLmxvZyhcIm9wZW4gdG9nZ2xlXCIpO1xuXHRZZWFyaXNPcGVuLnZhbHVlID0gdHJ1ZTtcblxufVxuXG5mdW5jdGlvbiBNb250aHRvZ2dsZU9wZW4oKXtcblx0Y29uc29sZS5sb2coTW9udGgpO1xuXHRjb25zb2xlLmxvZyhcIm9wZW4gdG9nZ2xlXCIpO1xuXHRNb250aGlzT3Blbi52YWx1ZSA9IHRydWU7XG5cbn1cblxuZnVuY3Rpb24gRGF5dG9nZ2xlT3Blbigpe1xuXHRjb25zb2xlLmxvZyhEYXkpO1xuXHRjb25zb2xlLmxvZyhcIm9wZW4gdG9nZ2xlXCIpO1xuXHREYXlpc09wZW4udmFsdWUgPSB0cnVlO1xuXG59XG5cbmZ1bmN0aW9uIEhvdXJ0b2dnbGVPcGVuKCl7XG5cdGNvbnNvbGUubG9nKEhvdXIpO1xuXHRjb25zb2xlLmxvZyhcIm9wZW4gdG9nZ2xlXCIpO1xuXHRIb3VyaXNPcGVuLnZhbHVlID0gdHJ1ZTtcblxufVxuXG5mdW5jdGlvbiBNaW51dGV0b2dnbGVPcGVuKCl7XG5cdGNvbnNvbGUubG9nKE1pbnV0ZSk7XG5cdGNvbnNvbGUubG9nKFwib3BlbiB0b2dnbGVcIik7XG5cdE1pbnV0ZWlzT3Blbi52YWx1ZSA9IHRydWU7XG5cbn1cblxuXG5cblxuLy8g7Iuc6rCEIOyEoO2Dne2VmOq4sFxuZnVuY3Rpb24gWWVhcmNsaWNrKGUpe1xuXHRZZWFyc2VsZWN0LnZhbHVlID0gZS5kYXRhO1xuXHRjb25zb2xlLmxvZyhlLmRhdGEpO1xuXHRjb25zb2xlLmxvZyhcInNldCBZZWFyXCIpO1xuXHRZZWFyaXNPcGVuLnZhbHVlID0gZmFsc2U7XG5cbn1cblxuZnVuY3Rpb24gTW9udGhjbGljayhlKXtcblx0TW9udGhzZWxlY3QudmFsdWUgPSBlLmRhdGE7XHRcblx0Y29uc29sZS5sb2coZS5kYXRhKTtcblx0Y29uc29sZS5sb2coXCJzZXQgTW9udGhcIik7XG5cdE1vbnRoaXNPcGVuLnZhbHVlID0gZmFsc2U7XG5cbn1cblxuZnVuY3Rpb24gRGF5Y2xpY2soZSl7XG5cdERheXNlbGVjdC52YWx1ZSA9IGUuZGF0YTtcdFxuXHRjb25zb2xlLmxvZyhlLmRhdGEpO1xuXHRjb25zb2xlLmxvZyhcInNldCBEYXlcIik7XG5cdERheWlzT3Blbi52YWx1ZSA9IGZhbHNlO1xuXG59XG5cbmZ1bmN0aW9uIEhvdXJjbGljayhlKXtcblx0SG91cnNlbGVjdC52YWx1ZSA9IGUuZGF0YTtcdFxuXHRjb25zb2xlLmxvZyhlLmRhdGEpO1xuXHRjb25zb2xlLmxvZyhcInNldCBIb3VyXCIpO1xuXHRIb3VyaXNPcGVuLnZhbHVlID0gZmFsc2U7XG5cbn1cblxuZnVuY3Rpb24gTWludXRlY2xpY2soZSl7XG5cdE1pbnV0ZXNlbGVjdC52YWx1ZSA9IGUuZGF0YTtcdFxuXHRjb25zb2xlLmxvZyhlLmRhdGEpO1xuXHRjb25zb2xlLmxvZyhcInNldCBNaW51dGVcIik7XG5cdE1pbnV0ZWlzT3Blbi52YWx1ZSA9IGZhbHNlO1xuXG59XG5cblxuTG9jYWxOb3RpZnkub25SZWNlaXZlZE1lc3NhZ2UgPSBmdW5jdGlvbihwYXlsb2FkKSB7XG4gICAgY29uc29sZS5sb2cgKFwi7KCE64usIOuwm+ydgCDroZzsu6wg64W47Yuw7ZS87LyA7J207IWYOiBcIiArIHBheWxvYWQpO1xuICAgIC8vIExvY2FsTm90aWZ5LmNsZWFyQWxsTm90aWZpY2F0aW9ucygpO1xuICAgIC8vIExvY2FsTm90aWZ5LmNsZWFyQmFkZ2VOdW1iZXIoKTtcbn07XG5cblxuLy/si5zqsIQg6rOE7IKw7ZW07IScIO2RuOyLnOyVjOumvOuztOuCtOq4sFxuZnVuY3Rpb24gdGltZXNlbmQoKXtcblx0TW9udGhzZWxlY3QudmFsdWUgPSBNb250aHNlbGVjdC52YWx1ZSAtMTtcblx0Y29uc29sZS5sb2coTW9udGhzZWxlY3QpO1xuXHR2YXIgbm93dGltZSA9IG5ldyBEYXRlKCk7XG5cdHZhciBzZXR0aW1lID0gbmV3IERhdGUoWWVhcnNlbGVjdC52YWx1ZSxNb250aHNlbGVjdC52YWx1ZSxEYXlzZWxlY3QudmFsdWUsSG91cnNlbGVjdC52YWx1ZSxNaW51dGVzZWxlY3QudmFsdWUpO1xuXHQvL+ywqOydtOulvCDstIjroZwg6rOE7IKwXG5cdHZhciBkaWZmZXJlbmNlID0gKHNldHRpbWUgLSBub3d0aW1lKSAvIDEwMDA7XG5cdGNvbnNvbGUubG9nKG5vd3RpbWUpO1xuICAgIGNvbnNvbGUubG9nKHNldHRpbWUpO1xuICAgIGNvbnNvbGUubG9nKGRpZmZlcmVuY2UpO1xuXG5cdC8vIHB1c2h0aW1lLnZhbHVlID0gc2V0dGltZTtcblx0Ly8gY29uc29sZS5sb2cocHVzaHRpbWUpO1xuIC8vICAgIHB1c2h0aW1laXNPcGVuLnZhbHVlID0gdHJ1ZTtcblxuICAgIExvY2FsTm90aWZ5LmxhdGVyKGRpZmZlcmVuY2UsIFwi65Oc65SU7Ja0IVwiLCBDb250ZW50cy52YWx1ZSwgXCLqt7jroIfso6A/XCIsIHRydWUpO1xuXG4gICBcbn1cblxuXG5cbm1vZHVsZS5leHBvcnRzID0ge1xuXHRDb250ZW50cyA6IENvbnRlbnRzLFxuXHRZZWFyIDogWWVhcixcblx0WWVhcnNlbGVjdCA6IFllYXJzZWxlY3QsXG5cdFllYXJ2YWx1ZSA6IFllYXJ2YWx1ZSxcblx0WWVhcmNsaWNrIDogWWVhcmNsaWNrLFxuXHRZZWFyaXNPcGVuIDogWWVhcmlzT3Blbixcblx0WWVhcnRvZ2dsZU9wZW4gOiBZZWFydG9nZ2xlT3BlbixcblxuXHRNb250aCA6IE1vbnRoLFxuXHRNb250aHNlbGVjdCA6IE1vbnRoc2VsZWN0LFxuXHRNb250aHZhbHVlIDogTW9udGh2YWx1ZSxcblx0TW9udGhjbGljayA6IE1vbnRoY2xpY2ssXG5cdE1vbnRoaXNPcGVuIDogTW9udGhpc09wZW4sXG5cdE1vbnRodG9nZ2xlT3BlbiA6IE1vbnRodG9nZ2xlT3BlbixcblxuXHREYXkgOiBEYXksXG5cdERheXNlbGVjdCA6IERheXNlbGVjdCxcblx0RGF5dmFsdWUgOiBEYXl2YWx1ZSxcblx0RGF5Y2xpY2sgOiBEYXljbGljayxcblx0RGF5aXNPcGVuIDogRGF5aXNPcGVuLFxuXHREYXl0b2dnbGVPcGVuIDogRGF5dG9nZ2xlT3BlbixcblxuXHRIb3VyIDogSG91cixcblx0SG91cnNlbGVjdCA6IEhvdXJzZWxlY3QsXG5cdEhvdXJ2YWx1ZSA6IEhvdXJ2YWx1ZSxcblx0SG91cmNsaWNrIDogSG91cmNsaWNrLFxuXHRIb3VyaXNPcGVuIDogSG91cmlzT3Blbixcblx0SG91cnRvZ2dsZU9wZW4gOiBIb3VydG9nZ2xlT3BlbixcblxuXHRNaW51dGUgOiBNaW51dGUsXG5cdE1pbnV0ZXNlbGVjdCA6IE1pbnV0ZXNlbGVjdCxcblx0TWludXRldmFsdWUgOiBNaW51dGV2YWx1ZSxcblx0TWludXRlY2xpY2sgOiBNaW51dGVjbGljayxcblx0TWludXRlaXNPcGVuIDogTWludXRlaXNPcGVuLFxuXHRNaW51dGV0b2dnbGVPcGVuIDogTWludXRldG9nZ2xlT3BlbixcblxuXHR0aW1lc2VuZCA6IHRpbWVzZW5kXG5cdC8vIHB1c2h0aW1lIDogcHVzaHRpbWUsXG5cdC8vIHB1c2h0aW1laXNPcGVuIDogcHVzaHRpbWVpc09wZW4sXG5cdC8vIHB1c2h0aW1lY2xpY2sgOiBwdXNodGltZWNsaWNrXG5cbn07XG4iXX0=