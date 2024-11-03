// Write a program to create a sequential file that could store details about five products. Details include product code, cost and number of
// items available and are provided through keyboard.

#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("Store.txt", "w+");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int code, cost, no_items_avlble;

    fprintf(fp, "PODUCE_CODE    No.UNITS    COST\n");
    for(int i=0; i<5; i++){
        printf("Product code: ");
        scanf(" %d", &code);
        printf("Cost: ");
        scanf(" %d", &cost);
        printf("Num of items available: ");
        scanf(" %d", &no_items_avlble);

        fprintf(fp, "%d         %d          %d\n", code, no_items_avlble, cost);

    }

    fclose(fp);

    return 0;
}