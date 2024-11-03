//Wrie a program to read the file created in exercise 13.8 and compute and print the total value of all the five products.

#include <stdio.h>

int main() {
    FILE *fp;
    int code, cost, no_items_avlble;
    int total = 0;

    fp = fopen("Store.txt", "r");
    if (!fp) {
        perror("Error opening file");
        return 1;
    }

    fscanf(fp, "%*s %*s %*s");

    while (fscanf(fp, "%d %d %d", &code, &no_items_avlble, &cost) == 3) {
        total += cost*no_items_avlble;
    }

    fclose(fp);

    printf("Total value of all products: %d\n", total);

    return 0;
}
