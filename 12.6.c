// write a function day_name that receives a number n and returns a pointer to a character string containing the name of the
// corresponding day. The day names should be kept in a static table of character strings local to the function..

#include <stdio.h>

char *day_name(int n){
    static char *arr[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    return arr[n-1];
}

int main(){
    int n = 4;
    char *day = day_name(n);
    printf("%s ", day);
    return 0;
}