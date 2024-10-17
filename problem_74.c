 design and code an interactive modular program that will use functions to a matrix of m by n size, 
      compute the column averages and row averages, and then print the entire matrix with averages shown in
      respective rows and columns.

void row_averages(int m, int n, int arr[m][n], double row_wise_avg[m]){
    for(int i=0; i<m; i++){
        double sum = 0;

        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }

        row_wise_avg[i] = sum/n;
    }
}

void col_averages(int m, int n, int arr[m][n], double col_wise_avg[n]) {
    for (int j=0; j<n; j++){
        double sum = 0;

        for (int i=0; i<m; i++){
            sum += arr[i][j];
        }

        col_wise_avg[j] = sum / m;
    }
}

int main(){
    int arr[4][2] = {
        {3, 4},
        {4, 5},
        {6, 8},
        {9, 10}
    };

    double row_wise_avg[4] = {0};
    double col_wise_avg[2] = {0};

    row_averages(4, 2, arr, row_wise_avg);
    col_averages(4, 2, arr, col_wise_avg);

    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("|%0.1f|", row_wise_avg[i]);
        printf("\n");
    }
    for(int i=0; i<2; i++){
    printf("|%0.1f| ", col_wise_avg[i]);
    }

    return 0;
}
