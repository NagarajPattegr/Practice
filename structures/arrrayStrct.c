#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct Student{
    int roll;
    char name[20];
    float cgpa;
} s;

void printInfo( s *s1){
        printf("Name is %s",s1->name);
        printf("Roll number %d",s1->roll);
}

int main(){
     s it={90,"Naga",12.345};
     s *ptr;
    ptr=&it;
    printf("%d\n",ptr->roll);
    printInfo(&it);
    return 0;
}