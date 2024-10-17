 write a program to determine and print the sum of the following harmonic series for a given value of n: 1 + 1/2 + 1/3 + ... 1/n

int main(){
    int number , i=1;
    float sum = 0 , fraction ;
    printf("for what integer do you want the series? \n");
    scanf("%d" , &number);
    do {
        fraction = 1.0/(float)i ;
        sum += fraction;
        i++;
    } while(i <= number);
        printf("%f", sum);
    return 0;
}
pe