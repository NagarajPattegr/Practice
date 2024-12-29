#include<stdio.h>
#include<conio.h>

void bubbleSort(void *array, int size){
    int *arr=(int*)array;
    int temp,sc=0,cc=0;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            cc++;
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sc++;
            }
        }
    }
    printf("\nNumber of swap is %d\n",sc);
     printf(" Number of comparision is %d\n",cc);
}

int main(){
    int arr[]={4,2,1,5,6,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int cc=0,sc=0;
    bubbleSort(arr,size);
    for(int i=0;i<size;i++)
        printf("%d\t",arr[i]);
    return 0;
}