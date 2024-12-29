#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct job{
    char id;
    int deadline;
    int profit;
};

int compare(const void *a, const void *b){
    return ((struct job*)b)->profit-((struct job*)a)->profit;
}

void jobSequence(struct job jobs[],int n){
    char result[10];
    int timeslot[10];
    int i,j;
    qsort(jobs,n,sizeof(struct job),compare);
    for( i=0;i<n;i++)
        timeslot[i]=-1;
    for( i=0;i<n;i++){
        for( j=jobs[i].deadline-1;j>=0;j--){
            if(timeslot[j]==-1){
                result[j]=jobs[i].id;
                timeslot[j]=i;
                break;
            }
        }
    }
    printf("Selected job from maximum profit\n");
    for( i=0;i<n;i++){
        if(timeslot[i]!=-1)
          printf("%c\t",result[i]);
    }
    printf("\n");
}

void main(){
    struct job jobs[]={
        {'a',2,100},
        {'b',2,19},
        {'c',2,27},
        {'d',2,25},
        {'e',3,15}
    };
    int n=sizeof(jobs)/sizeof(jobs[0]);
    jobSequence(jobs,n);
}
