 wrte a program to determine whether a given number is odd or even.

int main(){
    int number;
    printf("enter the number to find out whether it's an odd or an even number: \n");
    scanf("%d" , &number);
    if(number%2 == 0){ printf("%d is an even number" , number); return 0;}
    else{printf("%d is a odd number. " , number);}
    return 0;
}

without using the else statement:

int main(){
    int number;
    printf("enter the number to find out whether it's an odd or an even number: \n");
    scanf("%d" , &number);
    number%2 == 0 ? printf("%d is an even number" , number): printf("%d is a odd number", number);
    return 0;
}
  