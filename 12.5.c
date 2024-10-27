// using pointers, write a function that receives a character string and a character as argument and deletes all occurrences of this charater in the string.
// the function should return the corrected string. 

#include <stdio.h>
#include <string.h>

void delete(char str[], int length, char character){
    char *ptr1 = str;
    char *ptr2 = str;

    while(*ptr1 != '\0'){
        if(*ptr1 != character){
            *ptr2 = *ptr1;
            ptr2++;
        }
        *ptr1++;
    }
    *ptr2 = '\0';
}

int main(){
    char str[] = "hello there i am karthikeya";
    int length = strlen(str);
    printf("Original string: %s \n", str);
    delete(str, length, 'a');
    printf("Modified string: %s \n", str);
    return 0;
}
