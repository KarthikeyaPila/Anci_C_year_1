 write a function "exchange" to interchange the values of  two variables, say x and y. Illustrat
   the use of this function, in a calling function. Assume that x and y are defined as global variables.
float a = 3.14;
float b = 1.00;
void exchange(float *x , float *y){
    float c;
    c = *x;
    *x = *y;
    *y = c;
}

int main(){
    exchange(&a , &b);
    printf("a: %0.2f \nb: %0.2f" , a , b);
    return 0;
}
;
