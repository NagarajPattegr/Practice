#include<stdio.h>
#include<conio.h>

void sqare(int* n){
    *n=(*n)*(*n);
}
void swap(int* n,int*n2){
    int temp=*n;
    *n=*n2;
    *n2=temp;
}

int main(){
    int num=10;
    int num2=20;
    swap(&num,&num2);
    printf("num is %d\n",num);
    printf("num2 is %d",num2);
    // sqare(&num);
    // printf("%d",num);
return 0;
}
