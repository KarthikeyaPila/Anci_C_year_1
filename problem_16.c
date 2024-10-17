 given an integer number, write a program that displays the number as follows: 
    first line = all digits, second line = all digits except 1st digit.

int main(){
    char number[100];
    int i = 0 , length = 0 ;

    printf("what number do you choose? \n");
    scanf("%s" , number);

    while(number[i] != '\0'){
        number[length];
        length++;
        i++; }

    for(i = 0 ; i < length ; i++){
        printf("%s\n" , &number[i]);
    }
    return 0;

}
r[