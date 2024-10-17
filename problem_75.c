 develop a top-down modular program that will perform the following tasks: 
    1. read two integer arrays with unsorted elements.
    2. sort the array's separately.
    3. merge the sorted arrays.
    4. print the sorted list.

int sort_arr(int m, int arr_len, int arr[m]){
    for(int i=0; i<arr_len-1; i++){
        for(int j=0; j<arr_len-i-1; j++){
            if(arr[i] > arr[i+1]){
                int a = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = a; 
            }
        }
    }
    return arr[m];
}

int merge(int m, int n, int len_A, int len_B, int arr_A[m], int arr_B[n], int arr_C[m+n]){

    int i=0;

    for(i=0; i<m; i++){
        arr_C[i] = arr_A[i];
    }
    for(int j=0; j<n; j++){
        arr_C[i+j] = arr_B[j];
    }
    return arr_C[m+n];
}


int main(){

    int C[10] = {0};

    int A[5] = {1,2,3,4,5};
    int B[5] = {4,5,6,7,8};

    sort_arr(5, 5, A);
    sort_arr(5, 5, B);

    merge(5,5,5,5,A,B,C);

    sort_arr(10,10,C);

    for(int i=0; i<10; i++){
        printf("%d ", C[i]);
    }

    return 0;
}
nt