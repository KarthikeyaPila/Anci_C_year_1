 the fibonacci numbers are defined recursively as follows: 
F1 = 1
F2 = 1
Fn = Fn-1 + Fn-2 , n>2
write a function that will generate and print the first n fibonacci numbers. n = 5, n = 10, n = 15.
int fib(int n){
    int term = 0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    for(int i=2; i<n - 2; i++){
    return fib(n-1) + fib(n-2);
    }
}
int main(){
    printf("the sum of the fib seq is: %d" , fib(15));
    return 0;
}
