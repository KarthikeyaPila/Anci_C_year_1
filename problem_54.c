 write a promgram that will copy m consecutive characters from string s1 beginning at position n to another string s2.

int main()
{

    int m, n;
    char string1[100];
    char string2[100];
    int i = 0;

    printf("what string do you want to do the operations on?\n");
    fgets(string1, 100, stdin);
    printf("at what index do you want to start the transfer?\n");
    scanf("%d", &n);
    printf("how many characters do you want to transfer?\n");
    scanf("%d", &m);
    for (int j = n; j < m + n && string1[j] != '\0'; j++)
    {
        string2[i] = string1[j];
        i++;
    }
    string2[i] = '\0';
    printf("%s", string2);
    return 0;
}
