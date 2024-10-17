 given three values , write a prgram to read three values from keybard and print out the largest of them without using 
    the if statement.

int main(){

    int a , b , c , sort;

    printf("write the three numbers: \n");
    scanf("%d %d %d", &a , &b , &c);

    sort = (a>c) ?  (a>b ? a : b) : (c>b ? c : b) ;

    printf("%d" , sort);
    return 0;
}
%d