 write a C program to input the value of days and then convert it into years, weeks and days.

int main(){
    double years, weeks, months, days;
    printf("how many days has it been? \n");
    scanf("%lf" , &days);
    years = days/365.00;
    weeks = days/7.00;
    months = days/30.00;
    printf("oh so it has been %lf years or %lf months or %lf weeks. \nnoice dudee you're still alivee!", years, months, weeks);
    return 0;
}
