 [TODO]  [INCOMPLETE]
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
