#include<stdio.h>

struct Time{
    int hour;
    int minute;
};

struct Interval{
    struct Time start;
    struct Time end;
};

struct Time getTime(){
    struct Time time;
    scanf("%d %d", &time.hour, &time.minute);
    return time;
};

int main(){
    struct Interval interval;
    interval.start = getTime();
    interval.end = getTime();

    printf("Start time is %d:%d and End time is %d:%d\n", interval.start.hour, interval.start.minute, interval.end.hour, interval.end.minute);

    return 0;
}
