#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.14159265358979323846
#include <assert.h>
/*write a program to display the equation of a line in the form ax + by = c , a = 5, b=8, c=18.
int main(){
printf("please input the variables a, b , c for the equation, ax + by = c. \n");
int a; int b; int c;
printf("input the first variable ""a"" ");
scanf("%d" , &a);
printf("input the second variable ""b"" ");
scanf("%d" , &b);
printf("input the thrid variable ""c"" ");
scanf("%d" , &c);
printf("the equation is: %dx + %dy = %d", a , b , c);
return 0;
}
*/

/* Write a programe to output the following multiplication table:
int main(){
    int i;
    int j;
    printf("what multiplication table do you want to have? ");
    scanf("%d", &j);
    for (int i = 1 ; i<=10; i++){
        int x = i*j;
        printf("%d\n", x);
    }
    return 0;
}
*/

/*Write a programe to output the square of the number:
int main(){
double x;
    printf("which number do you want to square? ");
    scanf("%lf", &x);
    double y = pow(x , 2);
    printf("the square of the number is: %lf\n", y);

    return 0;
}
*/

/*write a C program that reads the value of distance travelled by a car and the time taken for the same.
Next, compute the speed at which the car travelled.
int main(){
    int reading1;
    int reading2;
    int distance = reading2 - reading1;
    int time;
    printf("what was the reading before you started the journey? ");
    scanf("%d" , &reading1);
    printf("what is the current reading? ");
    scanf("%d", reading2);
    printf("you travelled: %d" , distance);
}


*/

/*int add(int a , int b){
    return a + b;}

int sub(int a , int b){
    if(a > b){return a - b;}
    else {return b-a;}
}
int main(){
    int a = 10;
    int b = 20;
    int x = add(a , b);
    int y = sub(b , a);
    printf("%d\n" , x);
  printf("%d\n" , y );
  return 0;
  }
*/

/* write a program that prints a pattern of "*".
int call_number(){printf("*     ");return 0;}

int main(){
for(int i = 1; i < 5; ++i){
    for(int j = 0; j < i; ++j){
        call_number();
    }
    printf("\n");
}
return 0;
}
*/

/*2S = a +b +c. write a program to compute the area of the triangle given the values of a b c
int main(){
    int a, b , c;
    double S, area;
    printf("what is the side length a? ");
    scanf("%d", &a);
    printf("what is the side length a? ");
    scanf("%d", &b);
    printf("what is the side length a? ");
    scanf("%d", &c);
    S = (a + b + c)/2.0;
    area = sqrt(S * (S - a) * (S - b) * (S - c));

    printf("%lf" , area);
    return 0;
}
*/

/* distance between two points in a coordinate plane:
double add( double a , double b) {
    return a + b;
}
int main(){
    //int x1 , y1 , x2, y2 ;
    double distance, x1 , y1 , x2, y2 ;
    printf("please input the coordinates , x1 and y1: ");
    scanf("%lf %lf" , &x1 , &y1 );
    printf("please input the coordinates , x2 and y2: ");
    scanf("%lf %lf" , &x2 , &y2 );
    distance = sqrt(add(pow((x1 - x2) , 2) , pow((y1 - y2), 2)));
    printf("the distance between the two points is: %lf" , distance);
    return 0;
}
*/

/*to know the perimeter and area of a circle.
    double add( double a , double b) {
    return a + b;
}
int main(){
    double distance, x1 , y1, r;
    printf("input the coordinates of the point which lies on the circle:  ");
    scanf("%lf %lf" , &x1 , &y1 );
    distance = sqrt(add(pow((x1) , 2) , pow((y1), 2)));
    printf("the radius of the circle is: %lf" , distance);
    double perimeter = 2*PI*distance;
    printf("the perimeter of the circle is: %lf" , perimeter);
    return 0;
}
*/

// CHAPTER 2 DONEE

/*write a program to determine and print the sum of the following harmonic series for a given value of n: 1 + 1/2 + 1/3 + ... 1/n

int main(){
    int number , i=1;
    float sum = 0 , fraction ;
    printf("for what integer do you want the series? \n");
    scanf("%d" , &number);
    do {
        fraction = 1.0/(float)i ;
        sum += fraction;
        i++;
    } while(i <= number);
        printf("%f", sum);
    return 0;
}
*/

