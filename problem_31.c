 write a program to compute the sum of the digits of a given integer number.

int main(){
    int number , sum = 0;
    printf("what is the number you wanna sum up?? \n");
    scanf("%d" , &number);

    while(number != 0){
        sum = sum + number%10;
        number /= 10;
    }
    printf("the sum of all the digits of the number is: %d" , sum);
    return 0;
}
