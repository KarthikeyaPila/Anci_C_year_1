 write a program which will read a string and rewrite it in the alphabetical order.

int main()
{

    char string[1000] = {0};
    printf("please write the string that you want to rewrite. \n");
    fgets(string, sizeof(string), stdin);
    int length = strlen(string);
    if (string[length - 1] == '\n')
    {
        string[length - 1] = '\0';
    }

    // bubblesort:

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (string[j] > string[j + 1])
            {
                 char a = string[j];
                string[j] = string[j + 1];
                string[j + 1] = a;
            }
        }
    }
    for(int i = 0; i < length; i++){
        printf("%c", string[i]);
    }

    return 0;
}
 r