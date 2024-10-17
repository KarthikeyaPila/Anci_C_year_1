 the cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and above 100 calls.

int main(){
    int calls;
    float bill;

    printf("how many calls did you make? \n");
    scanf("%d" , &calls);

    if(calls > 100){
        bill = (1.25*(calls - 100)) + 250;
    }
    else{ bill = 250; }

    printf("the total is: %0.2f" , bill);

    return 0;
}

 