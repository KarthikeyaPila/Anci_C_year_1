// write a C program that uses pointers to demonstrate initialization of structure members.

#include <stdio.h>
#include <string.h>

struct students{
    char name[10];
    int roll;
    int class;
};

struct students stud1;

void update() {
    struct students *ptr = &stud1; 
    ptr->roll = 21;
    strcpy(ptr->name, "osama");
    ptr->class = 12;
}

int main(){
    update();
    printf("CLASS: %d\n", stud1.class);
    printf("ROLL: %d\n", stud1.roll);
    printf("NAME: %s\n", stud1.name);
    return 0;
}