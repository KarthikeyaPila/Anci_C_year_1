 write a program to display a floyd's triangle:

int main(){
    int i , j , rows, number = 1;
    printf("how many rows of floid do you want? ");
    scanf("%d", &rows);

    for(i = 1; i<=rows; i++)
    {
        for(j = 1; j <= i ; j++){
        printf("%d " , number);
        number ++;
        }
    printf("\n");
    }
}
= 