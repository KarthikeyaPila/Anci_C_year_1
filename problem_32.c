 fibonaci sequence

int main(){
    int first = 0  , second = 1, third , end = 0 , number;
    printf("till how many digits do you wanna do the loop? ");
    scanf("%d" , &number);
    // printf("0 "); printf("1 ");
    do{
        third = second + first;
        first = second;
        second = third;
        printf("%d " , third);
        end++;
    }while(end < number);

    return 0;
}
