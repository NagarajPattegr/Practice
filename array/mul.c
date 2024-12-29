#include<stdio.h>
#include<conio.h>

void multiplication(int mul[][10],int a,int b){
    for(int i=0;i<1;i++){
        for(int j=0;j<10;j++){
            mul[0][j]=a*(j+1);
        }
    }
    for(int i=0;i<1;i++){
        for(int j=0;j<10;j++){
           printf("%d\t",mul[i][j]);
        }
    }
}

int main(){
    int mul[2][10];
    multiplication(mul,10,11);
    return 0;
}