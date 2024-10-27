// write a program to read an array of names and to sort them in alphabetical order.
// use sort function that receives pointers to the functions strcmp and swap.sort in turn should call these 
// function via pointes.

#include <stdio.h>
#include <string.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int compare(const char *a, const char *b) {
    return strcmp(a, b);
}

void sort(char **arr, int length, int (*compareFunc)(const char*, const char*), void (*swapFunc)(char**, char**)) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (compareFunc(arr[i], arr[j]) > 0) {
                swapFunc(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    char *names[100] = {"Elon", "Buffet", "Jeff", "Phanni", "Osama"};

    int count = 5;

    sort(names, count, compare, swap);

    printf("\nSorted names:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
