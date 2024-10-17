 write a program to read the following numbers, round them off to the nearest integer and print out the result in integral form.

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

}