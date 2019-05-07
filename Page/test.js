var Observable = require('FuseJS/Observable');


var today = new Date();


var hourToggle = Observable(false);
var minuteToggle = Observable(false);
var dateToggle = Observable(false);


var dateValue = [];
var hourValue = [];
var minuteValue = [];

function addZeros(num, digit) { // 자릿수 맞춰주기
	  var zero = '';
	  num = num.toString();
	  if (num.length < digit) {
	    for (i = 0; i < digit - num.length; i++) {
	      zero += '0';
	    }
	  }
	  return zero + num;
}

// 현재 시간 나타내기
var hours = addZeros(today.getHours() % 12, 2);
var minutes = addZeros(today.getMinutes(), 2);
var ampm = hours >= 12 ? '오후' : '오전';
var Time = ampm + '  ' + hours + ' : ' + minutes;




var dateInit = Observable(ampm);
var hourInit = Observable(hours);
var minuteInit = Observable(minutes);
var timeInit = Observable(Time);



for(var i=0; i<2; i++){
	if(i==0)
		dateValue[i]="오전";
	else
		dateValue[i]="오후";
}

for(var j=0;j<=12;j++){
	hourValue.push(j);
}

for(var i=0; i<=59; i++){
	minuteValue.push(i);
}



var popup_visible = Observable(false);

function popup(){
	popup_visible.value = true;
	console.log("popup");

}
function popoff(){
	popup_visible.value = false;
	console.log("popoff");
	Time = dateInit.value + '  ' + addZeros(hourInit.value, 2) + ' : ' + addZeros(minuteInit.value, 2);

	console.log(Time);
	timeInit.value = Time;

}




function dateChange(){
	dateToggle.value = true;
}

function choiceDate(e){
	dateInit.value = e.data;
	dateToggle.value = false;
}


function hourChange(){
	hourToggle.value = true;
}

function choiceHour(e){
	hourInit.value = e.data;
	hourToggle.value = false;
}

function minuteChange(){
	minuteToggle.value = true;
}

function choiceMinute(e){
	minuteInit.value = e.data;
	minuteToggle.value = false;
}



module.exports = {
	today : today,
	hours : hours,
	minutes : minutes,
	ampm : ampm,
	Time : Time,
	timeInit : timeInit,
	dateInit : dateInit,
	dateValue : dateValue,
	dateToggle : dateToggle,
	dateChange : dateChange,
	choiceDate : choiceDate,
	hourInit : hourInit,
	hourValue : hourValue,
	hourToggle : hourToggle,
	hourChange : hourChange,
	choiceHour : choiceHour,
	minuteInit : minuteInit,
	minuteValue : minuteValue,
	minuteToggle : minuteToggle,
	minuteChange : minuteChange,
	choiceMinute : choiceMinute,
	popup_visible : popup_visible,
	popup : popup,
	popoff : popoff
};
