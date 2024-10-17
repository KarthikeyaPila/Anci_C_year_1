 write a program to read a four digit integer and print the sum of its digits. use / and %.

int main() {
    int number , sum = 0;

    printf("enter the 4 digit number: ");
    scanf("%d" , &number);
    sum += number%10;
    number /= 10;
    sum += number%10;
    number /= 10;
    sum += number%10;
    number /= 10;
    sum += number%10;


    printf("%d" , sum);
    return 0;


}
 0