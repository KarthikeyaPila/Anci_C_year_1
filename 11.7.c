// add a fxn called nextdate to the program designed in exercise 11.4 to perform the following
// a> accepts two arguments one of the structure data containing the present date and the second an integer that represents the number
// of days to be added to the present date.
// b> adds the days to the present date and returns the structure containing the next date correctly.
// note that the next date may be in the next month or even the next year.

#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
}date;

int max_days_month(int month, int year){
    switch(month){
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                return 29;
            }
            else{
                return 28;
            }
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
    }
}

void nextdate(){
    int days;
    printf("how many days do you want to see ahead?\n");
    scanf("%d", &days);

    for(int i=0; i<days; i++){
        date.day += 1;
        if(date.day > max_days_month(date.month, date.year)){
            date.month++;
            date.day = 1;
            if(date.month > 12){
                date.year++;
                date.month = 1;
            }
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
    month_name(name);
    printf("prev date: %s %d, %d\n", name, date.day, date.year);
    nextdate();
    validate();
    month_name(name);
    printf("Next date: %s %d, %d\n", name, date.day, date.year);

    return 0;
}
