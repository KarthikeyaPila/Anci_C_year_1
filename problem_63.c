 Write a funcition space(x) that can be used to provide a space of x positions between two output numbers.

void space(int x){
    for(int i = 0; i < x; i++){
        printf(" ");
    }
}

int main(){
    printf("6");
    space(3);
    printf("9");
    return 0;
}
*y