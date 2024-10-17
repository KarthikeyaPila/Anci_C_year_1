 write a program that reads the cost of an item in the form RRRR.PP where R denotes rupees and P denotes paisa,


int main(){

    char number[7];
    char word_number[100] = "";
    printf("enter a number in the format RRRR.PP where R denotes rupees and P denotes paisa. \n");
    scanf("%7s" , number);
    int length = 0;
    length = sizeof(number)/sizeof(char);

    if(number[4] != '.'){printf("the given number is not in the required form."); return 0;}

    for(int i = 0; i < length; i++){
        if(i == 0){
        if(number[i] == '0'){strcat(word_number , "");}
        if(number[i] == '1'){strcat(word_number , "ONE THOUSAND ");}
        if(number[i] == '2'){strcat(word_number , "TWO THOUSAND ");}
        if(number[i] == '3'){strcat(word_number , "THREE THOUSAND ");}
        if(number[i] == '4'){strcat(word_number , "FOUR THOUSAND ");}
        if(number[i] == '5'){strcat(word_number , "FIVE THOUSAND ");}
        if(number[i] == '6'){strcat(word_number , "SIX THOUSAND ");}
        if(number[i] == '7'){strcat(word_number , "SEVEN THOUSAND ");}
        if(number[i] == '8'){strcat(word_number , "EIGHT THOUSAND ");}
        if(number[i] == '9'){strcat(word_number , "NINE THOUSAND ");}
    }
        if(i == 1){
        if(number[i] == '0'){strcat(word_number , "zero ");}
        if(number[i] == '1'){strcat(word_number , "ONE HUNDRED ");}
        if(number[i] == '2'){strcat(word_number , "TWO HUNDRED ");}
        if(number[i] == '3'){strcat(word_number , "THREE HUNDRED ");}
        if(number[i] == '4'){strcat(word_number , "FOUR HUNDRED ");}
        if(number[i] == '5'){strcat(word_number , "FIVE HUNDRED ");}
        if(number[i] == '6'){strcat(word_number , "SIX HUNDRED ");}
        if(number[i] == '7'){strcat(word_number , "SEVEN HUNDRED ");}
        if(number[i] == '8'){strcat(word_number , "EIGHT HUNDRED ");}
        if(number[i] == '9'){strcat(word_number , "NINE HUNDRED ");}
    }    if(i == 2){
        if(number[i] == '0'){strcat(word_number , "zero");}
        if(number[i] == '1'){strcat(word_number , "ONE ");}
        if(number[i] == '2'){strcat(word_number , "TWENTY ");}
        if(number[i] == '3'){strcat(word_number , "THIRTY ");}
        if(number[i] == '4'){strcat(word_number , "FOURTY ");}
        if(number[i] == '5'){strcat(word_number , "FIFTY ");}
        if(number[i] == '6'){strcat(word_number , "SIXTY ");}
        if(number[i] == '7'){strcat(word_number , "SEVENTY ");}
        if(number[i] == '8'){strcat(word_number , "EIGHTTY ");}
        if(number[i] == '9'){strcat(word_number , "NINETY ");}
    }    if(i == 3){
        if(number[i] == '0'){strcat(word_number , "zero");}
        if(number[i] == '1'){strcat(word_number , "ONE ");}
        if(number[i] == '2'){strcat(word_number , "TWO ");}
        if(number[i] == '3'){strcat(word_number , "THREE ");}
        if(number[i] == '4'){strcat(word_number , "FOUR ");}
        if(number[i] == '5'){strcat(word_number , "FIVE ");}
        if(number[i] == '6'){strcat(word_number , "SIX ");}
        if(number[i] == '7'){strcat(word_number , "SEVEN ");}
        if(number[i] == '8'){strcat(word_number , "EIGHT ");}
        if(number[i] == '9'){strcat(word_number , "NINE ");}

        if(number[4] == '.'){ strcat(word_number , "AND ");}

    }   if(i == 5){
        if(number[i] == '0'){strcat(word_number , "zero");}
        if(number[i] == '1'){strcat(word_number , "ONE ");}
        if(number[i] == '2'){strcat(word_number , "TWO ");}
        if(number[i] == '3'){strcat(word_number , "THREE ");}
        if(number[i] == '4'){strcat(word_number , "FOUR ");}
        if(number[i] == '5'){strcat(word_number , "FIVE ");}
        if(number[i] == '6'){strcat(word_number , "SIX ");}
        if(number[i] == '7'){strcat(word_number , "SEVEN ");}
        if(number[i] == '8'){strcat(word_number , "EIGHT ");}
        if(number[i] == '9'){strcat(word_number , "NINE ");}
    }   if(i == 6){
        if(number[i] == '0'){strcat(word_number , "zero");}
        if(number[i] == '1'){strcat(word_number , "ONE ");}
        if(number[i] == '2'){strcat(word_number , "TWO ");}
        if(number[i] == '3'){strcat(word_number , "THREE ");}
        if(number[i] == '4'){strcat(word_number , "FOUR ");}
        if(number[i] == '5'){strcat(word_number , "FIVE ");}
        if(number[i] == '6'){strcat(word_number , "SIX ");}
        if(number[i] == '7'){strcat(word_number , "SEVEN ");}
        if(number[i] == '8'){strcat(word_number , "EIGHT ");}
        if(number[i] == '9'){strcat(word_number , "NINE ");}

    }
    }

    printf("%s" , word_number);

    return 0;

}
