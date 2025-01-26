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
    printf("input the time in the format: HH:MM:SS\n");
    scanf("%d:%d:%d", &time.hour, &time.minute, &time.second);
}

int display(){
    printf("%d:%d:%d", time.hour, time.minute, time.second);
    return 0;
}

int main(){
    time_value();
    display();
}

