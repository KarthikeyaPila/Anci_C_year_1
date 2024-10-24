// Design a structure student_record to contain name, date of birth, and total marks. use the date structure designed in exercise 11.4
// to reprent the date of birth.
// develop a program to read data for 10 such students in a class and list them rank wise.

#include <stdio.h>
#include <string.h>

struct student_record{
    char name[40];
    char month_name[40];
    int day;
    int month;
    int year;
    int total_marks;
};

#define n 2

struct student_record student[n];

int validate(struct student_record *student){

    //validate the date
    if(student->day > 31){
        printf("invalid date.");
        return 0;
    }
    //validate the month
    else if(student->month > 12 || student->month < 1){
        printf("invalid month.");
        return 0;
    }
    //validate the feb days in a leap year
    if (student->month == 2) {
        if ((student->year % 4 == 0 && student->year % 100 != 0) || (student->year % 400 == 0)) {
            // Leap year, February can have 29 days
            if (student->day > 29) {
                printf("Invalid date for February in a leap year.\n");
                return 0;
            }
        } else {
            // Non-leap year, February can only have 28 days
            if (student->day > 28) {
                printf("Invalid date for February in a non-leap year.\n");
                return 0;
            }
        }
    }
    //validate no. of days a month.
    else if((student->month == 4 || student->month == 6 || student->month == 9 || student->month == 11) && student->day > 30){
        printf("the given date is invalid.");
        return 0;
    }
    else{
        return 1;
    }
    }

void month_name(struct student_record *student){

    if(student->month == 1){
        strcpy(student->month_name, "January");
    }
    else if(student->month == 2){
        strcpy(student->month_name, "February");
    }
    else if(student->month == 3){
        strcpy(student->month_name, "March");
    }
    else if(student->month == 4){
        strcpy(student->month_name, "April");
    }
    else if(student->month == 5){
        strcpy(student->month_name, "May");
    }
    else if(student->month == 6){
        strcpy(student->month_name, "June");
    }
    else if(student->month == 7){
        strcpy(student->month_name, "July");
    }
    else if(student->month == 8){
        strcpy(student->month_name, "August");
    }
    else if(student->month == 9){
        strcpy(student->month_name, "September");
    }
    else if(student->month == 10){
        strcpy(student->month_name, "October");
    }
    else if(student->month == 11){
        strcpy(student->month_name, "November");
    }
    else if(student->month == 12){
        strcpy(student->month_name, "December");
    }
}

int read(){
    int i=0;

    while(i<n){

        //name
        printf("ENTER YOUR NAME: ");
        char Name[40];
        scanf(" %s", &Name);
        strcpy(student[i].name, Name);

        //DOB
        int a,b,c;
        printf("DOB: ");
        printf("what day of the month were you born on? ");
        scanf(" %d", &a);
        printf("and number of the month? ");
        scanf(" %d", &b);
        printf("which year? ");
        scanf(" %d", &c);
        student[i].day = a;
        student[i].month = b;
        student[i].year = c;
        int validity = validate(&student[i]);
        if(validity == 0){return 0;}
        month_name(&student[i]);

        //marks
        printf("how many marks did you obtain? ");
        scanf(" %d", &student[i].total_marks);

        i++;

    }

    return 1;
}

void sort_rank(){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            struct student_record temp;
            if(student[i].total_marks > student[j].total_marks){
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
}

int main(){
    read();

    sort_rank();
    
    for(int i=0; i<n; i++){
        printf("NAME: %s  DOB: %d, %s, %d  Marks: %d\n", student[i].name, student[i].day, student[i].month_name, student[i].year, student[i].total_marks);
    }

    return 0;
}

