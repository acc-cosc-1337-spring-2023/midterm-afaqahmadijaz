#include <iostream>
#include "question2.cpp"


int main()
{
    int seconds_since_1970 = 1570846218;

    int hours = get_hours(seconds_since_1970);
    int minutes = get_minutes(seconds_since_1970);
    int seconds = get_seconds(seconds_since_1970);

    std::cout << "The time is: " << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}