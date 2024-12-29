#include<stdio.h>
#include<conio.h>

int main(){
    float val=123.33;
    float *ptr=&val;
    float **pttr=&ptr;
    printf("%f\n",*ptr);
    printf("%f",**pttr);
}