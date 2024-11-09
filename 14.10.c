// Given two ordered singly linked lists, write a function that will merge them into a third ordered list.

#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *next;
};

void print_list(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct node* merge(struct node *head1, struct node *head2) {
    struct node *dummy = (struct node*)malloc(sizeof(struct node));
    struct node *current = dummy;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            current->next = head1;
            head1 = head1->next;
        } else {
            current->next = head2;
            head2 = head2->next;
        }
        current = current->next;
    }

    if (head1 != NULL) {
        current->next = head1;
    } else {
        current->next = head2;
    }

    struct node *merged = dummy->next;
    free(dummy); 
    return merged;
}

int main() {
    struct node *list1 = NULL;
    struct node *list2 = NULL;

    list1 = (struct node*)malloc(sizeof(struct node));
    list1->data = 1;
    list1->next = (struct node*)malloc(sizeof(struct node));
    list1->next->data = 3;
    list1->next->next = (struct node*)malloc(sizeof(struct node));
    list1->next->next->data = 5;
    list1->next->next->next = NULL;

    list2 = (struct node*)malloc(sizeof(struct node));
    list2->data = 2;
    list2->next = (struct node*)malloc(sizeof(struct node));
    list2->next->data = 4;
    list2->next->next = (struct node*)malloc(sizeof(struct node));
    list2->next->next->data = 6;
    list2->next->next->next = NULL;

    struct node *merged_list = merge(list1, list2);
    print_list(merged_list);  

    return 0;
}