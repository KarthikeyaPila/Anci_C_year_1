// create two structures named metric and british which stores the values of distances. the metric structure
//stores the values in metres and centimetres and the british structure stores the values in feet and inces.
// write a program that reads tthe values for the structure variables and adds the values contained in one 
// variable of metric to that contents of aother variable of British. The program should display the result
// int the format of feet and inches or meters and centimetres as required.


#include <stdio.h>
#include <string.h>


struct Metric{
    float metre;
    float centimetre;
}metric;

struct British{
    float feet;
    float inches;
}british;

void met_to_bri(struct Metric* metric){
    // 1 met = 3.28 feet.
    metric->metre *= 3.28;
    metric->centimetre *= 0.3937;
}

void bri_to_met(struct British* british){
    // 1 foot = 0.3048 meter.
    british->feet *= 0.3048;
    british->inches *= 2.54;
}

void add_to_bri(struct Metric* metric, struct British* british){
    met_to_bri(metric);

    british->feet += metric->metre; 
    british->inches += metric->centimetre;
}

void add_to_met(struct Metric* metric, struct British* british){
    met_to_bri(british);

    metric->metre += british->feet;
    metric->centimetre += british->inches;
}

int main() {
    struct Metric metric;
    struct British british;

    printf("Enter the distance in Metric (metres and centimetres):\n");
    printf("Metres: ");
    scanf("%f", &metric.metre);
    printf("Centimetres: ");
    scanf("%f", &metric.centimetre);

    printf("Enter the distance in British (feet and inches):\n");
    printf("Feet: ");
    scanf("%f", &british.feet);
    printf("Inches: ");
    scanf("%f", &british.inches);

    char choice;
    printf("Do you want to add metric to british or british to metric? (m/b): ");
    scanf(" %c", &choice);

    if (choice == 'm') {
        add_to_bri(&metric, &british);
        printf("Result in British: %.2f feet and %.2f inches\n", british.feet, british.inches);
    } else if (choice == 'b') {
        add_to_met(&metric, &british);
        printf("Result in Metric: %.2f metres and %.2f centimetres\n", metric.metre, metric.centimetre);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}



