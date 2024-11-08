// In worked out problem 14.4, we have used print() in recursive mode. Rewrite this function using iterative technique in for loop.

#include <stdio.h>
#include <stdlib.h>

struct linked_list{
    int number;
    struct linked_list *next; 
};

typedef struct linked_list node;

int main(){
    node *head;
    void create(node *p);
    int count(node *p);
    void new_print(node *p);
    head = (node*)malloc(sizeof(node));
    create(head);
    printf("\n");
    new_print(head);
    printf("\n");
    printf("\nNumber of items = %d \n", count(head));

    return 0;
}

void create(node *list){
    printf("input a number: \n");
    printf("(type -999 at the end): ");
    scanf("%d", &list->number);

    if(list->number == -999){
        list->next = NULL;
    }
    else{
        list->next = (node*)malloc(sizeof(node));
        create(list->next);
    }

    return;
}

void print(node *list){
    if(list->next != NULL){
        printf("%d-->", list->number);
    
        if(list->next->next == NULL){
            printf("%d", list->next->number);

        }
        print(list->next);
        return;
    }
}

void new_print(node *list) {
    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        if (ptr->next != NULL) {
            printf("%d-->", ptr->number);
        } else {
            printf("%d", ptr->number);
        }
    }
    printf("\n");
}



int count(node *list){
    if(list->next == NULL){
        return 0;
    }
    else{
        return(1 + count(list->next));
    }
}