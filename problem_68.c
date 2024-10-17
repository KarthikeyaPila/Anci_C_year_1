 write a function "prime" that return 1 if its argument is prime number and returns 0 otherwise.

int prime(int number){

    if(number == 1 || number == 0){
        return 0;
    }

    int factor=0;
    
    for(int i=1; i<=(int)sqrt(number); i++){

        if(number%i==0){
            factor++;
        }
    }

    if(factor == 2){
        return 1;
    }
    else if(factor != 2){
        return 0;
    }
}

int main(){
    int number;

    printf("enter the number.\n");
    scanf("%d", &number);

    if(prime(number)==1){
        printf("%d is a prime number", number);
    }
    else if(prime(number)==0){
        printf("%d is not a prime number", number);
    }
    return 0;
}


