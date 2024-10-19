//define a structure data type called time_struct containing three numbers inter hour, 
// integer minut and int second. develop a program that would assign values to the individual
// and display the time in the form: 16:40:51.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct time_struct{
    int hour;
    int minute;
    int second;
};

int main(){
    
    struct time_struct time;
    time.hour = rand()%24 + 1;
    time.minute = rand()%60 + 1;
    time.second = rand()%60 + 1;

    printf("%d:%d:%d", time.hour, time.minute, time.second);

    return 0;
}