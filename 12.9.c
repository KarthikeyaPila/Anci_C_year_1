// write a function(using a pointer parameter) that reverses the elements of a given array.

#include <stdio.h>

void reverse(int *nums, int length){
    int *ptr = nums;
    int *end = nums + length -1;
    int temp = *end;
    for(int i=0; i<length/2; i++){
        temp = *ptr;
        *ptr = *end;
        *end = temp;
        ptr++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, length); 

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}