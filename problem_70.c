 develop a top_down modular program to implement a calculator. The program should request the user to input
two numbers and display one of the following as per the desire of the user:
a) sum of the numbers
b) differene of the numbers
c) product of the numbers
d) division of the numbers
e) power of the numbers

double sum(double a, double b){
    printf("%lf", a + b);
}

double difference(double a, double b){
    if(a>b){
        printf("%lf", a-b);
    }
    else if(b>a){
        printf("%lf", b-a);
    }
}

double product(double a, double b){
    printf("%lf", a*b);
}

double division(double a, double b){
    if(b==0){
        printf("the division is not possible.\n");
        return 0;
    }
    printf("%lf", a/b);
}

double power(double a, double b){
    printf("%lf", ((int)a)^((int)b));
}

int main(){

    double a,b;
    char operation;
    printf("enter the first number.\n");
    scanf("%lf", &a);
    printf("enter the second number.\n");
    scanf("%lf", &b);
    printf("what operation do you want to use?\na) sum of the numbers\nb) differene of the numbers\nc) product of the numbers\nd) division of the numbers\ne) power of the numbers\n");
    scanf("%s", &operation);

    if(operation='a'){
        sum(a,b);
    }
    else if(operation='b'){
        difference(a,b);
    }
    else if(operation='c'){
        product(a,b);
    }
    else if(operation='d'){
        division(a,b);
    }
    else if(operation='e'){
        power(a,b);
    }

return 0;

}
