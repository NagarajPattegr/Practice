#include<stdio.h>
#include<conio.h>

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int* arr , int low , int high){
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+ 1);
}

void quickSort(int* arr,int i, int high){
    if(i<high){
    int p=partition(arr,i,high);
    quickSort(arr,i,p-1);
    quickSort(arr,p+1,high);}
}

int main(){
    int arr[]={9,4,5,2,3,1,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    // printf("%d",size);
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}