#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define PI 3.14159265358979323846
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

/* Write a programe to output the square of the number:
int main(){
double x;
    printf("which number do you want to square? ");
    scanf("%lf", &x);
    double y = pow(x , 2);
    printf("the square of the number is: %lf\n", y);

    return 0;
}
*/

/* write a C program that reads the value of distance travelled by a car and the time taken for the same.
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

/* int add(int a , int b){
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

/* 2S = a +b +c. write a program to compute the area of the triangle given the values of a b c
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

/* to know the perimeter and area of a circle.
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

/* write a program to determine and print the sum of the following harmonic series for a given value of n: 1 + 1/2 + 1/3 + ... 1/n

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

/* write a program to count and print the number of negative and positive numbers in a given set of numbers.

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

/* write a C program to input an integer between 1 and 128 and print its ascii character.

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

/* write a C program to input the value of days and then convert it into years, weeks and days.

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

/* write a C program to input the amount value and break it to the smalleset possible indian currency.

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

/* write a program that reads a floating point number and then displays the right most digit of the integral part of the number.

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

/* given an integer number, write a program that displays the number as follows: 
    first line = all digits, second line = all digits except 1st digit.

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

/* The straight line method of computing the yearly depreciation of the value of an item is given by:

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

/* given three values , write a prgram to read three values from keybard and print out the largest of them without using 
    the if statement.

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

/* the cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and above 100 calls.

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

/* given a list of marks ranging from 0 to 100, write a program to compute and print the number of students:

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

/* write a program to display a floyd's triangle:

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

/* write a C program that inputs a string and counts the number of capital and small alphabets in that string.
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

/* given a number, write a program using while loop to reverse the digits of the number.

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

/* fibonaci sequence

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

/* write a program using for and if statement to display the capital letter S in a grid of 
    15 rows and 18 columns as shown billow:

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

/* write a program to compute the value of euler's number e, that is used as the base of natural logarithms.
 use the following formula:
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

/* write programs to evaluate the follwing:
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

/* an election is contested by 5 candidates. the candidates are numbered 1 to 5 and the voting is done by marking
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

void merge_arrays(int A[], int lengthA, int B[], int lengthB, int C[])
{
    int i = 0, j = 0, k = 0;

    // Merge arrays A and B into C
    while (i < lengthA && j < lengthB)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    // Copy any remaining elements of A
    while (i < lengthA)
    {
        C[k++] = A[i++];
    }

    // Copy any remaining elements of B
    while (j < lengthB)
    {
        C[k++] = B[j++];
    }
}

int main()
{
    int A[] = {1, 3, 5, 7, 9, 10, 23, 50, 1000, 3402, 430349}; // Example sorted array A
    int B[] = {2, 4, 6, 8, 10};                                // Example sorted array B

    int lengthA = sizeof(A) / sizeof(A[0]);
    int lengthB = sizeof(B) / sizeof(B[0]);
    int lengthC = lengthA + lengthB;
    int C[lengthC];

    // Merge arrays A and B into C
    merge_arrays(A, lengthA, B, lengthB, C);

    // Print the merged and sorted array C
    printf("Merged and sorted array C: ");
    for (int i = 0; i < lengthC; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
*/

/* write a program that fills a five by five matrix as follows:
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
*/

/* develop a program to implement the binary search algorithm. this technique compares the search
key value with the value of the element that is midway in a sorted list.

int main()
{
    int arr[] = {23, 12, 412, 42, 1, 4, 2, 3, 5, 7, 19, 13, 999, 69, 100};
    int input_num;

    int length = sizeof(arr) / sizeof(int);

    // 1. make a sorter.
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length - j - 1; i++)
        {
            if (arr[i] >= arr[i + 1])
            {
                int c = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = c;
            }
            else
            {
                continue;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    // make the user input a valid input.
    printf("\nenter a valid number whihc is in the array. \n");
    scanf("%d", &input_num);

    int low = 0, high = length - 1;

    int middle = low + (high - low) / 2;

    while (low <= high)
    {

        if (arr[middle] > input_num)
        {
            high = middle - 1;
        }
        else if (arr[middle] < input_num)
        {
            low = middle + 1;
        }
        else if (arr[middle] == input_num)
        {
            printf("found the number! it is: %d\nit is at position: %d from the left.", arr[middle], middle);

            break;
        }
        middle = low + (high - low) / 2;
    }
    if (low > high)
    {
        printf("number not found in the list. \n");
    }

    return 0;
}
*/

