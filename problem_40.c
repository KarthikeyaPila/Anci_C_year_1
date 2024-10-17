 write a program that fills a five by five matrix as follows:
upper left triagnle with +1
lower right triangle with -1
right to left diagonal with 0;
Display the contents of the matrix using not more than two printf statements.

int main(){
    char matrix[5][5];
    int i, j;

    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
            if(i+j == 4){matrix[i][j] = "0";}
            else if(i + j > 4){matrix[i][j] = "-1";}
            else if(i + j < 4){matrix[i][j] = "+1";}
        }
    }
    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
            printf("%c " , matrix[i][j]);
        }
    printf("\n");
    }
    return 0;
}
 e