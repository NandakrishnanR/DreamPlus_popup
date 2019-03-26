var Observable = require('FuseJS/Observable');
var LocalNotify = require("FuseJS/LocalNotifications");

LocalNotify.onReceivedMessage = function(payload) {
    console.log ("전달 받은 로컬 노티피케이션: " + payload);
    // LocalNotify.clearAllNotifications();
    // LocalNotify.clearBadgeNumber();
};

function sendLater() {
    LocalNotify.later(4, "드디어!", "Dream-Plus Push alarm success.", "그렇죠?", true);
}

function sendNow() {
    LocalNotify.now("빠밤!", "배달 왔어요!", "전달 데이터", true);
}

module.exports = {
    sendNow: sendNow,
    sendLater: sendLater
};
