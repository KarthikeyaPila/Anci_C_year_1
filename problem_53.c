 write a program to read a line of text from the keybard and print out the number of occurrences of a
  given substring using the function strstr().

int main()
{

    char string[] = "hello, i am karthikeya, i am a student, i am doin good.";
    char *substring;
    char word[100];
    int count = 0;
    printf("what word do you want to find the occurrence for?\n");
    scanf("%s", word);
    substring = strstr(string , word);
        while (substring != NULL)
        {
            count++;
            substring = strstr(substring + 1, word);
        }
        printf("the word: %s had occured %d number of times.", word, count);

    return 0;
}
