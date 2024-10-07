#include <stdio.h>

int main(){
printf("please input the variables a, b , c for the equation, ax + by = c. \n");
int a; int b; int c;
printf("input the first variable ""a"" ");
scanf("%d" , &a);
printf("input the second variable ""b"" ");
scanf("%d" , &b);
printf("input the thrid variable ""c"" ");
scanf("%d" , &c);
printf("the equation is: %dx + %dy = %d", a , b , c);
return 0;
}

