 write programs to print the following outputs using for loops. (7.5)
* * * * *
  * * * *
    * * *
      * *
        *

 int main(){

    int rows, cols, number, i = 0 , j = 0 , spaces , stars;

    printf("how many rows do you wanna make? ");
    scanf("%d" , &rows);

    for (i = 0; i < rows; i++) {
        for(spaces = 0; spaces < i; spaces++){
            printf("  ");
        }
        for(stars = 0; stars < rows - i; stars ++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;

}
