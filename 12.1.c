// Write a program using pointers to read in an array of integers and print its elements in the reverse order.

#include <stdio.h>

int integers[7] = {1,2,3,4,5,6,7};

int main(){
    int *ptr = &integers[(sizeof(integers)/sizeof(integers[0]))-1];

    for(int i=(sizeof(integers)/sizeof(integers[0]))-1; i>=0; i--){
        printf("%d ", *ptr);
        ptr--;
    }
    return 0;
}