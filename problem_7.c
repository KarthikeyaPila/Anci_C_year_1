 2S = a +b +c. write a program to compute the area of the triangle given the values of a b c
int main(){
    int a, b , c;
    double S, area;
    printf("what is the side length a? ");
    scanf("%d", &a);
    printf("what is the side length a? ");
    scanf("%d", &b);
    printf("what is the side length a? ");
    scanf("%d", &c);
    S = (a + b + c)/2.0;
    area = sqrt(S * (S - a) * (S - b) * (S - c));

    printf("%lf" , area);
    return 0;
}
ER