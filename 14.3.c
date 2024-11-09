// write a recursive and non recursive functions for reversing the elements in a linear list. compare the relative efficencies of them.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

void reverse_non_recursive(Node **head) {
    Node *prev = NULL;
    Node *current = *head;
    Node *next = NULL;

    while (current != NULL) {
        next = current->next; 
        current->next = prev;  
        prev = current;        
        current = next;        
    }

    *head = prev; 
}

Node* reverse_recursive(Node* head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* new_head = reverse_recursive(head->next);

    head->next->next = head;
    head->next = NULL;
    
    return new_head;
}

void reverse_recursive_wrapper(Node** head) {
    *head = reverse_recursive(*head);
}