#include<stdio.h>
// #include<conio.h>

int main(){
    int x,*ptr;
ptr=&x;

*ptr=0;

printf(" Value of *ptr is %d \n",*ptr);
printf(" Value of x is %d \n",x);

*ptr+=5;
printf(" Value of *ptr is %d \n",*ptr);
printf(" Value of x is %d \n",x);

(*ptr)++;
printf(" Value of *ptr is %d \n",*ptr);
printf(" Value of x is %d \n",x);

printf("Address is %p",ptr);
printf("Address is %u",ptr);
return 0;
}
