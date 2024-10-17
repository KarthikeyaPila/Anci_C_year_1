 write a function that will round a floating-point number to an indicated decimal place.
For example the number 17.457 would yield the value 17.46 when its rounded off to two decimal places.

float roundoff(float number , int decimal_places){
    float factor = pow(10, decimal_places);
    float temp = number*factor;
    int temp_num = (int)temp;
    if(temp - temp_num >= 0.5){
        temp_num += 1;
    }
    return temp_num/factor;
}

int main(){
    float number = 17.45745;

    int decimal_place;
    printf("enter the number of decimal place to where you want to round it off to: \n");
    scanf("%d" , &decimal_place);

    float rounded_number = roundoff(number, decimal_place);

    printf("the rounded off number is: %f", rounded_number);
    return 0;
}
