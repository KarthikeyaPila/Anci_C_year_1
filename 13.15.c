// Write a C program that uses fscanf function to read integer values from a file, computes the square of each integer 
// value and places the resultant values in a differenct file.

#include <stdio.h>

int main(){
    FILE *fp1 = fopen("source_integer.txt", "r");
    FILE *fp2 = fopen("targer.txt", "w");
    if(!fp1 || !fp2){
        perror("Error Opening the File");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    int c; 
    while(fscanf(fp1, "%d", &c)==1){
        fprintf(fp2, "%d ", c*c);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}