/* write a program that will compute the length of a given character string.

    int
    main()
{
    char char_string[] = "hello there karthikeya";
    int length = sizeof(char_string) / sizeof(char);

    printf("the length of the given character string is: %d characters. \n", length - 1);

    return 0;
}
*/

/* write a program that will count the number of occurrences of a specified character in a given line of text.

int main(){

    char text[] = "hello there! 1 2 3 , my name is karthikeya, this is a test, zoop. \n";

    int length = sizeof(text)/sizeof(char);
    char character , occurance = 0;
    printf("what character do you want to see the occurance for? \n");
    scanf("%c" , &character);

    for(int i = 0; i < length -1 ; i++){
        if(text[i] == character){
            occurance++;
        }
    }
    printf("the character: %c has occured %d number of times.\n" , character , occurance);
    return 0;
}
*/

// chapter 8 donee

/* write a program, which reads your name from the keyboard and outputs a list of ASCII codes, which represent your name.

int main()
{
    char name[100];
    printf("whats your name? \n");
    scanf("%s", &name);
    int length = sizeof(name) / sizeof(char);

    for (int i = 0; (int)name[i] > 66 && (int)name[i] < 123 || (int)name[i] == 32; i++)
    {
        printf("%d ", (int)name[i]);
    }
    return 0;
}
*/

/* write a program to do the following: Questions and answers.

int main()
{
    char answer[100];
    int attempts = 0;
    char solution1[] = "Dennis Ritchie";
    printf("who is the inventor of C? \n");
    scanf("%c");

    while (attempts < 3)
    {
        scanf("%s", &answer);
        if (strcmp(answer, solution1) == 0)
        {
            printf("yess you are correct. \n");
        }
        else
        {
            attempts++;
            printf("you are incorrect, try again. %d\n", attempts);
        }
        if (attempts == 3)
        {
            printf("you've ran out of chances. \n");
            break;
        }
    }

    printf("The correct answer is: Dennis Ritchie. \n");
    return 0;
}
*/

/* write a program to extract a portion of a character string and print the extracted string.

int main()
{

    int start, stop;
    char arr[100] = {0};
    printf("what string do you want to input? \n");
    scanf("%s", arr);
    int length = sizeof(arr) / sizeof(char);
    printf("at what index do you want to start?\n");
    scanf("%d", &start);
    printf("at what index do you want to stop?\n");
    scanf("%d", &stop);
    for (int i = start; i <= stop; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
*/

/* write a program which will read a text and count all occurrences of a particular word.

int main()
{
    char sentence[1000] = {0};
    char word[100] = {0};
    int count = 0;
    printf("write the sentence for which you want to operate. \n");
    fgets(sentence, 1000, stdin);
    printf("what word do you want to count in the given sentence? \n");
    scanf("%s", word);
    int length2 = sizeof(sentence) / sizeof(char);
    int length1 = sizeof(word) / sizeof(char);

    char *token;
    token = strtok(sentence, " ,.\n;");

    while (token != NULL)
    {
        if (strcmp(token, word) == 0)
        {
            count++;
        }
        token = strtok(NULL, " ,.-\n");
    }
    printf("The word '%s' appears %d times in the given sentence.\n", word, count);
    return 0;
}
*/

/* write a program which will read a string and rewrite it in the alphabetical order.

int main()
{

    char string[1000] = {0};
    printf("please write the string that you want to rewrite. \n");
    fgets(string, sizeof(string), stdin);
    int length = strlen(string);
    if (string[length - 1] == '\n')
    {
        string[length - 1] = '\0';
    }

    // bubblesort:

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (string[j] > string[j + 1])
            {
                 char a = string[j];
                string[j] = string[j + 1];
                string[j + 1] = a;
            }
        }
    }
    for(int i = 0; i < length; i++){
        printf("%c", string[i]);
    }

    return 0;
}
*/

