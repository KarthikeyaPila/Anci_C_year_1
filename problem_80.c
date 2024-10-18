//write a fuction that takes an integer parameter m representing the monthi number of the year and returns the 
//name of the corrosponding month.

#include <stdio.h>
#include <string.h>

char month_name(int number, char name[50]){
    if(number == 1){
        strcpy(name,"january");
    }
    else if(number == 2){
        strcpy(name,"feb");
    }
    else if(number == 3){
        strcpy(name,"march");
    }
    else if(number == 4){
        strcpy(name,"april");
    }
    else if(number == 5){
        strcpy(name,"may");
    }
    else if(number == 6){
        strcpy(name,"june");
    }
    else if(number == 7){
        strcpy(name,"july");
    }
    else if(number == 8){
        strcpy(name,"august");
    }
    else if(number == 9){
        strcpy(name,"september");
    }
    else if(number == 10){
        strcpy(name,"october");
    }
    else if(number == 11){
        strcpy(name,"november");
    }
    else if(number == 12){
        strcpy(name,"december");
    }
}

int main(){
    printf("input the number of the month.");
    int number;
    scanf("%d", &number);
    char name[50];
    
    month_name(number, name);

    printf("%s", name);

    return 0;
}