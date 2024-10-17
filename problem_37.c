 an election is contested by 5 candidates. the candidates are numbered 1 to 5 and the voting is done by marking
the candidate number of the ballot paper. write a program to read the ballots and count the votes cast for each
candidate using an array variable "count". in case, a number read is outside the range 1 to 5, the ballot should
be considered as a "spoilt" ballot and the program should also count the number of spoilt ballots

int main(){

    int count[5] = {0 , 0 , 0 , 0 , 0};
    int votes, i , spoilt = 0, ballot;

    printf("how many people are giving the voes? \n");
    scanf("%d" , &votes);

    for(i = 0; i < votes; i++){

    printf("enter a ballot number from 1 to 5: \n");
    scanf("%d" , &ballot);

        if(ballot >= 1 && ballot <=5){

            count[ballot -1 ]++;

        }
        else{ spoilt ++; }
    }
    printf("1 has %d votes. \n" , count[0]);
    printf("2 has %d votes. \n" , count[1]);
    printf("3 has %d votes. \n" , count[2]);
    printf("4 has %d votes. \n" , count[3]);
    printf("5 has %d votes. \n" , count[4]);
    printf("there are %d spoilt ballots \n"  , spoilt);

    return 0;
}
