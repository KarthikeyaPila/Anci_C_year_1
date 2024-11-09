    // Write a program to create a circular lined list so that the input order of data item is maintained. add function to carry out the following: 
    // a> count the number of nodes
    // b> write out contents
    // c> Locate and write the contents of a given node.

    #include <stdio.h>
    #include <stdlib.h>

    struct data{
        int value;
        struct data *next;
    };

    typedef struct data node;

    void create(node **head);
    void locate_print(node **head, int n);
    void write(node **h);
    int count(node **h);


    int main(){
        node *head = NULL;
        create(&head);
        printf("Number of nodes: %d\n", count(&head));
        write(&head);

        printf("would you like to see a specefic element? y/n ");
        char buff;
        scanf(" %c", &buff);
        if(buff == 'y'){
            int num;
            printf("What number of node? (Start = 0) ");
            scanf("%d", &num);
            locate_print(&head, num);
        }

        return 0;
    }

    void create(node **head){
        node *temp = NULL;
        int num;
        
        printf("Enter values to create a circular list (-1 to stop):\n");

        while(1){
            scanf(" %d", &num);
            if(num == -1){
                if(temp != NULL){
                    temp->next = *head;
                }
                break;
            }

            node *new = (node*)malloc(sizeof(node));
            new->value = num;
            new->next = *head;

            if(*head == NULL){
                *head = new;
            } else {
                temp->next = new;
            }

            temp = new;
        }

        return;
    }

    int count(node **head){
        node *temp = *head;
        int length=1;
        while(temp->next != *head){
            length++;
            temp = temp->next;
        }
        return length;
    }

    void locate_print(node **head, int node_num){

        node *temp = *head;

        if (*head == NULL) {
            printf("empty list");
        }

        int length = count(head);
        node_num = node_num%length;

        for(int i=0; i<node_num; i++){
            temp = temp->next;
        }

        printf("element's value: %d", temp->value);

        return;
    }

    void write(node **head){
        node *temp = *head;

        if(*head == NULL){
            printf("The list is empty.");
        }

        do{
            printf("%d --> ", temp->value);
            temp = temp->next;
        }while (temp != *head);

        printf("back to head)");

        return;
    }













