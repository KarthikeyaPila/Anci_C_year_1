// Develop a program to combine two sorted lists to produce a third sorted list which contains one occurrence of each of
// the elements in the original list.

#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insert_sorted(struct node **head, int value) {
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    if (*head == NULL || (*head)->data >= value) {
        new_node->next = *head;
        *head = new_node;
    } else {
        struct node *current = *head;
        while (current->next != NULL && current->next->data < value) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

struct node* merge(struct node *head1, struct node *head2) {
    struct node *merged= NULL;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            insert_sorted(&merged, head1->data);
            head1 = head1->next;
        } else if (head2->data < head1->data) {
            insert_sorted(&merged, head2->data);
            head2 = head2->next;
        } else { 
            insert_sorted(&merged, head1->data);
            head1 = head1->next;
            head2 = head2->next;
        }
    }

    while (head1 != NULL) {
        insert_sorted(&merged, head1->data);
        head1 = head1->next;
    }

    while (head2 != NULL) {
        insert_sorted(&merged, head2->data);
        head2 = head2->next;
    }

    return merged;
}