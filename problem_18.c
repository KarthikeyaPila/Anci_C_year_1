 write a program that will read a real number from the keyboard and print the following output in one line:

int main(){
    float number;
    int number_1 , number_2;
    printf("type the real number: \n");
    scanf("%f" , &number);

    // 323 , 322.342 , 322.

    number_2 = (int)number +1;

    number_1 == (int)number;

    if(number_1 > (int)(number)){
        number_1 = number + 0.1;
    }


    printf("%d , %f , %d" , (int)number_2 , number , (int)number_1);
    return 0;
}
