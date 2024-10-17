 write a C program that inputs a string and counts the number of capital and small alphabets in that string.
int main(){
    int capital=0 , i , small=0;
    char string[100];
    printf("what is the letter that you wanna input? ");
    scanf("%s" , string);

    for(i =0; string[i] != '\0' ; i++){
        if(string[i] >= 65 && string[i] <= 90){ capital = capital + 1; }
        if(string[i] >= 97 && string[i] <= 122){ small = small + 1; }
    }

    printf("the string has %d number of capital characters. \n" , capital);
    printf("the string has %d number of small characters. \n" , small);
    return 0;
}
