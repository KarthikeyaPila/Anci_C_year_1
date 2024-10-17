 write a program to extract a portion of a character string and print the extracted string.

int main()
{

    int start, stop;
    char arr[100] = {0};
    printf("what string do you want to input? \n");
    scanf("%s", arr);
    int length = sizeof(arr) / sizeof(char);
    printf("at what index do you want to start?\n");
    scanf("%d", &start);
    printf("at what index do you want to stop?\n");
    scanf("%d", &stop);
    for (int i = start; i <= stop; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
  