/*write a program to count and print the number of negative and positive numbers in a given set of numbers.

int main(){
    int numbers[10], i=0;

    do{
        printf("give me the numbers one by one \n");
        scanf("%d" , &numbers[i]);
        i++;
    } while (i < 10);
    for (int j = 0; j < 10; j++) {
    printf("%d ", numbers[j]);}
for(i = 0 ; i < 10 ; i++){
    if(numbers[i] < 0){
    printf("this number is a negative number. \n");
    }
    if(numbers[i] > 0){
    printf("this number is a positive number. \n");
    }
    else if(numbers[i] == 0)
    {
        printf("this number is 0, exiting the process. \n");
        break;
    }
    }
    return 0;
}
*/

/*write a C program to input an integer between 1 and 128 and print its ascii character.

int main(){
    int integer;
    printf("input an integer between 1 and 128 \n");
    if(integer>128 & integer<1){
        printf("we're tyinna print the ascii characters you fool \n");
    return 0;
    }
    scanf("%d", &integer);
    char y = (char)(integer);
    printf("%c" , y);
    return 0;
}
*/

/*write a C program to input the value of days and then convert it into years, weeks and days.

int main(){
    double years, weeks, months, days;
    printf("how many days has it been? \n");
    scanf("%lf" , &days);
    years = days/365.00;
    weeks = days/7.00;
    months = days/30.00;
    printf("oh so it has been %lf years or %lf months or %lf weeks. \nnoice dudee you're still alivee!", years, months, weeks);
    return 0;
}
*/

/*write a C program to input the amount value and break it to the smalleset possible indian currency.

int main(){
    int amount, smallest;
    printf("so nigga how much money you got huh? \n");
    scanf("%d" , &amount);
    if(amount%2 == 0 ){
        smallest = amount/2;
        printf("get me %d number of coins of 2 rupees then\n" , smallest);
    }
    if(amount%5 == 0 ){
        smallest = amount/2;
        printf("get me %d number of coins of 5 rupees then\n" , smallest);
    }
    if (smallest%2 != 0 & smallest%5 != 0){
    printf("naww nigga you broke af, just keep the money lmao \n");
    }

    return 0;

}
*/

// CHAPTER 3 DONEE

/*write a program that reads a floating point number and then displays the right most digit of the integral part of the number.

int main(){
    char number[100];
    int i = 0 ;

    printf("what is the float number? \n");
    scanf("%s" , number);
    while(number[i] != '\0'){
        if(number[i] == '.'){
            printf("the rightmost digit is: %c\n" , number[i-1]);
            printf("the 2 rightmost digits of the given number are: %c%c\n" , number[i-2] , number[i-1]);
        }
        i++;
    }
    return 0;
}
*/

/*given an integer number, write a program that displays the number as follows: first line = all digits, second line = all digits except 1st digit.

int main(){
    char number[100];
    int i = 0 , length = 0 ;

    printf("what number do you choose? \n");
    scanf("%s" , number);

    while(number[i] != '\0'){
        number[length];
        length++;
        i++; }

    for(i = 0 ; i < length ; i++){
        printf("%s\n" , &number[i]);
    }
    return 0;

}
*/

/*The straight line method of computing the yearly depreciation of the value of an item is given by:

int main(){
    double price , service , depreciation , salvage_value;
    printf("write the values of: purchase price , years of service , annual depreciation. \n");
    scanf("%lf" , &price );
    scanf("%lf" , &service );
    scanf("%lf" , &depreciation);

    salvage_value = (price - ((depreciation)*(service)));

    printf("%lf" , salvage_value);
    return 0;
}
*/

/* write a program that will read a real number from the keyboard and print the following output in one line:

int main(){
    float number;
    int number_1 , number_2;
    printf("type the real number: \n");
    scanf("%f" , &number);

    // 323 , 322.342 , 322.

    number_2 = (int)number +1;

    number_1 == (int)number;

    if(number_1 > (int)(number)){
        number_1 = number + 0.1;
    }


    printf("%d , %f , %d" , (int)number_2 , number , (int)number_1);
    return 0;
}
*/

