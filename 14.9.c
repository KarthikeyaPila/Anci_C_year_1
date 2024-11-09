// write a function that would traverse a linear singly linked list in reverse and write out the contents in reverse order.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node node;

void print_Reverse(node *head){
    if(head == NULL){
        return;
    }
    
    print_Reverse(head->next);
    printf("%d ", head->data);
    
}

void print_normal(node *list){
    if(list->next != NULL){
        printf("%d ", list->data);
    
        if(list->next->next == NULL){
            printf("%d", list->next->data);

        }
        print_normal(list->next);
        return;
    }
}

void create(node *list){
    printf("input a number: \n");
    printf("(type -999 at the end): ");
    scanf("%d", &list->data);

    if(list->data == -999){
        list->next = NULL;
    }
    else{
        list->next = (node*)malloc(sizeof(node));
        create(list->next);
    }

    return;
}

int main() {
    node* head;
    create(head);

    printf("\nList in normal order: \n");
    print_normal(head);
    printf("\nList in reverse order:\n");
    print_Reverse(head); 
    printf("\n");

    return 0;
}























