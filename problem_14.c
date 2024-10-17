 write a C program to input the amount value and break it to the smalleset possible indian currency.

int main(){
    int amount, smallest;
    printf("so nigga how much money you got huh? \n");
    scanf("%d" , &amount);
    if(amount%2 == 0 ){
        smallest = amount/2;
        printf("get me %d number of coins of 2 rupees then\n" , smallest);
    }
    if(amount%5 == 0 ){
        smallest = amount/2;
        printf("get me %d number of coins of 5 rupees then\n" , smallest);
    }
    if (smallest%2 != 0 & smallest%5 != 0){
    printf("naww nigga you broke af, just keep the money lmao \n");
    }

    return 0;

}
