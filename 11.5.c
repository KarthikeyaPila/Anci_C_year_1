// Desing a function update that accepts the date structure designed in 11.4 to increment the date by one day
//and return the new date.
// a> if the date is the last day in a month, month should be incremented
// b> if it is the last day in december the year should be incremented
// c> there are 29 days in feb in a leap year.

#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
}date;

void update() {
    date.day++;

    int max_days;
    if (date.month == 2) {
        if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0)) {
            max_days = 29;  
        } else {
            max_days = 28;  
        }
    } else if (date.month == 4||date.month == 6||date.month == 9||date.month == 11) {
        max_days = 30; 
    } else {
        max_days = 31;
    }
    
    if (date.day > max_days){
        date.day = 1;
        date.month++;
        if (date.month > 12) {
            date.month = 1;
            date.year++;
        }
    }
}

void read(){
    int a,b,c;
    printf("what number of the day is it?\n");
    scanf("%d", &a);
    printf("and number of the month?\n");
    scanf("%d", &b);
    printf("what year is it?\n");
    scanf("%d", &c);

    date.day = a;
    date.month = b;
    date.year = c;
}

int validate(){
    //validate the date
    if(date.day > 31){
        printf("invalid date.");
        return 0;
    }
    //validate the month
    else if(date.month > 12 || date.month < 1){
        printf("invalid month.");
        return 0;
    }
    //validate the feb days in a leap year
    if (date.month == 2) {
        if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0)) {
            // Leap year, February can have 29 days
            if (date.day > 29) {
                printf("Invalid date for February in a leap year.\n");
                return 0;
            }
        } else {
            // Non-leap year, February can only have 28 days
            if (date.day > 28) {
                printf("Invalid date for February in a non-leap year.\n");
                return 0;
            }
        }
    }
    //validate no. of days a month.
    else if((date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11) && date.day > 30){
        printf("the given date is invalid.");
        return 0;
    }
    else{
        return 1;
    }
}

void month_name(char* mname){

    if(date.month == 1){
        strcpy(mname, "January");
    }
    else if(date.month == 2){
        strcpy(mname, "February");
    }
    else if(date.month == 3){
        strcpy(mname, "March");
    }
    else if(date.month == 4){
        strcpy(mname, "April");
    }
    else if(date.month == 5){
        strcpy(mname, "May");
    }
    else if(date.month == 6){
        strcpy(mname, "June");
    }
    else if(date.month == 7){
        strcpy(mname, "July");
    }
    else if(date.month == 8){
        strcpy(mname, "August");
    }
    else if(date.month == 9){
        strcpy(mname, "September");
    }
    else if(date.month == 10){
        strcpy(mname, "October");
    }
    else if(date.month == 11){
        strcpy(mname, "November");
    }
    else if(date.month == 12){
        strcpy(mname, "December");
    }
}

int main(){
    read();
    validate();
    char name[50];
    while(1){
        char storage;
        month_name(name);
        printf("%s %d, %d\n", name, date.day, date.year);
        printf("want more? y/n\n");
        scanf(" %c", &storage);
        if(storage == 'n'){
            return 0;
        }
        update();
    }
    return 0;
} 

