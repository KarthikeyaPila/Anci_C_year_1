// write a C program dthat displays the addredsses and values pointed by an array of pointers.

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *ptrArray[3]; 

    ptrArray[0] = &a;
    ptrArray[1] = &b;
    ptrArray[2] = &c;

    for (int i = 0; i < 3; i++) {
        printf("Address in ptrArray[%d]: %p\n", i, (void*)ptrArray[i]);
        printf("Value pointed by ptrArray[%d]: %d\n", i, *ptrArray[i]);
    }

    return 0;
}