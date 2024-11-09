// write a program to construct an ordered doubly linked list and write out the contents of a specified node.
#include <stdlib.h>
#include <stdio.h>

struct doubly{
    int value; 
    struct doubly *prev;
    struct doubly *next;
};

typedef struct doubly node;

void create(node **head);
int count(node **head);
void find_print_node(node **head);

int main(){
    node *head = (node*)malloc(sizeof(node));
    head = NULL;
    create(&head);
    count(&head);
    printf("would you like to see a specefic element? y/n ");
    char buff;
    scanf(" %c", &buff);
    if(buff == 'y'){
        find_print_node(&head);
    }
    

}

void create(node **head){
    int num;
    printf("Enter the value (-1 to stop) : ");
    scanf("%d", &num);

    if(num == -1){
        return; 
    } else {
        node *new = (node*)malloc(sizeof(node));
        new->value = num;
        new->next = NULL;
        new->prev = NULL;

        if(*head == NULL){
            *head = new;
        } else {
            node *temp = *head;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = new;
            new->prev = temp;   
        }

        create(head);        
    }
    
    return;
}

int count(node **head){
    int length=1;
    node *temp = *head;
    while(temp->next != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void find_print_node(node **head){
    node* temp = *head;
    printf("ENter the node number: ");
    int el_num;
    scanf("%d", &el_num);

    el_num = el_num%count(head);

    for(int i=0; i<el_num; i++){
        temp = temp->next;
    }
    printf("node reached.\n");
    printf("Node value: %d", temp->value);
    return;
}



