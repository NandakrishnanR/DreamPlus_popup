import Timetable from 'Model/Timetable'

export let current = {};

export default class MainView {
    constructor() {
        current.app = this;
        this.timetable = new Timetable()

    }

}