/* write a program to read a four digit integer and print the sum of its digits. use / and %.

int main() {
    int number , sum = 0;

    printf("enter the 4 digit number: ");
    scanf("%d" , &number);
    sum += number%10;
    number /= 10;
    sum += number%10;
    number /= 10;
    sum += number%10;
    number /= 10;
    sum += number%10;


    printf("%d" , sum);
    return 0;


}
*/

/* given three values , write a prgram to read three values from keybard and print out the largest of them without using the if statement.

int main(){

    int a , b , c , sort;

    printf("write the three numbers: \n");
    scanf("%d %d %d", &a , &b , &c);

    sort = (a>c) ?  (a>b ? a : b) : (c>b ? c : b) ;

    printf("%d" , sort);
    return 0;
}
*/

/* write a prgram to read two integer values m and n and decide and print wether m is a multiple of n.

int main(){

    int m , n , multiple;
    printf("enter the two digits: m , n \n");
    scanf("%d , %d" , &m , &n);

    multiple = m%n;
    if(multiple == 0){
        printf("%d is a multiple of %d " , m , n);
    }
    else{
        printf("%d is not a multiple of %d" , m , n);
    }
    return 0;
}
*/

/*the cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and above 100 calls.

int main(){
    int calls;
    float bill;

    printf("how many calls did you make? \n");
    scanf("%d" , &calls);

    if(calls > 100){
        bill = (1.25*(calls - 100)) + 250;
    }
    else{ bill = 250; }

    printf("the total is: %0.2f" , bill);

    return 0;
}
*/

// Chapter 4 DONEE

/* write a program to read the following numbers, round them off to the nearest integer and print out the result in integral form.

int main(){
float number;
int integer;

printf("what's the number? \n");
scanf("%f" , &number);

if(number - (int)number >= 0.5){ integer = (int)number +1;}
else{integer = (int)number ;}
printf("the nearest integer is: %d. " , integer);
return 0;

}
*/

/* write a program to display the folloing pattern: 5 4 3 2 1
                                                      4 3 2 1
                                                        3 2 1
                                                          2 1
                                                            1
int main() {
    int number , x = 10;
    printf("what number do you want to display the pattern for? ");
    scanf("%d" , &number);

    int original = number;
    int i = number;
    int length = 0;
    while(i>0){
        i = i/10;
        length++;
    }

    while (length > 0 )
    {
        printf("%d \n" , original%(x));
        length--;
        x *= 10;
    }
    return 0;
}
*/

// Chapter 5 Donee (not really lol)

/* wrte a program to determine whether a given number is odd or even.

int main(){
    int number;
    printf("enter the number to find out whether it's an odd or an even number: \n");
    scanf("%d" , &number);
    if(number%2 == 0){ printf("%d is an even number" , number); return 0;}
    else{printf("%d is a odd number. " , number);}
    return 0;
}

without using the else statement:

int main(){
    int number;
    printf("enter the number to find out whether it's an odd or an even number: \n");
    scanf("%d" , &number);
    number%2 == 0 ? printf("%d is an even number" , number): printf("%d is a odd number", number);
    return 0;
}
*/

/* write a program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.

int main(){
    int start, end , sum = 0, multiples;
    float num_start , num_end;
    int x ;

    printf("from where do you want the numbers to be? ");
    scanf("%d" , &start);
    printf("where do you want the numbers to end? ");
    scanf("%d" , &end);

    num_start = (float)start/7;
    num_end = (float)end/7;


    if (start % 7 == 0) {
        x = start;
    } else {
        x = (start / 7) + 1;
    }

    printf("%d" , x);

    while(7*x < end){
        sum += 7*x;
        x++;
    }


    printf("\n%d" , sum);
    return 0;

}
*/

