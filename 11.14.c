// Define a structure called cricket that will describe the following information:
// player name
// team name 
// battting average
// using cricket declare an array player with 50 elements and write a program to read the information about all the
// 50 players and print a team wise list containing names of players with their batting average.

#include <stdio.h>
#include <string.h>

struct cricket {
    char player_name[50];
    char team_name[50];
    float batting_average;
};

struct cricket player[50];  


void read_player_info() {
    for (int i = 0; i < 50; i++) {
        printf("Enter details for player %d:\n", i+1);
        
        printf("Enter player name: ");
        scanf(" %[^\n]%*c", player[i].player_name); 
        
        printf("Enter team name: ");
        scanf(" %[^\n]%*c", player[i].team_name);
        
        printf("Enter batting average: ");
        scanf("%f", &player[i].batting_average);
        
        printf("\n");
    }
}

void print_team_wise_list() {
    for (int i = 0; i < 50; i++) {
        for (int j = i + 1; j < 50; j++) {
            if (strcmp(player[i].team_name, player[j].team_name) > 0) {
                struct cricket temp = player[i];
                player[i] = player[j];
                player[j] = temp;
            }
        }
    }

    printf("Team-wise list of players:\n");
    for (int i = 0; i < 50; i++) {
        printf("Team: %s, Player: %s, Batting Average: %.2f\n", player[i].team_name, player[i].player_name, player[i].batting_average);
    }
}

int main() {
    read_player_info();
    
    print_team_wise_list();

    return 0;
}