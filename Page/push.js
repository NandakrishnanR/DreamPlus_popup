import {current} from 'MainView'

export default class push {
    constructor(List = current.app.timetable) {
        this.Timer = require("FuseJS/Timer");
        this.setting= {};
        this.alram=List.alram;
        this.nowtime=List.nowtime;
        this.LocalNotify = require("FuseJS/LocalNotifications");
        

        this.Year=[]
        for(var t=2019;t<=2020;t++){
            this.Year.push(t);
        }
        this.Month=[]
        for(var x=1;x<=12;x++){
            this.Month.push(x);
        }
        this.Date=[]
        for(var y=1;y<=31;y++){
            this.Date.push(y);
        }
    	this.Day=[];
        for(var i=0; i<2; i++){
            if(i==0)
            this.Day[i]="오전";
            else
            this.Day[i]="오후";
        }
        this.Hour=[]
        for(var j=0;j<=12;j++){
            this.Hour.push(j);
        }
        this.Minute=[]
        for(var k=0;k<=59;k++){
            this.Minute.push(k);
        }
        

        

        this.YearisOpen=false;
        this.MonthisOpen=false;
        this.DateisOpen=false;
        this.DayisOpen=false;
        this.HourisOpen=false;
        this.MinuteisOpen=false;
        

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

	sendLater() {
		console.log(this.Contents);
	    this.LocalNotify.later(4, "드디어!", this.Contents, "그렇죠?", true);
	    this.Contents = "";
	}

	sendNow() {
	    this.LocalNotify.now("빠밤!", "배달 왔어요!", "전달 데이터", true);
	}

    save() {
           this.setting= {
           	year: this.Yearselect,
            month: this.Monthselect,
            date: this.Dateselect,
            day: this.Dayselect,
            hour: this.Hourselect,
            minute: this.Minuteselect
           };
           this.alram.push(this.setting);
           this.nowtime=new Date();
           // this.nowtimeyear=this.nowtime.getFullYear();
           // this.nowtimemonth=this.nowtime.getMonth();
           // this.nowtimedate=this.nowtime.getDate();
           // this.nowtimehours=this.nowtime.getHours();
           // this.nowtimeminutes=this.nowtime.getMinute();
            this.setyear=this.Yearselect;
            this.setmonth=this.Monthselect;
            this.setdate=this.Dateselect;
           if(this.setting.day=="오전"){
            this.sethour=this.Hourselect;
           }
           else{
            this.sethour=this.Hourselect+12;
            }
            this.setminute=this.Minuteselect;
            
           this.settime=new Date(this.setyear,this.setmonth,this.setdate,this.sethour,this.setminute);
           this.difference=this.settime - this.nowtime;
           console.log(this.nowtime);
           console.log(this.settime);
           console.log(this.difference);
           this.alarmsetting();
           current.app.navigation.goMain()
    }


    YeartoggleOpen(){
        this.YeareisOpen = !this.YearisOpen;
    }
    MonthtoggleOpen(){
        this.MonthisOpen = !this.MonthisOpen;
    }
    DatetoggleOpen(){
        this.DateisOpen = !this.DateisOpen;
    }
    DaytoggleOpen(){
        this.DayisOpen = !this.DayisOpen;
    }
    HourtoggleOpen(){
        this.HourisOpen = !this.HourisOpen;
    }
    MinutetoggleOpen(){
        this.MinuteisOpen = !this.MinuteisOpen;
    }
    


    Yearclick(e){
        this.YearisOpen = false;
        console.log(JSON.stringify(e.data) + "년");
        this.Yearselect = e.data;
       
    }
     Minuteclick(e){
        this.MonthisOpen = false;
        console.log(JSON.stringify(e.data) + "월");
        this.Monthselect = e.data;
       
    }
     Minuteclick(e){
        this.DateisOpen = false;
        console.log(JSON.stringify(e.data) + "일");
        this.Dateselect = e.data;
       
    }
     Dayclick(e){
        this.DayisOpen = false;
        console.log(JSON.stringify(e.data));
        this.Dayselect=e.data;
        
    }
     Hourclick(e){
        this.HourisOpen = false;
           console.log(JSON.stringify(e.data)+"시");
        this.Hourselect = e.data;
      
    }
     Minuteclick(e){
        this.MinuteisOpen = false;
        console.log(JSON.stringify(e.data) + "분");
        this.Minuteselect = e.data;
       
    }
     



    alarmsetting() {
         console.log("알람 설정 완료");
         console.log(this.setyear+"년"+(this.setmonth+1)+"월"+(this.setdate+1)+"일"+this.sethour+"시"+this.setminute+"분에 알람이 울립니다.");
        this.Timer.create(function() {
            console.log("알람이 시작됩니다.");
          current.app.navigation.goStartAlram();
        }, this.difference, false);
    }
    }
