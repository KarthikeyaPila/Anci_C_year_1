//develop your own functions for operforming folllowing operations on strings;
// copying one string to another
// comparing two strings
// adding a string to the end of another string

#include <stdio.h>

//A
void string_copy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}


//B
int string_compare(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 - *str2; 
}

//C
void string_concatenate(char *dest, const char *src) {

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}