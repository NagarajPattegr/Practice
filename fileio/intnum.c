#include<stdio.h>
#include<conio.h>

void main(){
    FILE *f=fopen("hello.txt","r");
    int n;
    fscanf(f,"%d",&n);
    printf("%d",n);
    fscanf(f,"%d",&n);
    printf("%d",n);
    fscanf(f,"%d",&n);
    printf("%d",n);
    fscanf(f,"%d",&n);
    printf("%d",n);
    fscanf(f,"%d",&n);
    printf("%d",n);
    fclose(f);
}