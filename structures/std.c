#include<stdio.h>
#include<conio.h>

typedef struct student{
    char name[25];
    int rollNo;
    int marks;
}std;

void setInfo(std *s){
    printf("Enter name\n");
    fgets(s->name,25,stdin);
    printf("Enter roll number \n");
    scanf("%d",&(s->rollNo));
     printf("Enter marks\n");
    scanf("%d",&(s->marks));
}

void getInfo(std *s){
    printf("Name : %s\n",s->name);
     printf("Roll number : %d\n",s->rollNo);
      printf("Marks : %d\n",s->marks);
}
void main(){
    std s1;
    setInfo(&s1);
    getInfo(&s1);
}