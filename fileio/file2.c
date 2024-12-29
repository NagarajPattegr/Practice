#include<stdio.h>
#include<conio.h>

void main(){
    FILE *f;
    char c='c';
    f=fopen("hello.txt","r");
    // fprintf(f,"%c",'f');
    // fprintf(f,"%c",'u');
    // fprintf(f,"%c",c);
    // fprintf(f,"%c",'k');
    c=fgetc(f);
    fputc('F',f);
    printf("%c",c);
     printf("%c",fgetc(f));
    //   printf("%c",getc(f));
    fclose(f);
}