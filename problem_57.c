 write a C program to cpmpare two strings without using any string function. (strncmp)

int main(){

    char string1[100];
    char string2[100];
    printf("write an input to compare, string 1: \n");
    fgets(string1 , 100 , stdin);
    printf("write an input to compare, string 2: \n");
    fgets(string2 , 100 , stdin);
    if((int)string1 == (int)string2){printf("both the strings are same" , string1 , string2);}
    else if((int)string1 != (int)string2){
    for(int i = 0; i < strlen(string1) > strlen(string2) ? strlen(string1): strlen(string2) ; i++){
        if((int)string1[i] < (int)string2[i]){printf("1. %s2. %s" , string1 , string2); break;}
        else if((int)string1[i] > (int)string2[i]){printf("1. %s2. %s" , string2 , string1); break;}
        else if((int)string1[i] == (int)string2[i]) {continue;}
    }
    }
    return 0;
}
