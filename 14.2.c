// write a menu driven program to create a linked list of a class of students and perform the following operations: 
// a> write out the contents of the list.
// b> edit the details of a specefic student.
// c> count the number of students above a specified age and weight.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll;
    char name[100];
    int age;
    int weight;
    struct student *next;
};

typedef struct student node;

void create(node *list);
int count_students_age(node *list, int argument);
int count_students_weight(node *list, int argument);
void print(node *list);
void edit_list(node *list);


int main() {
    node *head = (node*)malloc(sizeof(node));  
    if(head == NULL){
        perror("Memory allocation failed");
        return 1;
    }

    create(head);

    print(head);

    printf("Do you want to update any info? y/n ");
    char buff;
    scanf(" %c", &buff);
    if(buff == 'y'){
        edit_list(head);
    }

    printf("Do you want to count the number of students above a specified age? y/n ");
    scanf(" %c", &buff);
    if(buff == 'y'){
        printf("enter the age: ");
        int age;
        scanf("%d", &age);
        int number = count_students_age(head, age);
        printf("These many students are above the given condetion: %d", number);
    }

    printf("Do you want to count the number of students above a specified weight? y/n ");
    scanf(" %c", &buff);
    if(buff == 'y'){
        printf("enter the weight: ");
        int weight;
        scanf("%d", &weight);
        int number = count_students_age(head, weight);
        printf("These many students are above the given condetion: %d", number);
    }

    return 0;
}

void create(node *list){
    printf("Input the roll number: \n");
    printf("(Input -999 to end the task.) ");
    scanf("%d", &list->roll);

    if(list->roll == -999){
        list->next = NULL;
        return;
    }

    printf("Input the name: ");
    scanf(" %[^\n]", list->name);  

    printf("Input the age: ");
    scanf("%d", &list->age);

    printf("Input the weight: ");
    scanf("%d", &list->weight);

    list->next = (node*)malloc(sizeof(node));  
    if(list->next != NULL){
        create(list->next);  
    } 
    else{
        perror("Memory allocation failed for next node");
    }
}

int count_students_age(node *list, int argument){

    int count = 0;

    while(list->next != NULL){
        if(list->age >= argument){
            count++;
        }
        list = list->next;
    }

    return count;
}

int count_students_weight(node *list, int argument){

    int count = 0;

    while(list->next != NULL){
        if(list->age >= argument){
            count++;
        }
        list = list->next;
    }

    return count;
}

void print(node *list){
    if(list->next != NULL){

        printf("%d  |%s  |%d  |%d   \n", list->roll, list->name, list->age, list->weight);

        if(list->next->next == NULL){
            printf("\n");

        }

        print(list->next);

        return;
    }
}

void edit_list(node *list){
    printf("Enter the roll of the student: ");
    int rollz;
    scanf("%d", &rollz);

    while(list->roll != rollz && list   != NULL){
        list = list->next;
    }

    if(list->roll == rollz){
        printf("Input the name: ");
        scanf(" %[^\n]", list->name);  

        printf("Input the age: ");
        scanf("%d", &list->age);

        printf("Input the weight: ");
        scanf("%d", &list->weight);
    }
    else{
        printf("failed to get the roll number %d. \n", rollz);
    }
}

