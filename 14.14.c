// write a function that computes and returns the length of a circular list.

#include <stdio.h>
    #include <stdlib.h>

struct data{
    int value;
    struct data *next;
};

typedef struct data node;

int count(node **head){
    node *temp = *head;
    int length=1;
    while(temp->next != *head){
        length++;
        temp = temp->next;
    }
    return length;
}

