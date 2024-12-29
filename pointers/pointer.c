#include<stdio.h>
#include<conio.h>

int main(){
    // int age=18;
    // int* ptr=&age;
    // printf("%p\n",&age);
    // printf("%p\n",ptr);
    //   printf("%u\n",&age);
    // printf("%u\n",ptr);
    // printf("%u\n",&ptr);
    // printf("%d",*ptr);
    // printf("\n%d",*(&age));

    int *ptr;
int x;

ptr=&x;
*ptr=0;

printf("Value is %d",*ptr);
    return 0;
}