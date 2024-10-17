 given a list of marks ranging from 0 to 100, write a program to compute and print the number of students:

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
