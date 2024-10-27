// write a function using pointers to add two matrices and to return the resultant matrix to the calling function.

#include <stdio.h>

    int add(int *ptr1, int m, int *ptr2, int n, int *ptr3){
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                *(ptr3+i*n+j) = *(ptr1+i*n+j) + *(ptr2+i*n+j);
            }
        }
    }


int main(){
    int m=2, n=2;
    int A[2][2] = {{1,2},
                   {3,4}};

    int B[2][2] = {{1,2},
                   {3,4}};
    int C[2][2];

    add((int *)A, m,(int *)B, n,(int*)C);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;

}