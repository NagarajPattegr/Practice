#include<stdio.h>
#include<conio.h>

int fib(int num){
  if(num==0){
    return 0;
  }
  if(num==1){
    return 1;
  }
  return fib(num-1)+fib(num-2);
}
int main(){
    printf("%d",fib(10));
    return 0;
}