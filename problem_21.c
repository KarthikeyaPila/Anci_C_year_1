 write a prgram to read two integer values m and n and decide and print wether m is a multiple of n.

int main(){

    int m , n , multiple;
    printf("enter the two digits: m , n \n");
    scanf("%d , %d" , &m , &n);

    multiple = m%n;
    if(multiple == 0){
        printf("%d is a multiple of %d " , m , n);
    }
    else{
        printf("%d is not a multiple of %d" , m , n);
    }
    return 0;
}
