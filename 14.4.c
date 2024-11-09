// write an interactive program to create linear linked lists of customer names and their telephone numbers. 
// The program should be menu driven and include features for adding and deleting customers.

#include <stdio.h>
#include <stdlib.h>

struct customer{
    char name[100];
    int number;

    struct customer *next;
};

typedef struct customer node;

void delete(node **head, int tele_number){
    if(*head == NULL){
        printf("List is empty.\n");
        return;
    }

    node *temp = *head;
    node *prev = NULL;
    if(temp != NULL && temp->number == tele_number){
        *head = temp->next; 
        free(temp);
        printf("Info of the customer with telephone number: %d has been deleted\n", tele_number);
        return;
    }

    while(temp != NULL && temp->number != tele_number){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Customer with telephone number: %d not found.\n", tele_number);
        return;
    }

    prev->next = temp->next;
    free(temp);

    printf("Info of the customer with telephone number: %d has been deleted\n", tele_number);
}

void add(node **head){
    int tele_number;
    char name[100];

    printf("Telephone Number: ");
    scanf("%d", &tele_number);
    printf("Name: ");
    scanf(" %[^\n]", name);
    

    node *new_customer = (node*)malloc(sizeof(node));
    new_customer->number = tele_number;
    new_customer->next = NULL;

    strcpy(new_customer->name, name);
    new_customer->number = tele_number;

    if (*head == NULL) {
        *head = new_customer;
    } else {
        node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_customer;
    }
    
}

void display(node *head) {
    if (head == NULL) {
        printf("No customers in the list.\n");
        return;
    }
    printf("Customer List:\n");
    while (head != NULL) {
        printf("Name: %s, Telephone Number: %d\n", head->name, head->number);
        head = head->next;
    }
}

int main() {
    node *head = NULL;
    int choice;
    int tele_number;
    char name[100];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add customer\n");
        printf("2. Delete customer\n");
        printf("3. Display all customers\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(&head);
                break;

            case 2:
                printf("Enter the telephone number to delete: ");
                scanf("%d", &tele_number);
                delete(&head, tele_number);
                break;

            case 3:
                display(head);
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

