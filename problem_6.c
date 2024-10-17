 write a program that prints a pattern of "*".
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
[\