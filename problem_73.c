 write a function that can be called to compute the product of two matrices of size m by n and n by m.

void product_matrix(int m, int n, int arr_A[m][n], int arr_B[n][m], int arr_C[m][m]){
    int i,j,k;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr_C[i][j] = 0;
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            for(k=0; k<n; k++){
                arr_C[i][j] += arr_A[i][k] * arr_B[k][j];
            }
        }
    }
}

int main(){
    int A[3][3] = { 
        {2 , 2, 4 },
        {12, 2 , 0 }, 
        {12, 4 , 1 }
        };
    int B[3][3] = {
        {2 , 1, 4 },
        {12, 2 , 0 }, 
        {12, 4 , 2 }
        };

    int C[3][3];

    product_matrix (3, 3, A, B, C);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;

}
