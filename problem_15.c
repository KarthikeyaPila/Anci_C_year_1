 write a program that reads a floating point number and then displays the right most digit of the integral part of the number.

int main(){
    char number[100];
    int i = 0 ;

    printf("what is the float number? \n");
    scanf("%s" , number);
    while(number[i] != '\0'){
        if(number[i] == '.'){
            printf("the rightmost digit is: %c\n" , number[i-1]);
            printf("the 2 rightmost digits of the given number are: %c%c\n" , number[i-2] , number[i-1]);
        }
        i++;
    }
    return 0;
}
 !