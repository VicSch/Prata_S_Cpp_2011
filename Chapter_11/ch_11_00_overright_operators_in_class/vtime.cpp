#include <iostream>
#include "vtime.h"
    
Vtime::Vtime() {
    hours = minutes = 0;
}

Vtime::Vtime(int h, int m ) {
    minutes = m;
    hours = h;
}

Vtime::~Vtime() {}

void Vtime::addHour(int h) {
    hours += h;
}

void Vtime::addMinute(int m) {
    hours += m / 60;
    minutes += m % 60;
}

void Vtime::reset() {
    hours = minutes = 0;
}

void Vtime::show() const {
    std::cout << hours << " hours, " << minutes << " minumtes.\n";
}
    
Vtime Vtime::operator +(const Vtime &vt) const {
    Vtime t;
    int mints = (hours + vt.hours )* 60 + minutes + vt.minutes;
    t.minutes = mints % 60;
    t.hours = mints / 60;
    return t;
}

Vtime Vtime::operator -(const Vtime &vt) const {
    Vtime t;
    int mints = (hours * 60 + minutes) - (vt.hours * 60 + vt.minutes);
    t.hours = mints / 60;
    t.minutes = mints % 60;
    return t;
}

Vtime Vtime::operator *(double n) const {
    Vtime t;
    int mints = (hours * 60 + minutes) * n;
    t.hours = mints / 60;
    t.minutes = mints % 60;
    return t;
}