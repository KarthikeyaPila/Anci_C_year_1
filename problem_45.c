 write a program to do the following: Questions and answers.

int main()
{
    char answer[100];
    int attempts = 0;
    char solution1[] = "Dennis Ritchie";
    printf("who is the inventor of C? \n");
    scanf("%c");

    while (attempts < 3)
    {
        scanf("%s", &answer);
        if (strcmp(answer, solution1) == 0)
        {
            printf("yess you are correct. \n");
        }
        else
        {
            attempts++;
            printf("you are incorrect, try again. %d\n", attempts);
        }
        if (attempts == 3)
        {
            printf("you've ran out of chances. \n");
            break;
        }
    }

    printf("The correct answer is: Dennis Ritchie. \n");
    return 0;
}