/* //given a list of marks ranging from 0 to 100, write a program to compute and print the number of students:

int main(){
    int arr[100] = {10 , 20 , 30 , 40 , 50 , 60 , 70, 80, 90, 100, 12,45,56,34,78,13,99,24,45,69,37,35,99,75,77,54,3,2,11,33,77,88,66,55,44,33,22,};
    int a = 0 , b = 0 , c = 0 , d = 0 , e = 0  , f = 0 , g = 0 , h = 0  , i;
    for(i = 0; i<99 ; i++){
        if(arr[i] > 80 && arr[i]<=100){a++;}
        if(arr[i] > 60 && arr[i]<=100){b++;}
        if(arr[i] > 40 && arr[i]<=100){c++;}
        if(arr[i] <= 40              ){d++;}
        if(arr[i] > 80 && arr[i]<=100){e++;}
        if(arr[i] > 60 && arr[i]<= 80){f++;}
        if(arr[i] > 40 && arr[i]<= 60){g++;}
        if(arr[i] > 0 && arr[i]<=40  ){h++;}
     }

     printf("\nmore than 80 : %d" , a);
     printf("\nmore than 60 : %d" , b);
     printf("\nmore than 40 : %d" , c);
     printf("\nless than 40 : %d" , d);
     printf("\nmore than 80 less than 100 : %d" , e);
     printf("\nmore than 60 less than 80 : %d" , f);
     printf("\nmore than 40 less than 60 : %d" , g);
     printf("\nmore than 40 : %d" , h);
}
*/

/* //write a program to display a floyd's triangle:

int main(){
    int i , j , rows, number = 1;
    printf("how many rows of floid do you want? ");
    scanf("%d", &rows);

    for(i = 1; i<=rows; i++)
    {
        for(j = 1; j <= i ; j++){
        printf("%d " , number);
        number ++;
        }
    printf("\n");
    }
}
*/

/* // write a C program that inputs a string and counts the number of capital and small alphabets in that string.
int main(){
    int capital=0 , i , small=0;
    char string[100];
    printf("what is the letter that you wanna input? ");
    scanf("%s" , string);

    for(i =0; string[i] != '\0' ; i++){
        if(string[i] >= 65 && string[i] <= 90){ capital = capital + 1; }
        if(string[i] >= 97 && string[i] <= 122){ small = small + 1; }
    }

    printf("the string has %d number of capital characters. \n" , capital);
    printf("the string has %d number of small characters. \n" , small);
    return 0;
}
*/

// Chapt 6 Donee

/* //given a number, write a program using while loop to reverse the digits of the number.

int main(){
    int number;
    printf("what is the number you wanna reverse? \n");
    scanf("%d" , &number);

    while(number != 0){
        printf("%d" , number%10);
        number /= 10;
    }
    return 0;
}

*/

/* write a program to compute the sum of the digits of a given integer number.

int main(){
    int number , sum = 0;
    printf("what is the number you wanna sum up?? \n");
    scanf("%d" , &number);

    while(number != 0){
        sum = sum + number%10;
        number /= 10;
    }
    printf("the sum of all the digits of the number is: %d" , sum);
    return 0;
}
*/

/* //fibonaci sequence

int main(){
    int first = 0  , second = 1, third , end = 0 , number;
    printf("till how many digits do you wanna do the loop? ");
    scanf("%d" , &number);
    // printf("0 "); printf("1 ");
    do{
        third = second + first;
        first = second;
        second = third;
        printf("%d " , third);
        end++;
    }while(end < number);

    return 0;
}
*/

/* write programs to print the following outputs using for loops. (7.5)
* * * * *
  * * * *
    * * *
      * *
        *

 int main(){

    int rows, cols, number, i = 0 , j = 0 , spaces , stars;

    printf("how many rows do you wanna make? ");
    scanf("%d" , &rows);

    for (i = 0; i < rows; i++) {
        for(spaces = 0; spaces < i; spaces++){
            printf("  ");
        }
        for(stars = 0; stars < rows - i; stars ++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;

}
*/

/* //write a program using for and if statement to display the capital letter S in a grid of 15 rows and 18 columns as shown billow:

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
} */

/*//write a program to compute the value of euler's number e, that is used as the base of natural logarithms. use the following formula:
// e = 1 + 1/1! + 1/2! ... + 1/n!; use a suitable loop construct. the loop must end when the difference between two succesive values of e is less than 0.00001.

int main(){
    int number = 1 , factorial = 1;
    double sum = 1;
    while(number < 10){
    factorial = number*factorial;
    printf("%d \n" , factorial);
    sum = sum + 1/(double)factorial;

    number++;
    }
    printf("the value of e is: %lf" , sum);
    return 0;
}
*/

