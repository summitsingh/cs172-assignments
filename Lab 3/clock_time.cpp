#include "clock_time.h"
using namespace std;

//------------------------------------------------------
//----- Constructors -----------------------------------
//------------------------------------------------------
clock_time::clock_time(int s, int m, int h, int d){
    seconds_ = s;
    minutes_ = m;
    hours_ = h;
    days_ = d;
}

//------------------------------------------------------
//----- Inspectors -------------------------------------
//------------------------------------------------------
int clock_time::getSeconds() const{
    return seconds_;
}

int clock_time::getMinutes() const{
    return minutes_;
}

int clock_time::getHours() const{
    return hours_;
}

int clock_time::getDays() const{
    return days_;
}
int clock_time::totalSeconds() const{
    int total = seconds_+(minutes_*60)+(hours_*3600)+(days_*3600*24);
    return total;
}


//------------------------------------------------------
//----- Mutators ---------------------------------------
//------------------------------------------------------
void clock_time::setSeconds(int seconds){
    seconds_ = seconds;
}
void clock_time::setMinutes(int minutes){
    minutes_ = minutes;
}
void clock_time::setHours(int hours){
    hours_ = hours;
}
void clock_time::setDays(int days){
    days_ = days;
}

string clock_time::toString() const{
    ostringstream os;
    os << "Seconds: " << seconds_<< endl;
    os << "Minutes: " << minutes_<< endl;
    os << "Hours: " << hours_<< endl;
    os << "Days: " << days_<< endl;

    return os.str();
}

void clock_time::insert(ostream & out) const{
    out << toString();
}

bool operator==(clock_time a, clock_time b){
    return !((a > b)||(a < b));
}

bool operator>(clock_time a, clock_time b){
    return !(a <= b);
}

bool operator<(clock_time a, clock_time b){
    return !(a >= b);
}

bool operator>=(clock_time a, clock_time b){
    return ((a > b) || (a == b));
}

bool operator<=(clock_time a, clock_time b){
    return !(a > b);
}
ostream & operator<<(ostream & out, const clock_time a){
    a.insert(out);
    return out;
}
clock_time operator+(clock_time a, clock_time b){
    return (a+b);
}






