 write a program using for and if statement to display the capital letter S in a grid of 
    15 rows and 18 columns as shown billow:

int main(){
    int i, j , stars, dash;

    for(i=0; i <19 ; i++){
        printf("* ");
    }
    printf("\n");
    for(i = 0; i< 19; i++){
        if( i > 2 && i<17){
            printf("_");
        }
        if(i < 3 && i>16){printf("* ");}
    }

    return 0;
}  =