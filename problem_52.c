 write a program to read two strings and compare them using the fxn strncmp() and print a message that
 the first string is equal, less or greater than the second one.

int main(){
    char string1[] = "hzllo";
    char string2[] = "hzz";
    int string_compare = strncmp(string1 , string2 , strlen(string1) < strlen(string2) ? strlen(string1) : strlen(string2));
    if (string_compare == 0) {
        printf("Both the strings have the same value.\n");
    } else {
        string_compare > 0 ? printf("string 1 > string 2\n") : printf("string 2 > string 1\n");
    }
    return 0;
}
