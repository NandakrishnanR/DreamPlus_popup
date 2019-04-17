import Timeset from './Timeset'

export default class Timetable {
    constructor() {
        this.alram = [];
    }

    addAlram(description) {
        this.alram.push(new Timeset(description))
        console.log(JSON.stringify(this.alram));
    }
}