/* write a program to replace a particular word by another word in a given string.

void remove_newline(char* str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main()
{
    char string[1000] = {0};
    char change_word[1000] = {0};
    char new_word[1000] = {0};

    printf("give me the string that you want to change.\n");
    fgets(string, sizeof(string), stdin);
    remove_newline(string);
    printf("tell me which word do you want to change? \n");
    fgets(change_word, sizeof(change_word), stdin);
    remove_newline(change_word);
    printf("what do you want the chosen word to change to? \n");
    fgets(new_word, sizeof(new_word), stdin);
    remove_newline(new_word);

    char *change;
    change = strstr(string, change_word);
    if (change != NULL)
    {
        size_t len_before = change - string;
        size_t len_change_word = strlen(change_word);
        size_t len_new_word = strlen(new_word);

        char result[1000] = {0};

        strncpy(result, string, len_before);


        strcat(result, new_word);


        strcat(result, change + len_change_word);


        printf("Modified string: %s\n", result);
        }

        else{printf("%s", string);}
        return 0;
}
*/

/* write a program that reads a string from the keyboard and determines whether the string is a palindrome or not.

int main()
{

    char string[1000] = {0};
    printf("enter the word that you think would be a palindrome. \n");
    scanf("%s", string);
    int length = 0;
    for(int x = 0; string[x] != '\0'; x++){length++;}
    int i = 0;
    int j = 0;
    do
    {
        j = length - i - 1;
        if (string[i] == string[j])
        {
            printf("this is a palindrome. \n");
            j++;
            i++;
            break;
        }
        else if (string[i] != string[j])
        {
            printf("this is not a plaindrome. \n");
            j++;
            i++;
            break;
        }
    } while (i < j);
    return 0;
}
*/

/* write a program that reads the cost of an item in the form RRRR.PP where R denotes rupees and P denotes paisa,


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
*/

/* write a program to read two strings and compare them using the fxn strncmp() and print a message that
 the first string is equal, less or greater than the second one.

int main(){
    char string1[] = "hzllo";
    char string2[] = "hzz";
    int string_compare = strncmp(string1 , string2 , strlen(string1) < strlen(string2) ? strlen(string1) : strlen(string2));
    if (string_compare == 0) {
        printf("Both the strings have the same value.\n");
    } else {
        string_compare > 0 ? printf("string 1 > string 2\n") : printf("string 2 > string 1\n");
    }
    return 0;
}
*/

/* write a program to read a line of text from the keybard and print out the number of occurrences of a
  given substring using the function strstr().

int main()
{

    char string[] = "hello, i am karthikeya, i am a student, i am doin good.";
    char *substring;
    char word[100];
    int count = 0;
    printf("what word do you want to find the occurrence for?\n");
    scanf("%s", word);
    substring = strstr(string , word);
        while (substring != NULL)
        {
            count++;
            substring = strstr(substring + 1, word);
        }
        printf("the word: %s had occured %d number of times.", word, count);

    return 0;
}
*/

/* write a promgram that will copy m consecutive characters from string s1 beginning at position n to another string s2.

int main()
{

    int m, n;
    char string1[100];
    char string2[100];
    int i = 0;

    printf("what string do you want to do the operations on?\n");
    fgets(string1, 100, stdin);
    printf("at what index do you want to start the transfer?\n");
    scanf("%d", &n);
    printf("how many characters do you want to transfer?\n");
    scanf("%d", &m);
    for (int j = n; j < m + n && string1[j] != '\0'; j++)
    {
        string2[i] = string1[j];
        i++;
    }
    string2[i] = '\0';
    printf("%s", string2);
    return 0;
}
*/

/* write a program to create a directory of students with roll numbers.
int main()
{
    int i = 0;
    char student_names[10][100] = {
        "karthikeya",
        "josh",
        "sam",
        "joy",
        "phanni",
        "random dude",
        "thala",
        "steve",
        "robbin",
        "ussop"};

    char student_roll_numbers[10][3] = {
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "10"};

    char student_roll_number[3];
    printf("What roll number do you want the name for? \n");
    scanf("%s", student_roll_number);

    int index;

    while (strcmp(student_roll_numbers[i] , student_roll_number))
    {
        i++;
    }

    printf("the student's name is: %s", student_names[i]);

    return 0;
}
*/

