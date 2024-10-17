 int add(int a , int b){
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
оп