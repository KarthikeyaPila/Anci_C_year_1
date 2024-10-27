//write a C program that uses the pointer increment operations to demonstrate the scale factor

#include <stdio.h>

void scale(){
    
}

int main(){
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    char arr[10] = {"helloworld"};
    double var[10] = {12.3, 13.4, 2.23};
    int *intptr = num;
    char *charptr = arr;
    double *doubleptr = var;

    printf("address of int before: %u \n", (void *)intptr); 
    printf("address of char before: %u \n",(void *)charptr); 
    printf("address of double before: %u \n", (void *)doubleptr); 

    *intptr++;
    *charptr++;
    *doubleptr++;

    printf("address of int after: %u \n",  (void *)intptr); 
    printf("address of char after: %u \n",  (void *)charptr); 
    printf("address of double after: %u \n",  (void *)doubleptr);
    return 0;
}