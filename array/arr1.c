#include<stdio.h>
#include<conio.h>

void printNumber(int* arr , int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int *ptr=arr;
    int size=sizeof(arr)/sizeof(arr[0]);
    printNumber(arr,size);
    // for(int i=0;i<size;i++){
    //     printf("%d\n",*ptr);
    //     ptr++;
    return 0;
    }
