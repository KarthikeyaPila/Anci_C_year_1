 Use recursive function calls to evaluate: f(x) = x - x^3/3! + x^5/5! - x^7/7! ....

long long factorial(long n){
    if(n==0 || n==1){
        return 1;
    }
    return n*(factorial(n-1));
}

double function(double x , int n){
    if(n == 0){
        return x;
    }
    int power = (2*n+1);
    double term = ((n%2==0 ? 1:-1) * pow(x, power)) / factorial(power);
    return term + function(x , n-1);

}

int main(){
    printf("factorial: %lf" , function(2, 4));
    return 0;
}
