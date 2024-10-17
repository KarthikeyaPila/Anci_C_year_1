 write a program to count and print the number of negative and positive numbers in a given set of numbers.

int main(){
    int numbers[10], i=0;

    do{
        printf("give me the numbers one by one \n");
        scanf("%d" , &numbers[i]);
        i++;
    } while (i < 10);
    for (int j = 0; j < 10; j++) {
    printf("%d ", numbers[j]);}
for(i = 0 ; i < 10 ; i++){
    if(numbers[i] < 0){
    printf("this number is a negative number. \n");
    }
    if(numbers[i] > 0){
    printf("this number is a positive number. \n");
    }
    else if(numbers[i] == 0)
    {
        printf("this number is 0, exiting the process. \n");
        break;
    }
    }
    return 0;
}