/* given a string "123456789" write a program that displays:

* * * * 1
* * * 2 3 2
* * 3 4 5 4 3
* 4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5


int main()
{
    char str[] = "123456789";
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            printf(" %c", str[i + j]);
        }
        for (j = i - 1; j >= 0; j--)
        {
            printf(" %c", str[i + j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/* write a C program to cpmpare two strings without using any string function. (strncmp)

int main(){

    char string1[100];
    char string2[100];
    printf("write an input to compare, string 1: \n");
    fgets(string1 , 100 , stdin);
    printf("write an input to compare, string 2: \n");
    fgets(string2 , 100 , stdin);
    if((int)string1 == (int)string2){printf("both the strings are same" , string1 , string2);}
    else if((int)string1 != (int)string2){
    for(int i = 0; i < strlen(string1) > strlen(string2) ? strlen(string1): strlen(string2) ; i++){
        if((int)string1[i] < (int)string2[i]){printf("1. %s2. %s" , string1 , string2); break;}
        else if((int)string1[i] > (int)string2[i]){printf("1. %s2. %s" , string2 , string1); break;}
        else if((int)string1[i] == (int)string2[i]) {continue;}
    }
    }
    return 0;
}
*/

/* [TODO]  [INCOMPLETE]
// write a C program to find the largest and smallest sized word in a string.

int main(){

    char string[100];
    printf("enter the string to find the largest and smallest sized word.\n");
    fgets(string , sizeof(string) , stdin);
    int largest = 0 , smallest = 0 , new_largest , new_smallest;

    for(int i = 0; string[i] != '\0' ; i++){

        while(string[i] != ' ' && string[i] != ',' && string[i] != '.' && string[i] != '\n'){
            if(largest++ > largest){new_largest = largest; }
            else if(largest++ < largest){new_largest = largest;}
            if(smallest++ < smallest){new_smallest;}
            else if(smallest++ > smallest){new_smallest = smallest;}
        }
        if(string[i] == ' ' && ',' && '.' ){
            new_largest = 0;
            new_smallest = 0;
        }

    }
    printf("the length of smallest is: %d" , smallest);
    printf("the length of largest is: %d" , largest);
    return 0;
}
*/

/* write a C program to replace all the white spaces in a string with double white spaces.

int main(){

    char string[100];
    printf("enter a string. \n");
    fgets(string, sizeof(string) , stdin);

    char* token;
    token = strtok(string , " ");

    while(token != NULL){
        printf("%s  " , token);
        token = strtok(NULL , " ");
    }
    return 0;
}
*/

/* [TODO] [INCOMPLETE]
// write a C program to enter multiple strings and display them in lexicographical order.
*/

/* Write a C program to concatenate two strings without using any string function.

int main()
{
    char string1[] = "hello there! ";
    char string2[] = "I am karthikeya.";
    int length3 = strlen(string1) + strlen(string2);
    char string3[length3 + 1];

    int i = 0;
    int j = i;

    while (j < length3)
    {
        while (string1[i] != '\0')
        {
            string3[i] = string1[i];
            i++;
            j++;
        }

        i = 0;
        while (string2[i] != '\0')
        {
            string3[j] = string2[i];
            i++;
            j++;
        }

        string3[length3] = '\0';
    }

    printf("%s", string3);
    return 0;
}
*/

// Chapter 9 donee

/* write a function "exchange" to interchange the values of  two variables, say x and y. Illustrat
   the use of this function, in a calling function. Assume that x and y are defined as global variables.
float a = 3.14;
float b = 1.00;
void exchange(float *x , float *y){
    float c;
    c = *x;
    *x = *y;
    *y = c;
}

int main(){
    exchange(&a , &b);
    printf("a: %0.2f \nb: %0.2f" , a , b);
    return 0;
}
*/

/* Write a funcition space(x) that can be used to provide a space of x positions between two output numbers.

void space(int x){
    for(int i = 0; i < x; i++){
        printf(" ");
    }
}

int main(){
    printf("6");
    space(3);
    printf("9");
    return 0;
}
*/

/* Use recursive function calls to evaluate: f(x) = x - x^3/3! + x^5/5! - x^7/7! ....

long long factorial(long n){
    if(n==0 || n==1){
        return 1;
    }
    return n*(factorial(n-1));
}

double function(double x , int n){
    if(n == 0){
        return x;
    }
    int power = (2*n+1);
    double term = ((n%2==0 ? 1:-1) * pow(x, power)) / factorial(power);
    return term + function(x , n-1);

}

int main(){
    printf("factorial: %lf" , function(2, 4));
    return 0;
}
*/

/* an n_order polynomial can be evaluated as follows: P = (((a0x + a1)x + a2)x + a3 ....)

int function(int x, int n, int arr[]){

    double result = arr[0];

    for (int i = 1; i <= n; i++){
        result = result * x + arr[i];
    }
    return result;
}

int main(){
    int arr[] = {1, 1, 1 , 1 , 1 , 1};
    printf("%d", function(1, 3, arr));
    return 0;
}
*/

