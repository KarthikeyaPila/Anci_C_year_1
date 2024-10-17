 write a C program to replace all the white spaces in a string with double white spaces.

int main(){

    char string[100];
    printf("enter a string. \n");
    fgets(string, sizeof(string) , stdin);

    char* token;
    token = strtok(string , " ");

    while(token != NULL){
        printf("%s  " , token);
        token = strtok(NULL , " ");
    }
    return 0;
}
  