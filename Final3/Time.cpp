#include "Time.h"
#include <exception>
#include <iomanip>

Time::Time():
    hour(0), minute(0), second(0)
{}

Time::Time(unsigned int hour, unsigned int minute, unsigned int second):
                            hour(hour), minute(minute), second(second)
{}


Time::Time(unsigned int nSeconds){
    this->setTime(nSeconds);
}

Time::Time(const Time& other):
                hour(other.hour), minute(other.minute), second(other.second)
{}

Time::Time(Time&& other):
                hour(other.hour), minute(other.minute), second(other.second)
{}

Time::~Time()
{}


unsigned int Time::getHour(){
    return hour;
}
unsigned int Time::getMinute(){
    return minute;
}
unsigned int Time::getSecond(){
    return second;
}
unsigned int Time::getnSeconds() const{
    return hour*MINS_PER_HOUR*SECS_PER_MIN + minute*SECS_PER_MIN + second;
}
void Time::setTime(unsigned int nSeconds){

    second  = nSeconds%(SECS_PER_MIN);
    nSeconds = nSeconds/SECS_PER_MIN;
    minute = nSeconds%(MINS_PER_HOUR);
    hour = nSeconds/MINS_PER_HOUR;
}

void Time::setTime(unsigned int hour, unsigned int minute, unsigned int second){
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

bool Time::operator!=(const Time& other) const {
    return !(*this == other);
}

bool Time::operator==(const Time& other) const {
    return second == other.second;
}

bool Time::operator>(const Time& other) const {
    return *this > other || *this == other;
}

bool Time::operator<(Time& other)  {
    return !(*this >= other);
}

bool Time::operator<=(const Time& other) const {

    return !(this->operator>(other));
}

Time Time::operator+(int secondsToAdd) const {
    Time result = *this;
    result.second += secondsToAdd;

    while (result.second >= SECONDS_IN_A_DAY) {
        result.second -= SECONDS_IN_A_DAY;
    }

    return result;
}

Time& Time::operator+=(int seconds) {
    second += seconds;

    while (second >= SECONDS_IN_A_DAY) {
        second -= SECONDS_IN_A_DAY;
    }

    return *this;
}

std::ostream& operator<<(std::ostream& os,  Time& time) {
    os << std::setfill('0') << std::setw(2) << time.getHour() << ":"
       << std::setfill('0') << std::setw(2) << time.getMinute() << ":"
       << std::setfill('0') << std::setw(2) << time.getSecond();
    return os;
}

unsigned int Time::operator[](char unit) const {
    if (unit == 'h') {
        return hour;
    } else if (unit == 'm') {
        return minute;
    } else if (unit == 's') {
        return second;
    } else {
        throw std::invalid_argument("Invalid time unit");
    }
}

bool Time::operator<(const Time& other) const {
    return this->second < other.second;
}

unsigned int Time::operator[](char unit) const {
    if (unit == 'h') {
        return hour;
    } else if (unit == 'm') {
        return minute;
    } else if (unit == 's') {
        return second;
    } else {
        throw std::invalid_argument("Invalid time unit");
    }
}

Time Time::operator-(const Time& other) const {
    int diffSeconds = this->second - other.second;
    if (diffSeconds < 0) {
        diffSeconds += SECONDS_IN_A_DAY;
    }
    return Time(diffSeconds);
}

Time& Time::operator+=(const Time& other) {
    second += other.second;

    while (second >= static_cast<unsigned int>(SECONDS_IN_A_DAY)) {
        second -= SECONDS_IN_A_DAY;
    }

    return *this;
}