// write a function(using pointer parameters) that compares two integer arrays to see whether they are identical.
// the function return 1 if they are identical and 0 otherwise.

#include <stdio.h>

int compare(int *num1, int *num2, int len1, int len2){
    if(len1 != len2){
        return 0;
    }
    int *ptr1 = num1;
    int *ptr2 = num2;

    int i = 0;
    while(i != len1){
        if(*ptr1 != *ptr2){
            return 0;
        }
        ptr1++;
        ptr2++;
        i++;
    }
    return 1;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4, 6};

    int result1 = compare(arr1, arr2, 5, 5);
    int result2 = compare(arr1, arr3, 5, 5);
    
    printf("arr1 and arr2 are equal: %s\n", result1 ? "true" : "false");
    printf("arr1 and arr3 are equal: %s\n", result2 ? "true" : "false");

    return 0;
}