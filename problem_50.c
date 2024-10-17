 write a program that reads a string from the keyboard and determines whether the string is a palindrome or not.

int main()
{

    char string[1000] = {0};
    printf("enter the word that you think would be a palindrome. \n");
    scanf("%s", string);
    int length = 0;
    for(int x = 0; string[x] != '\0'; x++){length++;}
    int i = 0;
    int j = 0;
    do
    {
        j = length - i - 1;
        if (string[i] == string[j])
        {
            printf("this is a palindrome. \n");
            j++;
            i++;
            break;
        }
        else if (string[i] != string[j])
        {
            printf("this is not a plaindrome. \n");
            j++;
            i++;
            break;
        }
    } while (i < j);
    return 0;
}
ar