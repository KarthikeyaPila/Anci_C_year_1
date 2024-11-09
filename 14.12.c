// write a function that counts and returns the total number ofn odes in a linked list.

#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int count(struct node *head) {
    int length=0;

    if (head == NULL) {
        return 0;
    }

    struct node *current = head;
    while (current->next != NULL) {
        length++;
    }

    return length;
}