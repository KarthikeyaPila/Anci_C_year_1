// Define a structre named census with the following three members:
// a> a character array city[ ] to store names
// b> a long integer to store the population of the city
// c> a float member to sotre the literacy level
// 
// write a program to do the folloing:
// a> to read details for 5 cities randomly using an array variable
// b> to sort the list alphabetically
// c> to sort the list based on literacy level
// d> to sort the list based on population
// e> to display sorted lists.


#include <stdio.h>
#include <string.h>

struct census{
    char city[50];
    long int population;
    float literacy;
};

struct census cities[5];

void read(){
    for(int i=0; i<5; i++){
        printf("enter the %d citie's name: ", i+1);
        scanf(" %s", cities[i].city);
        printf("enter it's population: ");
        scanf(" %li", &cities[i].population);
        printf("enter the literacy rate of the city: ");
        scanf(" %f", &cities[i].literacy);
    }
}

void sort_name(){
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(strcmp(cities[i].city , cities[j].city) > 0){
                struct census temp;
                temp = cities[i];
                cities[i] = cities[j];
                cities[j] = temp;
            }
        }
    }
}

void sort_literacy(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(cities[i].literacy > cities[j].literacy){
                struct census temp; 
                temp = cities[i];
                cities[i] = cities[j];
                cities[j] = temp;
            }
        }
    }
}

void sort_population(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(cities[i].population > cities[j].population){
                struct census temp; 
                temp = cities[i];
                cities[i] = cities[j];
                cities[j] = temp;
            }
        }
    }
}

int main() {
    
    read(cities);

    printf("Details of entered cities:\n");
    for(int i=0; i<5; i++) {
        printf("City: %s, Population: %ld, Literacy Level: %.2f%%\n", cities[i].city, cities[i].population, cities[i].literacy);
    }

    char buffer;
    printf("do you want to sort the data alphabetically? y/n: ");
    scanf(" %c", &buffer);
    if(buffer == 'y'){
        sort_name();
        printf("Here's the sorted list: \n");
        for(int i=0; i<5; i++) {
            printf("City: %s, Population: %ld, Literacy Level: %.2f%%\n", cities[i].city, cities[i].population, cities[i].literacy);
        }
    }

    printf("do you want to sort the data on the basis of literacy? y/n: ");
    scanf(" %c", &buffer);
    if(buffer == 'y'){
        sort_literacy();
        printf("Here's the sorted list: \n");
        for(int i=0; i<5; i++) {
            printf("City: %s, Population: %ld, Literacy Level: %.2f%%\n", cities[i].city, cities[i].population, cities[i].literacy);
        }
    }

    printf("do you want to sort the data on the basis of population? y/n: ");
    scanf(" %c", &buffer);
    if(buffer == 'y'){
        sort_literacy();
        printf("Here's the sorted list: \n");
        for(int i=0; i<5; i++) {
            printf("City: %s, Population: %ld, Literacy Level: %.2f%%\n", cities[i].city, cities[i].population, cities[i].literacy);
        }
    }

    return 0;
}