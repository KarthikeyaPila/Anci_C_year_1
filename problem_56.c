 given a string "123456789" write a program that displays:

* * * * 1
* * * 2 3 2
* * 3 4 5 4 3
* 4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5


int main()
{
    char str[] = "123456789";
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            printf(" %c", str[i + j]);
        }
        for (j = i - 1; j >= 0; j--)
        {
            printf(" %c", str[i + j]);
        }
        printf("\n");
    }

    return 0;
}
l 