#include<stdio.h>
#include<conio.h>

void main(){
    FILE *f=fopen("hello.txt","r");
    char ch=fgetc(f);
    while (ch != EOF)
    {
        printf("%c",ch);
        ch=fgetc(f);
    }
    fclose(f);
}