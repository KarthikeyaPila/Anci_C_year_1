// write a program that invokes a fxh called find() to perform the following tasks:
// a> recieves a character array and a single character
// b> returns 1 if the specified character is found in the array, 0 otherwise.

#include <stdio.h>
#include <string.h>

int find(char arr[], char character, int arrlen){
    
    char A = character;
    for(int i=0; i<arrlen; i++){
        if((char)arr[i] == A){
            return 1;
            break;
        }
    }
    return 0;
}

int main(){
    char arr[] = "hello there nigga";
    char character = 'o';

    int arrlen = sizeof(arr)/sizeof(arr[0]);

    int result = find(arr, character, arrlen);

    if(result == 1){
        printf("character found");
    }
    else if(result == 0){
        printf("character not found");
    }
    return 0;
}