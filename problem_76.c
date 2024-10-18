//develop a top-down modular program that will perform the following tasks.
// a> read two integer arrays with unsorted elements.
//b> sort them in ascending order.
//c> merge the sorted arrays
//d> print the sorted list.

#include <stdio.h>
#include <string.h>
#define LENGTH_OF_ARR(arr) (sizeof(arr)/sizeof((arr)[0]))

int A[] = {5,2,45,4,53,9};
int B[] = {6,23,52,6236,12,23,21};

void sort(int array[], int length){

    for (int i=0; i<length-1; i++)
    {
        for (int j=0; j<length-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                int a = array[j];
                array[j] = array[j+1];
                array[j+1] = a;
            }
        }
    }
}


void merge(int str_1[], int str_2[], int len_1, int len_2, int str_3[]){
    int i;
    for(i=0; i<len_1; i++){
        str_3[i] = str_1[i];
    }
    for(int j=0; j<len_2; j++){
        str_3[i+j] = str_2[j];
    }
}

int main(){
    int length_A = LENGTH_OF_ARR(A);
    int length_B  = LENGTH_OF_ARR(B);
    int length_C = length_A + length_B;
    int C[length_C];
    sort(A, length_A);
    sort(B, length_B);
    merge(A, B, length_A, length_B, C);

    for(int i=0; i<length_C; i++){
        printf("%d ", C[i]);
    }
    return 0;
}