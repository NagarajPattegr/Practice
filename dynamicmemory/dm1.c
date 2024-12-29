#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(){ 
    int *ptr;
    int n;
    printf("Enter number \n");
    scanf("%d",&n);
    // ptr=(int*)malloc(n*sizeof(int));
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    // for(int i=0;i<n;i++){
    //     printf("%d\n",ptr[i]);
    // }
    ptr=realloc(ptr,8);
    for(int i=0;i<8;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);

}

