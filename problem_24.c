 write a program to display the folloing pattern: 5 4 3 2 1
                                                      4 3 2 1
                                                        3 2 1
                                                          2 1
                                                            1
int main() {
    int number , x = 10;
    printf("what number do you want to display the pattern for? ");
    scanf("%d" , &number);

    int original = number;
    int i = number;
    int length = 0;
    while(i>0){
        i = i/10;
        length++;
    }

    while (length > 0 )
    {
        printf("%d \n" , original%(x));
        length--;
        x *= 10;
    }
    return 0;
}
