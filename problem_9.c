 to know the perimeter and area of a circle.
    double add( double a , double b) {
    return a + b;
}
int main(){
    double distance, x1 , y1, r;
    printf("input the coordinates of the point which lies on the circle:  ");
    scanf("%lf %lf" , &x1 , &y1 );
    distance = sqrt(add(pow((x1) , 2) , pow((y1), 2)));
    printf("the radius of the circle is: %lf" , distance);
    double perimeter = 2*PI*distance;
    printf("the perimeter of the circle is: %lf" , perimeter);
    return 0;
}
f"