/* the fibonacci numbers are defined recursively as follows: 
F1 = 1
F2 = 1
Fn = Fn-1 + Fn-2 , n>2
write a function that will generate and print the first n fibonacci numbers. n = 5, n = 10, n = 15.
int fib(int n){
    int term = 0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    for(int i=2; i<n - 2; i++){
    return fib(n-1) + fib(n-2);
    }
}
int main(){
    printf("the sum of the fib seq is: %d" , fib(15));
    return 0;
}
*/

/* write a function that will round a floating-point number to an indicated decimal place.
For example the number 17.457 would yield the value 17.46 when its rounded off to two decimal places.

float roundoff(float number , int decimal_places){
    float factor = pow(10, decimal_places);
    float temp = number*factor;
    int temp_num = (int)temp;
    if(temp - temp_num >= 0.5){
        temp_num += 1;
    }
    return temp_num/factor;
}

int main(){
    float number = 17.45745;

    int decimal_place;
    printf("enter the number of decimal place to where you want to round it off to: \n");
    scanf("%d" , &decimal_place);

    float rounded_number = roundoff(number, decimal_place);

    printf("the rounded off number is: %f", rounded_number);
    return 0;
}
*/

/* write a function "prime" that return 1 if its argument is prime number and returns 0 otherwise.

int prime(int number){

    if(number == 1 || number == 0){
        return 0;
    }

    int factor=0;
    
    for(int i=1; i<=(int)sqrt(number); i++){

        if(number%i==0){
            factor++;
        }
    }

    if(factor == 2){
        return 1;
    }
    else if(factor != 2){
        return 0;
    }
}

int main(){
    int number;

    printf("enter the number.\n");
    scanf("%d", &number);

    if(prime(number)==1){
        printf("%d is a prime number", number);
    }
    else if(prime(number)==0){
        printf("%d is not a prime number", number);
    }
    return 0;
}
*/

/* write a function that will scan a character string passed as an argument and 
convert all lowercase character to uppercase characters.

void lwr_to_upr(char arr[]){

    for(int i=0; i<strlen(arr); i++){
        if(arr[i]>96 && arr[i]<123){
            arr[i] = arr[i] - 32;
        }
    }
}

int main(){

    char str[] = "abcdefghijklmnopqrstuvwxyz";
    lwr_to_upr(str);
    printf("%s", str);

}
*/

/* develop a top_down modular program to implement a calculator. The program should request the user to input
two numbers and display one of the following as per the desire of the user:
a) sum of the numbers
b) differene of the numbers
c) product of the numbers
d) division of the numbers
e) power of the numbers

double sum(double a, double b){
    printf("%lf", a + b);
}

double difference(double a, double b){
    if(a>b){
        printf("%lf", a-b);
    }
    else if(b>a){
        printf("%lf", b-a);
    }
}

double product(double a, double b){
    printf("%lf", a*b);
}

double division(double a, double b){
    if(b==0){
        printf("the division is not possible.\n");
        return 0;
    }
    printf("%lf", a/b);
}

double power(double a, double b){
    printf("%lf", ((int)a)^((int)b));
}

int main(){

    double a,b;
    char operation;
    printf("enter the first number.\n");
    scanf("%lf", &a);
    printf("enter the second number.\n");
    scanf("%lf", &b);
    printf("what operation do you want to use?\na) sum of the numbers\nb) differene of the numbers\nc) product of the numbers\nd) division of the numbers\ne) power of the numbers\n");
    scanf("%s", &operation);

    if(operation='a'){
        sum(a,b);
    }
    else if(operation='b'){
        difference(a,b);
    }
    else if(operation='c'){
        product(a,b);
    }
    else if(operation='d'){
        division(a,b);
    }
    else if(operation='e'){
        power(a,b);
    }

return 0;

}
*/

