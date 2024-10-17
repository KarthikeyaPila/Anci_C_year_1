 The straight line method of computing the yearly depreciation of the value of an item is given by:

int main(){
    double price , service , depreciation , salvage_value;
    printf("write the values of: purchase price , years of service , annual depreciation. \n");
    scanf("%lf" , &price );
    scanf("%lf" , &service );
    scanf("%lf" , &depreciation);

    salvage_value = (price - ((depreciation)*(service)));

    printf("%lf" , salvage_value);
    return 0;
}

r