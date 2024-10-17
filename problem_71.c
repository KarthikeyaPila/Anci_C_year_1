 develop a modular interactive program using function that reads the values of three sides of a triagnle.
    and displays either its area ro its perimeter as per the request of the user.

double perimeter(double a, double b, double c){
    return a+b+c;
}

double semi_perimeter(double a, double b, double c){
    return (a+b+c)/2.0;
}

double area(double semi_perimeter, double a, double b, double c){
    return sqrt((semi_perimeter-a)*(semi_perimeter-b)*(semi_perimeter-c));
}

int main(){

    double a,b,c;
    char operation;
    printf("enter length of side 1:");
    scanf("%lf", &a);
    printf("enter length of side 2:");
    scanf("%lf", &b);
    printf("enter length of side 3:");
    scanf("%lf", &c);

    printf("what do you want to find out?\na) Area\nb) Perimeter\n");
    scanf("%c", &operation);
    scanf("%c");

    double s = semi_perimeter(a,b,c); 

    if(operation == 'a'){
        printf(("the Area is:%lf \n"), area(s, a, b, c));
    }
    else if(operation == 'b'){
        printf(("the perimeter is:%lf \n"), perimeter(a, b, c));
    }

    return 0;
}
