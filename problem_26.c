 write a program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.

int main(){
    int start, end , sum = 0, multiples;
    float num_start , num_end;
    int x ;

    printf("from where do you want the numbers to be? ");
    scanf("%d" , &start);
    printf("where do you want the numbers to end? ");
    scanf("%d" , &end);

    num_start = (float)start/7;
    num_end = (float)end/7;


    if (start % 7 == 0) {
        x = start;
    } else {
        x = (start / 7) + 1;
    }

    printf("%d" , x);

    while(7*x < end){
        sum += 7*x;
        x++;
    }


    printf("\n%d" , sum);
    return 0;

}
