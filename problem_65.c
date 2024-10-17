 an n_order polynomial can be evaluated as follows: P = (((a0x + a1)x + a2)x + a3 ....)

int function(int x, int n, int arr[]){

    double result = arr[0];

    for (int i = 1; i <= n; i++){
        result = result * x + arr[i];
    }
    return result;
}

int main(){
    int arr[] = {1, 1, 1 , 1 , 1 , 1};
    printf("%d", function(1, 3, arr));
    return 0;
}
;
