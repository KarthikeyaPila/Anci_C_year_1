 write programs to evaluate the follwing:
//a> sinx = x - x^3/3! + x^5/5! - x^7/7! ...

int main(){
    double radian , progression_1 = 0 , progression_2 = 0, n = 1 , sum = 0.0, power_1 , power_2;
    int factorial = 1 , x = 0;
    printf("please input the value of x in sin(x) in RADIANS. \n");
    scanf("%lf" , &radian);

    while( x < 50 && n < 50){

        factorial = n*factorial;
        power_1 = pow(radian , ((2*n) - 1));
        power_2 = pow(radian , ((2*n) + n));
        progression_1 = progression_1 + power_1/factorial;
        progression_2 = progression_2 - power_2/factorial;

        sum = progression_1 + progression_2;
        x++;
        n++;
    }
    printf("the value of sin(%lf) is : %lf\n", radian, sum);
    return 0;
}
