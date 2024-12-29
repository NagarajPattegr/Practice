#include<stdio.h>
#include<conio.h>

void printString(char *name){
    for(int i=0;*name!= '\0';i++){
        printf("%c\n",*name);
        name++;
    }
}
int main(){
    // char name[]={'N','a','g','a','r','a','j','a','\0'};
    char name[30];
    scanf("%s",name);
    int size=sizeof(name)/sizeof(name[0]); 
    printString(name);
    return 0;
}