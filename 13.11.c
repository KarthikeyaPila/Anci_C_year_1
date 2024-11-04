// Write a C program that uses file handling methods to store records of mixed data in file.

#include <stdio.h>

struct student{
    int roll;
    char name[50];
    float marks_percentage;
};

int main(){
    FILE *fp = fopen("class.txt", "a");
    if (!fp) {
        perror("Failed to open file");
        return 1;
    }
    
    char c, buff;
    struct student std;

    fseek(fp, 0, SEEK_END); 
    if (ftell(fp) == 0) {
        fprintf(fp, "ROLL   NAME        MARKS IN PERCENTAGE\n");
    }

    printf("Enter the student details: ");

    while(1){
        
        printf("Roll number: ");
        scanf("%d", &std.roll);
        printf("Name: ");
        scanf("%s", std.name);
        printf("Marks in percentage: ");
        scanf("%f", &std.marks_percentage);

        fprintf(fp, "%d     %s          %.2f\n", std.roll, std.name, std.marks_percentage);
        
        printf("do you want to enter more? y/n ");
        scanf(" %c", &buff);

        if(buff == 'n'){
            return 0;
        }

    }

    fclose(fp);
    printf("Record saved to class.txt\n");

    printf("Do you want to display the data? y/n ");
    scanf(" %c", buff);
    if(buff == 'y'){
        fp = fopen("class.txt", "r");
        while((c=getc(fp))!=EOF){
            printf("%c", c);
        }
    }

    return 0;
}