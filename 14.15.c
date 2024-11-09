// write functions to implement the following tasks for a doubly linked list.
// a> to insert a node.
// b> to delete a node.
// c> to find a specified node.

#include <stdio.h>
#include <stdlib.h>

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

node* find_node(node **head){
    node* temp = *head;
    printf("ENter the node number: ");
    int el_num;
    scanf("%d", &el_num);

    el_num = el_num%count(head);

    for(int i=0; i<el_num; i++){
        temp = temp->next;
    }
    printf("node reached.\n");
    return temp;
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

void delete_node(node **head){
    node *to_be_del = find_node(head);

    if (to_be_del == NULL) {
        printf("Node not found.\n");
        return;
    }

    if(to_be_del == *head){
        *head = to_be_del->next;
    }
    if(to_be_del->next != NULL){
        to_be_del->next->prev = to_be_del->prev;  
    }
    if(to_be_del->prev !=NULL){
        to_be_del->prev->next = to_be_del->next;
    }

    free(to_be_del);
}
