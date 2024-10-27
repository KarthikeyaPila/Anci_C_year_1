//write a function that receives a sorted array of integers and an integer value, and inserts the value in its correct place.

#include <stdio.h>
#include <math.h>


void insert(int *arr, int length, int x){
    int *end = arr+length-1;
    while(end >= arr && *end > x){
        *(end + 1) = *end;
        end--;
    }
    *(end+1) = x;
}

int main(){
    int arr[6] = {1,2,3,5,6,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    int number = 4;

    insert(arr, length-1, number);

    printf("new number inserted: %d\n", number);
    
    for(int *ptr=arr; *ptr< *arr + length; ptr++){
        printf("%d ", *ptr);
    }
    return 0;
}