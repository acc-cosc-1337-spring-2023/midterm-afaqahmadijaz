#include <ctime>
#include "question2.h"

int get_hours(int seconds_since_1970) {
    struct tm* time_info = localtime((time_t*)&seconds_since_1970);
    return time_info->tm_hour;
}

int get_minutes(int seconds_since_1970) {
    struct tm* time_info = localtime((time_t*)&seconds_since_1970);
    return time_info->tm_min;
}

int get_seconds(int seconds_since_1970) {
    struct tm* time_info = localtime((time_t*)&seconds_since_1970);
    return time_info->tm_sec;
}

Time::Time() {
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int h, int m, int s) {
    hours = h;
    minutes = m;
    seconds = s;
}

Time::Time(time_t time) {
    struct tm * timeinfo;
    timeinfo = localtime(&time);
    hours = timeinfo->tm_hour;
    minutes = timeinfo->tm_min;
    seconds = timeinfo->tm_sec;
}

bool test_config()
{
    return true;
}