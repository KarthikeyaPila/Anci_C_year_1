 write a program, which reads your name from the keyboard and outputs a list of ASCII codes, which represent your name.

int main()
{
    char name[100];
    printf("whats your name? \n");
    scanf("%s", &name);
    int length = sizeof(name) / sizeof(char);

    for (int i = 0; (int)name[i] > 66 && (int)name[i] < 123 || (int)name[i] == 32; i++)
    {
        printf("%d ", (int)name[i]);
    }
    return 0;
}
; 