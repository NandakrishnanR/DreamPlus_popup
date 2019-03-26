var Observable = require('FuseJS/Observable');
var LocalNotify = require("FuseJS/LocalNotifications");
var payload = { 'title' : 'Hi',
				'body' : 'Jaeyoun',
				'payload' : 'man'
				}

LocalNotify.on("receivedMessage", function(payload) {
    console.log("Received Local Notification: " + payload);
    LocalNotify.clearAllNotifications();
});

function sendLater() {
    LocalNotify.later(4, "Finally!", "4 seconds is a long time", "hmm?", true);
}

function sendNow() {
    LocalNotify.now("Boom!", "Just like that", "payload", true);
}

module.exports = {
    sendNow: sendNow,
    sendLater: sendLater
};