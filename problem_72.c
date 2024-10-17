 write a function that can be called to find the largest element of an m by n matrix.

int largest_element(int m, int n, int arr[m][n]){
    int i=0, j;
    int element, larger_element = arr[0][0];

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            element = arr[i][j];
        if(element > larger_element){
            larger_element = element;
            }
        }

    }
    return larger_element;
}

int main(){

    int num_arr[3][3] = {{2, 13, 4 },
                        {12, 2, 0  }, 
                        {12, 4, 123}
                        };

    printf("%d", largest_element(3, 3, num_arr));
    return 0;
}
