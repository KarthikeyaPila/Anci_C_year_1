 Write a C program to concatenate two strings without using any string function.

int main()
{
    char string1[] = "hello there! ";
    char string2[] = "I am karthikeya.";
    int length3 = strlen(string1) + strlen(string2);
    char string3[length3 + 1];

    int i = 0;
    int j = i;

    while (j < length3)
    {
        while (string1[i] != '\0')
        {
            string3[i] = string1[i];
            i++;
            j++;
        }

        i = 0;
        while (string2[i] != '\0')
        {
            string3[j] = string2[i];
            i++;
            j++;
        }

        string3[length3] = '\0';
    }

    printf("%s", string3);
    return 0;
}
