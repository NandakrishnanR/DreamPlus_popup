var Observable = require('FuseJS/Observable');
var LocalNotify = require("FuseJS/LocalNotifications");


var Contents = Observable("");

var Year = [];
for(var j=2019;j<=2030;j++){
	Year.push(j);
}
var Month = [];
for(var i=1; i<=12; i++){
	Month.push(i);
}
var Day = [];
for(var i=1; i<=31; i++){
	Day.push(i);
}
var Hour = [];
for(var i=0; i<=23; i++){
	Hour.push(i);
}
var Minute = [];
for(var i=0; i<=59; i++){
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
function YeartoggleOpen(){
	console.log(Year);
	console.log("open toggle");
	YearisOpen.value = true;

}

function MonthtoggleOpen(){
	console.log(Month);
	console.log("open toggle");
	MonthisOpen.value = true;

}

function DaytoggleOpen(){
	console.log(Day);
	console.log("open toggle");
	DayisOpen.value = true;

}

function HourtoggleOpen(){
	console.log(Hour);
	console.log("open toggle");
	HourisOpen.value = true;

}

function MinutetoggleOpen(){
	console.log(Minute);
	console.log("open toggle");
	MinuteisOpen.value = true;

}




// 시간 선택하기
function Yearclick(e){
	Yearselect.value = e.data;
	console.log(e.data);
	console.log("set Year");
	YearisOpen.value = false;

}

function Monthclick(e){
	Monthselect.value = e.data;	
	console.log(e.data);
	console.log("set Month");
	MonthisOpen.value = false;

}

function Dayclick(e){
	Dayselect.value = e.data;	
	console.log(e.data);
	console.log("set Day");
	DayisOpen.value = false;

}

function Hourclick(e){
	Hourselect.value = e.data;	
	console.log(e.data);
	console.log("set Hour");
	HourisOpen.value = false;

}

function Minuteclick(e){
	Minuteselect.value = e.data;	
	console.log(e.data);
	console.log("set Minute");
	MinuteisOpen.value = false;

}


LocalNotify.onReceivedMessage = function(payload) {
    console.log ("전달 받은 로컬 노티피케이션: " + payload);
    // LocalNotify.clearAllNotifications();
    // LocalNotify.clearBadgeNumber();
};


//시간 계산해서 푸시알림보내기
function timesend(){
	Monthselect.value = Monthselect.value -1;
	console.log(Monthselect);
	var nowtime = new Date();
	var settime = new Date(Yearselect.value,Monthselect.value,Dayselect.value,Hourselect.value,Minuteselect.value);
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
	Contents : Contents,
	Year : Year,
	Yearselect : Yearselect,
	Yearvalue : Yearvalue,
	Yearclick : Yearclick,
	YearisOpen : YearisOpen,
	YeartoggleOpen : YeartoggleOpen,

	Month : Month,
	Monthselect : Monthselect,
	Monthvalue : Monthvalue,
	Monthclick : Monthclick,
	MonthisOpen : MonthisOpen,
	MonthtoggleOpen : MonthtoggleOpen,

	Day : Day,
	Dayselect : Dayselect,
	Dayvalue : Dayvalue,
	Dayclick : Dayclick,
	DayisOpen : DayisOpen,
	DaytoggleOpen : DaytoggleOpen,

	Hour : Hour,
	Hourselect : Hourselect,
	Hourvalue : Hourvalue,
	Hourclick : Hourclick,
	HourisOpen : HourisOpen,
	HourtoggleOpen : HourtoggleOpen,

	Minute : Minute,
	Minuteselect : Minuteselect,
	Minutevalue : Minutevalue,
	Minuteclick : Minuteclick,
	MinuteisOpen : MinuteisOpen,
	MinutetoggleOpen : MinutetoggleOpen,

	timesend : timesend
	// pushtime : pushtime,
	// pushtimeisOpen : pushtimeisOpen,
	// pushtimeclick : pushtimeclick

};
