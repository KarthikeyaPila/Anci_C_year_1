// Given an array of sorted lis tof integer numbers, write a function to search for a particular item, using the method of binary search.
// and also show how this function may be used in a program, use pointers and pointer arithmetic.

#include <stdio.h>

int binary_search(int *nums, int number, int length){
    int *ptr = nums; 
    int *end = nums + length -1;

    while(ptr <= end){
        int *mid = ptr + (end - ptr)/2;
        if(*mid > number){
            end = mid-1;
        }
        else if(*mid < number){
            ptr = mid+1;
        }       
        else if(*mid == number){
            return mid - nums;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int length = sizeof(arr)/sizeof(arr[0]);
    int target;

    printf("Enter a number to search: ");
    scanf("%d", &target);

    int result = binary_search(arr, target, length);

    if (result != -1) {
        printf("Number %d found at index %d.\n", target, result);
    } else {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}