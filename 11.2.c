//modify the above program such that a funcition is used to input values to the members and another
// function to display the time.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct time_struct{
    int hour;
    int minute;
    int second;
}time;

void time_value(){

    int hour;   
    int minute;
    int sec;

    printf("input the time in the format: HH:MM:SS\n");
    scanf("%d:%d:%d", &hour, &minute, &sec);

    time.hour = hour;
    time.minute = minute;
    time.second = sec;

}

int display(){
    time_value();
    printf("%d:%d:%d", time.hour, time.minute, time.second);
    return 0;
}

int main(){
    display();
}


