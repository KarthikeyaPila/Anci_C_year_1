//write a C program that prints the size of a structure and a union data type that have same number and type of members.

#include <stdio.h>

struct example_struct {
    int a;
    char b;
    float c;
};

union example_union {
    int a;
    char b;
    float c;
};

int main() {
    printf("Size of structure: %lu bytes\n", sizeof(struct example_struct));
    printf("Size of union: %lu bytes\n", sizeof(union example_union));
    
    return 0;
}

