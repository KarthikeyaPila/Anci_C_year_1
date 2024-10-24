// Write a C program that prints the size of a structure data type.

#include <stdio.h>

struct example{
    int a; 
    char b;
    long int c;
    unsigned d  : 32;
}ex;

int main(){
    printf("size: %lu", sizeof(ex));
    return 0;
}