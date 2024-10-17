 write a C program to input an integer between 1 and 128 and print its ascii character.

int main(){
    int integer;
    printf("input an integer between 1 and 128 \n");
    if(integer>128 & integer<1){
        printf("we're tyinna print the ascii characters you fool \n");
    return 0;
    }
    scanf("%d", &integer);
    char y = (char)(integer);
    printf("%c" , y);
    return 0;
}
< 