/* develop a modular interactive program using function that reads the values of three sides of a triagnle.
    and displays either its area ro its perimeter as per the request of the user.

double perimeter(double a, double b, double c){
    return a+b+c;
}

double semi_perimeter(double a, double b, double c){
    return (a+b+c)/2.0;
}

double area(double semi_perimeter, double a, double b, double c){
    return sqrt((semi_perimeter-a)*(semi_perimeter-b)*(semi_perimeter-c));
}

int main(){

    double a,b,c;
    char operation;
    printf("enter length of side 1:");
    scanf("%lf", &a);
    printf("enter length of side 2:");
    scanf("%lf", &b);
    printf("enter length of side 3:");
    scanf("%lf", &c);

    printf("what do you want to find out?\na) Area\nb) Perimeter\n");
    scanf("%c", &operation);
    scanf("%c");

    double s = semi_perimeter(a,b,c); 

    if(operation == 'a'){
        printf(("the Area is:%lf \n"), area(s, a, b, c));
    }
    else if(operation == 'b'){
        printf(("the perimeter is:%lf \n"), perimeter(a, b, c));
    }

    return 0;
}
*/

/* write a function that can be called to find the largest element of an m by n matrix.

int largest_element(int m, int n, int arr[m][n]){
    int i=0, j;
    int element, larger_element = arr[0][0];

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            element = arr[i][j];
        if(element > larger_element){
            larger_element = element;
            }
        }

    }
    return larger_element;
}

int main(){

    int num_arr[3][3] = {{2, 13, 4 },
                        {12, 2, 0  }, 
                        {12, 4, 123}
                        };

    printf("%d", largest_element(3, 3, num_arr));
    return 0;
}
*/

/* write a function that can be called to compute the product of two matrices of size m by n and n by m.

void product_matrix(int m, int n, int arr_A[m][n], int arr_B[n][m], int arr_C[m][m]){
    int i,j,k;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr_C[i][j] = 0;
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            for(k=0; k<n; k++){
                arr_C[i][j] += arr_A[i][k] * arr_B[k][j];
            }
        }
    }
}

int main(){
    int A[3][3] = { 
        {2 , 2, 4 },
        {12, 2 , 0 }, 
        {12, 4 , 1 }
        };
    int B[3][3] = {
        {2 , 1, 4 },
        {12, 2 , 0 }, 
        {12, 4 , 2 }
        };

    int C[3][3];

    product_matrix (3, 3, A, B, C);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;

}
*/

/* design and code an interactive modular program that will use functions to a matrix of m by n size, 
      compute the column averages and row averages, and then print the entire matrix with averages shown in
      respective rows and columns.

void row_averages(int m, int n, int arr[m][n], double row_wise_avg[m]){
    for(int i=0; i<m; i++){
        double sum = 0;

        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }

        row_wise_avg[i] = sum/n;
    }
}

void col_averages(int m, int n, int arr[m][n], double col_wise_avg[n]) {
    for (int j=0; j<n; j++){
        double sum = 0;

        for (int i=0; i<m; i++){
            sum += arr[i][j];
        }

        col_wise_avg[j] = sum / m;
    }
}

int main(){
    int arr[4][2] = {
        {3, 4},
        {4, 5},
        {6, 8},
        {9, 10}
    };

    double row_wise_avg[4] = {0};
    double col_wise_avg[2] = {0};

    row_averages(4, 2, arr, row_wise_avg);
    col_averages(4, 2, arr, col_wise_avg);

    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("|%0.1f|", row_wise_avg[i]);
        printf("\n");
    }
    for(int i=0; i<2; i++){
    printf("|%0.1f| ", col_wise_avg[i]);
    }

    return 0;
}
*/

/* develop a top-down modular program that will perform the following tasks: 
    1. read two integer arrays with unsorted elements.
    2. sort the array's separately.
    3. merge the sorted arrays.
    4. print the sorted list.

int sort_arr(int m, int arr_len, int arr[m]){
    for(int i=0; i<arr_len-1; i++){
        for(int j=0; j<arr_len-i-1; j++){
            if(arr[i] > arr[i+1]){
                int a = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = a; 
            }
        }
    }
    return arr[m];
}

int merge(int m, int n, int len_A, int len_B, int arr_A[m], int arr_B[n], int arr_C[m+n]){

    int i=0;

    for(i=0; i<m; i++){
        arr_C[i] = arr_A[i];
    }
    for(int j=0; j<n; j++){
        arr_C[i+j] = arr_B[j];
    }
    return arr_C[m+n];
}


int main(){

    int C[10] = {0};

    int A[5] = {1,2,3,4,5};
    int B[5] = {4,5,6,7,8};

    sort_arr(5, 5, A);
    sort_arr(5, 5, B);

    merge(5,5,5,5,A,B,C);

    sort_arr(10,10,C);

    for(int i=0; i<10; i++){
        printf("%d ", C[i]);
    }

    return 0;
}
*/






