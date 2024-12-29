#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){ 
    int *p=(int*)calloc(5,sizeof(int));
    p[0]=1;
    p[1]=3;
    p[2]=5;
    p[3]=7;
    p[4]=9;
    for(int i=0;i<5;i++)
        printf("%d\n",p[i]);
    realloc(p,8);
     p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;
    p[5]=12;
    p[6]=14;
    p[7]=16;
    for(int i=0;i<8;i++)
        printf("%d\n",p[i]);
}