// Use the date structure defined in exercise 11.4 to store two dates. develop a function tha twill 
//take these two dates as input and compares them
// a> it returns 1, if the date1 is earlier than date1 is earlier than date2.
// b> it returns 0, if date1 is later.


#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
}date;

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

int later_date(int date1, int date2){
    int differece;
    differece = date1-date2;
    if(differece>0){
        return 0;
    }
    else if(differece<0){
        return 1;
    }
    else{
        return 2;
    }
}

int main(){
    read();
    validate();
    char name[50];
    month_name(name);
    int date1 = date.day + date.month*100 + date.year*10000;
    printf("now for the 2nd date.\n");
    read();
    validate();
    month_name(name);
    int date2 = date.day + date.month*100 + date.year*10000;
    int greater;
    greater = later_date(date1, date2);
    if(greater == 1){
        printf("date2 is greater than date1\n");
    }
    if(greater == 0){
        printf("date1 is greater than date2\n");
    }
    if(greater == 2){
        printf("both the dates are equal\n");
    }
    return 0;
}