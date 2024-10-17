 Pascal's triangle.

int main()
{

    int i = 0, j = 0, rows, length;
    printf("how many rows of pascal's triangle do you want? \n");
    scanf("%d", &rows);
    int pascal[rows][rows];

    for (i = 0; i < rows; i++)
    {
        pascal[i][0] = 1;

        for (j = 0; j <= i; j++)
        {

            if (j == i || j == 0)
            {
                pascal[i][j] = 1;
            }

            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }

            printf("%d ", pascal[i][j]);
        }

        printf("\n");
    }

    return 0;
}

 