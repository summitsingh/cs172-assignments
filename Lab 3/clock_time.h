#ifndef clock_time_h
#define clock_time_h

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//This Class is used to store time measurements
//Remember:
// 60 seconds = 1 minute
// 60 minutes = 1 hour
// 24 hours = 1 day
// You should never store 60 seconds in the seconds variable, 60 minutes in the minutes, etc
// 120 seconds needs to be store as 2 minutes and 0 seconds

//You may assume that the set and constructors only receive inbound inputs.
//The user won't say setMinutes(120).
//For the addition operator, you will need to fix the values after addition.
class clock_time
{
private:
    int seconds_;
    int minutes_;
    int hours_;
    int days_;
public:
    //Constructor
    clock_time(int s=0, int m=0, int h=0, int d=0);
    //Accessors
    int getSeconds() const;
    int getMinutes() const;
    int getHours() const;
    int getDays() const;
    //Return the total time in seconds
    int totalSeconds() const;
    //Mutators
    void setSeconds(int s);
    void setMinutes(int m);
    void setHours(int h);
    void setDays(int d);
    
    string toString () const;
    void insert(ostream & out) const;
};

//Boolean Comparisons

bool operator<(clock_time a, clock_time b);
bool operator>(clock_time a, clock_time b);
bool operator==(clock_time a, clock_time b);
bool operator<=(clock_time a, clock_time b);
bool operator>=(clock_time a, clock_time b);
//Add times
//(1 day, 3 hours, 7 minutes, 28 seconds)
//+ (3 days, 22 hours, 54 minutes, 33 seconds)
//--------------------------------------------
//(5 days, 2 hours, 2 minutes, 1 seconds)
clock_time operator+(clock_time a, clock_time b);

//Print out as (D days, H hours, M minutes, S seconds)
ostream & operator<<(ostream & out, const clock_time a);

#endif /* clock_time_h */
