 distance between two points in a coordinate plane:
double add( double a , double b) {
    return a + b;
}
int main(){
    //int x1 , y1 , x2, y2 ;
    double distance, x1 , y1 , x2, y2 ;
    printf("please input the coordinates , x1 and y1: ");
    scanf("%lf %lf" , &x1 , &y1 );
    printf("please input the coordinates , x2 and y2: ");
    scanf("%lf %lf" , &x2 , &y2 );
    distance = sqrt(add(pow((x1 - x2) , 2) , pow((y1 - y2), 2)));
    printf("the distance between the two points is: %lf" , distance);
    return 0;
}
sk