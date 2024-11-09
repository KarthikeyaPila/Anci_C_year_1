// write a function taht takes a pointer to the first node in a linked list as a parameter and returns a pointer to the last node.
// NULL should be returned if the list is empty.

#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* find_last(struct node *head) {
    if (head == NULL) {
        return NULL;
    }

    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    return current;
}
