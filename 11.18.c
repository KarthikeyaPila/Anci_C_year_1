//write a C program for demonstrating operations on individual structure members using pointer notation.

#include <stdio.h>
#include <string.h>

struct example{
    int a;
    char b;
    char c[20];
    unsigned d : 32;
};

struct example ex;

void input(struct example *ex){
    ex->a = 69;
    ex->b = 'q';
    strcpy(ex->c, "hello there");
    ex->d = 1234;
}

void update(struct example *ex){
    ex->a = 96;
    ex->b = 'x';
    strcpy(ex->c, "Bye");
    ex->d = 5678;
}

void user_input(struct example *ex) {
    printf("Enter an integer: ");
    scanf("%d", &ex->a);
    
    printf("Enter a character: ");
    scanf(" %c", &ex->b);
    
    printf("Enter a string: ");
    scanf("%s", ex->c); 
    
    printf("Enter an unsigned integer for the bitfield: ");
    scanf("%u", ex->d);
}

int main(){
    input(&ex);
    printf("%d, %c, %s, %u\n", ex.a, ex.b, ex.c, ex.d);
    update(&ex);
    printf("%d, %c, %s, %u\n", ex.a, ex.b, ex.c, ex.d);
    user_input(&ex);
    printf("%d, %c, %s, %u\n", ex.a, ex.b, ex.c, ex.d);
    return 0;
}
