#include<stdio.h>
#include<conio.h>


int main(){
    FILE *fptr;
    int ch;
    char ch2='A';
    fptr=fopen("hello.txt","r");
        fscanf(fptr,"%d",&ch);
        printf("char is %d\n",ch);
         fscanf(fptr,"%d",&ch);
        printf("char is %d\n",ch);
         fscanf(fptr,"%d",&ch);
        printf("char is %d\n",ch);
    fclose(fptr);
    return 0;
}