 write a program that will count the number of occurrences of a specified character in a given line of text.

int main(){

    char text[] = "hello there! 1 2 3 , my name is karthikeya, this is a test, zoop. \n";

    int length = sizeof(text)/sizeof(char);
    char character , occurance = 0;
    printf("what character do you want to see the occurance for? \n");
    scanf("%c" , &character);

    for(int i = 0; i < length -1 ; i++){
        if(text[i] == character){
            occurance++;
        }
    }
    printf("the character: %c has occured %d number of times.\n" , character , occurance);
    return 0;
}
