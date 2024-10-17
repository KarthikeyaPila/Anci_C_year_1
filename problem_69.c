 write a function that will scan a character string passed as an argument and 
convert all lowercase character to uppercase characters.

void lwr_to_upr(char arr[]){

    for(int i=0; i<strlen(arr); i++){
        if(arr[i]>96 && arr[i]<123){
            arr[i] = arr[i] - 32;
        }
    }
}

int main(){

    char str[] = "abcdefghijklmnopqrstuvwxyz";
    lwr_to_upr(str);
    printf("%s", str);

}
0;