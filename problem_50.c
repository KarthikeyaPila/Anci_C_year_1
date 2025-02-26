// write a program that reads a string from the keyboard and determines whether the string is a palindrome or not.
#include <stdio.h> 

int main() {
    char string[1000] = {0};
    printf("enter the word that you think would be a palindrome. \n");
    scanf("%s", string);

    int length = 0;
    for(int x = 0; string[x] != '\0'; x++){
        length++;
    }

    int i = 0;
    int j = 0;

    int pal_bool; 

    do {
        j = length - i - 1;
        if (string[i] == string[j]){   
            pal_bool = 1;
            j--;
            i++;
        }
        else if (string[i] != string[j]){
            pal_bool = 0;
            break;
        }
    } while (i<j);

    if(pal_bool == 1) {
        printf("this is a palindrome\n");
    } else {
        printf("this is not a palindrome.\n");
    }

    return 0;
}
