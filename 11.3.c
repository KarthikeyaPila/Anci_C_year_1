//Design a function update that would accept the data structure designed in exercie 11.1 and 
// increments time by one second and returns the new tiem. (make a real clock lol)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

struct time_struct{
    int hour;
    int minute;
    int second;
}current_time;

void time_value() {
    current_time.hour = rand() % 24;
    current_time.minute = rand() % 60;
    current_time.second = rand() % 60;
}

void update_current_time(){
    current_time.second++;
    if(current_time.second == 60){
        current_time.minute++;
            if(current_time.minute == 60){
                current_time.hour++;
                    if(current_time.hour == 24){
                        current_time.hour = 0;
                    }
                current_time.minute = 0;
            }
        current_time.second = 0;
    }
}

int display(){
    printf("%02d:%02d:%02d\n", current_time.hour, current_time.minute, current_time.second);
    return 0;
}

int main(){
    srand(time(0));
    time_value();
    
    while (1) {
        display();
        update_current_time();
        Sleep(1000);
    }

    return 0;
}


