// add a function to the program of exercise 11.9 that accepts two vectors as iput parameters and return the addition of the two vectors.


#include <stdio.h>
#include <string.h>
#define Max_Size 50

struct vector{
    int size;
    int value[Max_Size];
};

void create_vec(struct vector* vec){

    printf("what size is the vector?\n");
    scanf("%d", &vec->size);

    for(int i=0; i<vec->size; i++){
        printf("input value of the element [%d] ", i);
        scanf(" %d", &vec->value[i]);
    }

}


void add_vecs(struct vector* vec1, struct vector* vec2, struct vector* vec3){
    int length = vec1->size > vec2->size ? vec1->size:vec2->size;
    vec3->size = length;

    for(int i=0; i<vec3->size; i++){
        vec3->value[i] = vec1->value[i] + vec2->value[i];
    }

}

void display(struct vector* vec){
    for(int i=0; i<vec->size; i++){
        printf("el[%d] = [%d] \n", i, vec->value[i]);
    }
}

int main(){

    struct vector vec1;
    create_vec(&vec1);

    struct vector vec2;
    create_vec(&vec2);

    struct vector vec3;
    

    add_vecs(&vec1, &vec2, &vec3);

    display(&vec3);

    return 0;
}

