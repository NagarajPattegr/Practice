#include<stdio.h>
#include<conio.h>

void main(){
    int age=18;
    int _age=19;
    int *ptr=&age;
    int *ptr2=&_age;

    printf("Difference %u and %u is  %u\n",ptr,ptr2,ptr-ptr2); 
}