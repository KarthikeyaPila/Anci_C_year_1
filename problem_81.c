// in preparing the calendar for a year we need to know wether that particular year is leap or not.
// design a fxn leap() that receives the year as a parameter and returns an appropriate message.

#include <stdio.h>
#include <string.h>

char leap(int year, char message[]){
    if(year%4 != 0){
        strcpy(message, "the year is not a leap year");
    }

    if(year%4 == 0){
        strcpy(message, "the year is a leap year");
    }
}

int main(){
    int year;
    printf("input the year");
    scanf("%d", &year);
    char message[50];
    leap(year, message);

    printf("%s", message);

    return 0;
}

