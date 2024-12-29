#include<stdio.h>
#include<conio.h>
#include<string.h>

void slicing(char str[],int n,int m){
    for(int i=n;i<=m;i++){
        printf("%c",str[i]);
    }
}

int main(){
    char str[]="hello world";
    slicing(str,3,9);
    return 0;
}