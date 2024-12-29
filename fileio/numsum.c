#include<stdio.h>
#include<conio.h>

void main(){
   FILE *f=fopen("num.txt","r");
   int num1,num2;
   fscanf(f,"%d",&num1);
   fscanf(f,"%d",&num2);
   printf("num 1 is %d\n",num1);
   printf("num 2 is %d",num2);
    fclose(f);
    f=fopen("num.txt","w");
    fprintf(f,"%d",(num1+num2));
   fclose(f);
}
// FILE *f2=
//   