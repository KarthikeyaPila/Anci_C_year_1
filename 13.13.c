// write a C program that reads characters from a file and prints their ASCII codes.

#include <stdio.h>

int main(){
    FILE *fp1 = fopen("source.txt", "r");
    FILE *fp2 = fopen("target.txt", "w");
    if (!fp1 || !fp2) {
        perror("Error opening file");
        return 1;
    }

    char c; 
    while((c=getc(fp1))!=EOF){
        fprintf(fp2, "%d ", (int)c);
    }

    fclose(fp1);
    fclose(fp2);
    
    return 0;
}