#include <stdio.h>
#include <conio.h>

typedef struct address
{
    int h_no;
    int block;
    char city[50];
    char state[30];
} add;

int main()
{
    add a1[5]={{111, 01,"Siddapura", "Karnataka"},
    {111, 01, "Siddapura", "Karnataka"},
     {111, 01, "Siddapura", "Karnataka"},
     {111, 01, "Siddapura", "Karnataka"},
    {111, 01, "Siddapura", "Karnataka"}};

    for(int i=0;i<5;i++){
        printf("House number %d\n",a1[i].h_no);
    }
    return 0;
}