#include<stdio.h>
#include<conio.h>

void main(){
    char name[50];
    char *name2="Hello";
    fgets(name,10,stdin);
    puts(name2);
    name2="JAi";
    puts(name);
    puts(name2);
    char *n=name;
    printf("Length is %d",sizeof(name)/sizeof(name[0]));
    n="Hello";
    puts(name);
}