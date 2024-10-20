// Define a structure to represent a vector (a series of integer values) and write a modular program to perform the following task:
// a> to create a vector
// b> to modify the value of a given element
// c> to multiply by a scalar value
// d> to display the vector in the form (10, 20, 30...)


#include <stdio.h>
#include <string.h>

struct vector{
    int size;
    int value[];
}vec;

void create_vec(){

    printf("what size is the vector?\n");
    scanf("%d", &vec.size);

    for(int i=0; i<vec.size; i++){
        printf("input value of the element [%d]", i);
        scanf(" %d", &vec.value[i]);
    }
}

int modify(){
    printf("what element do you want to modify the vector to?\n");
    int element_no;
    scanf("%d", &element_no);
    if(element_no > vec.size){
        printf("the element no. exceeds the size of the vector\n");
        return 0;
    }
    else{
        printf("what do you want the element value to be?\n");
        int modified_value;
        scanf("%d", &modified_value);
        vec.value[element_no] = modified_value;
    }
}

void multiply(int number){

    for(int i=0; i<vec.size; i++){
        vec.value[i] *= number;
    }
}

void display(){
    for(int i=0; i<vec.size; i++){
        printf("el[%d] = [%d] \n", i, vec.value[i]);
    }
}

int main(){
    char buff = 'y';
    create_vec();
    while(buff != 'n'){
        printf("do you want to modify it? y/n\n");
        scanf(" %c", &buff);
        if(buff == 'y'){
            modify();
        }
        else continue;
    }

    printf("do you want to multiply the vector? y/n\n");
    scanf(" %c", &buff);
    if(buff == 'y'){
        printf("what integer do you want to muliply the vector with?\n");
        int number;
        scanf("%d", &number);
        multiply(number);
    }
    
    display();
}

