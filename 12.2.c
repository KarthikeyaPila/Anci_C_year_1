// write a function to calculate the roots, the function must use two pointer parameters, one to receive the coeff a, b and c, and the other
// to send the roots to the calling function.


#include <stdio.h>
#include <math.h>


void get_coeff(float *coeff){

    printf("INPUT a: ");
    scanf(" %f", &coeff[0]);
    printf("INPUT b: ");
    scanf(" %f", &coeff[1]);
    printf("INPUT c: ");
    scanf(" %f", &coeff[2]);
}

void cal_roots(float *coeff, float *roots){
    float a = coeff[0];
    float b = coeff[1];
    float c = coeff[2];
    float discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        roots[0] = (-b+sqrt(discriminant))/(2*a);
        roots[1] = (-b-sqrt(discriminant))/(2*a);
    } else if (discriminant == 0) {
        roots[0] = roots[1] = -b/(2*a);
    } else {
        roots[0] = roots[1] = NAN;
        printf("The equation has complex roots.\n");
    }
}


int main(){
float coeff[3];
float roots[2];
    get_coeff(coeff);   
    cal_roots(coeff, roots);

    if(roots[0] != NAN || roots[1] != NAN){
        printf("root1: %f\n", roots[0]);
        printf("root2: %f\n", roots[1]);
    }else {
        printf("no real roots found.\n");
    }
    return 0;
}







