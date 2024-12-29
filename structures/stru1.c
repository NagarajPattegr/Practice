#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    struct student s2;
    struct student s3;
    strcpy(s1.name,"Nagaraj");
    s1.cgpa=8.5;
    s1.roll=19;
    puts(s1.name);
    printf("%.2f\n",s1.cgpa);
    printf("%d",s1.roll);
    printf("-----------------\n");
    strcpy(s2.name,"Akshay");
    s2.cgpa=7.5;
    s2.roll=18;
    puts(s2.name);
    printf("%.2f\n",s2.cgpa);
    printf("%d",s2.roll);
    printf("-----------------\n");
    return 0;
}
