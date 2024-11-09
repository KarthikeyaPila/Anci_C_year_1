    // Write a function that takes a specified node of a linked list and makes it as its last node.

    #include <stdlib.h>

    struct node {
        int data;
        struct node *next;
    };

    void make_last(struct node **head) {
        if (*head == NULL) {
            return;
        }

        struct node *current = *head;
        struct node *end = *head;
        struct node *temp;
        int node_num;
        int length=0;

        while (end->next != NULL) {
            end = end->next;
            length++;
        }

        printf("Enter the Node number: ");
        scanf("%d", &node_num);

        if(node_num > length){
            printf("the node number exceeds the number of elements.\n");
            return;
        }

        if(node_num == 0){
            temp = *head;
            end->next = temp;
            *head = temp->next;
            temp->next=NULL;
            return;
        }

        for(int i=0; i<node_num-1; i++){
            current = current->next;
        }
        temp = current->next;

        current->next = current->next->next;


        end->next = temp;
        temp->next = NULL;

    }