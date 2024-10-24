// define a structure that can describe an hotel. It should have members that include the name, address, grade, average room charge
// and number of rooms.
// write a function to perform the following operations:
// a> to print out hotels of a given grade in order of charges.
// b> to print out the hotels with room charges less than a given value.

#include <stdio.h>
#include <string.h>

struct Hotel{
    char name[32];
    char address[64];
    int grade;
    int charge;
    int number_rooms;
};

struct Hotel hotel[5]; 

void create(){
    
    //hotel_1
    strcpy(hotel[0].name, "hotel 1 ");
    strcpy(hotel[0].address, "Vizag ");
    hotel[0].grade = 5;
    hotel[0].charge = 100;
    hotel[0].number_rooms = 20;

    //hotel_2
    strcpy(hotel[1].name, "hotel 2 ");
    strcpy(hotel[1].address, "Mumbai ");
    hotel[1].grade = 5;
    hotel[1].charge = 200;
    hotel[1].number_rooms = 30;

    //hotel_3
    strcpy(hotel[2].name, "hotel 3 ");
    strcpy(hotel[2].address, "Delhi ");
    hotel[2].grade = 5;
    hotel[2].charge = 300;
    hotel[2].number_rooms = 40;

    //hotel_4
    strcpy(hotel[3].name, "hotel 4 ");
    strcpy(hotel[3].address, "Bhubneshwar ");
    hotel[3].grade = 5;
    hotel[3].charge = 400;
    hotel[3].number_rooms = 50;

    //hotel_5
    strcpy(hotel[4].name, "hotel 5 ");
    strcpy(hotel[4].address, "Jaipur ");
    hotel[4].grade = 5;
    hotel[4].charge = 500;
    hotel[4].number_rooms = 60;

}

void charge_sort(){
    int n = sizeof(hotel)/sizeof(hotel[0]);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(hotel[i].charge > hotel[j].charge){
                struct Hotel temp;
                temp = hotel[i];
                hotel[i] = hotel[j];
                hotel[j] = temp;
            }
        }
    }
}

void print_hotel(struct Hotel hotel){
        printf("name: %s, address: %s, grade: %d, charge per night: %d, available rooms: %d \n", hotel.name, hotel.address, hotel.grade, hotel.charge, hotel.number_rooms);
}

void Budget(int max_budget){
    charge_sort();

    for(int i=0; i<sizeof(hotel)/sizeof(hotel[0]); i++){
        if(hotel[i].charge <= max_budget){
            print_hotel(hotel[i]);
        }
    }
}

int main(){
    create();
    char buff;

    printf("do you want to sort it in terms of price? y/n ");
    scanf(" %c", &buff);
    if(buff == 'y'){
        charge_sort();
        for(int i=0; i<sizeof(hotel)/sizeof(hotel[0]); i++){
        printf("name: %s, address: %s, grade: %d, charge per night: %d, available rooms: %d \n", hotel[i].name, hotel[i].address, hotel[i].grade, hotel[i].charge, hotel[i].number_rooms);
        }
    }

    int budget;
    printf("do you want to separate the ones in your budget? y/n ");
    scanf(" %c", &buff);
    if(buff == 'y'){
        printf("how much is your budget? ");
        scanf(" %d", &budget);
        Budget(budget);
    }
}



