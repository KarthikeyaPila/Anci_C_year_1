 write a program to compute the value of euler's number e, that is used as the base of natural logarithms.
 use the following formula:
// e = 1 + 1/1! + 1/2! ... + 1/n!; use a suitable loop construct. the loop must end when the difference between two succesive values of e is less than 0.00001.

int main(){
    int number = 1 , factorial = 1;
    double sum = 1;
    while(number < 10){
    factorial = number*factorial;
    printf("%d \n" , factorial);
    sum = sum + 1/(double)factorial;

    number++;
    }
    printf("the value of e is: %lf" , sum);
    return 0;
}
