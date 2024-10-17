 Write a programe to output the following multiplication table:
int main(){
    int i;
    int j;
    printf("what multiplication table do you want to have? ");
    scanf("%d", &j);
    for (int i = 1 ; i<=10; i++){
        int x = i*j;
        printf("%d\n", x);
    }
    return 0;
}
*