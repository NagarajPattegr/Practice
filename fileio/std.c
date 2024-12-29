#include<stdio.h>
#include<conio.h>

void main(){
    FILE *f=fopen("student.txt","w");
    char name[100];
    int age;
    float cgpa;

    printf("Enter name :\n");
    fgets(name,100,stdin);
    fprintf(f,"Name is %s\n",name);

    printf("Enter age :\n");
    scanf("%d",&age);
    fprintf(f,"%d\n",age);

    printf("Enter cgpa :\n");
    scanf("%f",&cgpa);
    fprintf(f,"%f\n",cgpa);

    fclose(f);
}