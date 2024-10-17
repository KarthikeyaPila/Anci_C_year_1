 given a number, write a program using while loop to reverse the digits of the number.

int main(){
    int number;
    printf("what is the number you wanna reverse? \n");
    scanf("%d" , &number);

    while(number != 0){
        printf("%d" , number%10);
        number /= 10;
    }
    return 0;
}

  