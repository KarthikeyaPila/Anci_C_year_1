 write a program which will read a text and count all occurrences of a particular word.

int main()
{
    char sentence[1000] = {0};
    char word[100] = {0};
    int count = 0;
    printf("write the sentence for which you want to operate. \n");
    fgets(sentence, 1000, stdin);
    printf("what word do you want to count in the given sentence? \n");
    scanf("%s", word);
    int length2 = sizeof(sentence) / sizeof(char);
    int length1 = sizeof(word) / sizeof(char);

    char *token;
    token = strtok(sentence, " ,.\n;");

    while (token != NULL)
    {
        if (strcmp(token, word) == 0)
        {
            count++;
        }
        token = strtok(NULL, " ,.-\n");
    }
    printf("The word '%s' appears %d times in the given sentence.\n", word, count);
    return 0;
}