/*//write programs to evaluate the follwing:
//a> sinx = x - x^3/3! + x^5/5! - x^7/7! ...

int main(){
    double radian , progression_1 = 0 , progression_2 = 0, n = 1 , sum = 0.0, power_1 , power_2;
    int factorial = 1 , x = 0;
    printf("please input the value of x in sin(x) in RADIANS. \n");
    scanf("%lf" , &radian);

    while( x < 50 && n < 50){

        factorial = n*factorial;
        power_1 = pow(radian , ((2*n) - 1));
        power_2 = pow(radian , ((2*n) + n));
        progression_1 = progression_1 + power_1/factorial;
        progression_2 = progression_2 - power_2/factorial;

        sum = progression_1 + progression_2;
        x++;
        n++;
    }
    printf("the value of sin(%lf) is : %lf\n", radian, sum);
    return 0;
}
*/

// chapter 7 donee

/*an election is contested by 5 candidates. the candidates are numbered 1 to 5 and the voting is done by marking
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
*/


/* Pascal's triangle.

int main()
{

    int i = 0, j = 0, rows, length;
    printf("how many rows of pascal's triangle do you want? \n");
    scanf("%d", &rows);
    int pascal[rows][rows];

    for (i = 0; i < rows; i++)
    {
        pascal[i][0] = 1;

        for (j = 0; j <= i; j++)
        {

            if (j == i || j == 0)
            {
                pascal[i][j] = 1;
            }

            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }

            printf("%d ", pascal[i][j]);
        }

        printf("\n");
    }

    return 0;
}
*/


/* given are two one dimenstional arrays A and B, which are stored in ascending order. write a program to
merge them into a single sorted array C that contains every item from arrays A adn B in ascending order.
*/
/* int main(){


int A[] = {1, 2, 3, 4, 5, 6}; 
int B[] = {4 , 5, 6, 7, 8, 23, 42, 69, 535, 999};

int common = 0, lengthA = 0, lengthB = 0 , lengthC , smaller , x; 

lengthA = sizeof(A)/sizeof(A[0]);
lengthB = sizeof(B)/sizeof(B[0]);

if(lengthA < lengthB){
    for(int i = 0; i < lengthB; i++){
        for(int j = 0 ; j <= i; j++){
            if(A[i] == B[j]){common++;}
        }
    }
} else{
    for(int i = 0; i < lengthB; i++){
        for(int j = 0 ; j <= i; j++){
            if(A[i] == B[j]){common++;}
        }
    }
}

lengthC = lengthA + lengthB;

int C[lengthC];

for(int i = 0 ; i < lengthA ; i++){
    if(i < lengthA){
        
    }
}


printf("%d " , C);

    printf("\n");
    return 0;
} */
/* [CHAT GPT]:

void merge_arrays(int A[], int lengthA, int B[], int lengthB, int C[]) {
    int i = 0, j = 0, k = 0;

    // Merge arrays A and B into C
    while (i < lengthA && j < lengthB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy any remaining elements of A
    while (i < lengthA) {
        C[k++] = A[i++];
    }

    // Copy any remaining elements of B
    while (j < lengthB) {
        C[k++] = B[j++];
    }
}

int main() {
    int A[] = {1, 3, 5, 7, 9 , 10 , 23 , 50 , 1000 , 3402 ,430349};  // Example sorted array A
    int B[] = {2, 4, 6, 8, 10}; // Example sorted array B

    int lengthA = sizeof(A) / sizeof(A[0]);
    int lengthB = sizeof(B) / sizeof(B[0]);
    int lengthC = lengthA + lengthB;
    int C[lengthC];

    // Merge arrays A and B into C
    merge_arrays(A, lengthA, B, lengthB, C);

    // Print the merged and sorted array C
    printf("Merged and sorted array C: ");
    for (int i = 0; i < lengthC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
} 
*/


/*write a program that fills a five by five matrix as follows:
upper left triagnle with +1
lower right triangle with -1
right to left diagonal with 0;
Display the contents of the matrix using not more than two printf statements.


int main(){
    int matrix[5][5];
    int i, j;

    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
            if(i+j == 4){matrix[i][j] = 0;}
            else if(i + j > 4){matrix[i][j] = -1;}
            else if(i + j < 4){matrix[i][j] = +1;}
        }
    }
    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
            printf("%d " , matrix[i][j]);
        }
    printf("\n");
    }
    return 0;
}
*/


