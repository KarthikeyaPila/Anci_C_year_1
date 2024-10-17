 write a program to replace a particular word by another word in a given string.

void remove_newline(char* str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main()
{
    char string[1000] = {0};
    char change_word[1000] = {0};
    char new_word[1000] = {0};

    printf("give me the string that you want to change.\n");
    fgets(string, sizeof(string), stdin);
    remove_newline(string);
    printf("tell me which word do you want to change? \n");
    fgets(change_word, sizeof(change_word), stdin);
    remove_newline(change_word);
    printf("what do you want the chosen word to change to? \n");
    fgets(new_word, sizeof(new_word), stdin);
    remove_newline(new_word);

    char *change;
    change = strstr(string, change_word);
    if (change != NULL)
    {
        size_t len_before = change - string;
        size_t len_change_word = strlen(change_word);
        size_t len_new_word = strlen(new_word);

        char result[1000] = {0};

        strncpy(result, string, len_before);


        strcat(result, new_word);


        strcat(result, change + len_change_word);


        printf("Modified string: %s\n", result);
        }

        else{printf("%s", string);}
        return 0;
}
