// Write a C program to insert a substring into another string by using function and pointers.

#include <stdio.h>
#include <string.h>

void insert(char *str1, const char *str2, int pos) {
    char *ptr1 = str1 + pos; 
    char *ptr2 = (char *)str2;
    char *end = str1 + strlen(str1);


    while (end >= ptr1) {
        *(end + strlen(str2)) = *end; 
        end--;
    }

    while (*ptr2) {
        *ptr1++ = *ptr2++; 
    }

    *ptr1 = '\0';
}

int main() {
    char str1[100] = "Hello, World!"; 
    char str2[] = " Beautiful";    

    int position;
    printf("Enter the position to insert the substring (0 to %lu): ", strlen(str1));
    scanf("%d", &position);

    if (position < 0 || position > strlen(str1)) {
        printf("Invalid position!\n");
        return 1;
    }

    insert(str1, str2, position);

    printf("Modified string: %s\n", str1);

    return 0;
}
