//Write a program to copy the contents of one file to another.

#include <stdio.h>


int main(){

    FILE *fp = fopen("12.5.c", "r");
    FILE *p2 = fopen("File12.c", "w");

    char c;
    
    while((c=getc(fp))!=EOF){
        putc(c, p2);
    }

    fclose(fp);
    fclose(p2);

    return 0;
}