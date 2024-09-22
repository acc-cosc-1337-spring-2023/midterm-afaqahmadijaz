#ifndef QUESTION2_H
#define QUESTION2_H

#include <ctime>

int get_hours(int seconds_since_1970);

int get_minutes(int seconds_since_1970);

int get_seconds(int seconds_since_1970);

class Time {
public:
    Time();
    Time(int h, int m, int s);
    Time(time_t time);

    int get_hours() const;
    int get_minutes() const;
    int get_seconds() const;

private:
    int hours;
    int minutes;
    int seconds;
};


bool test_config();

#endif