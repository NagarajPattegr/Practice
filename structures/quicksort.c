#include<stdio.h>
#include<conio.h>

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high){
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(pivot>arr[j]){
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quiksort(int arr[],int low,int high){
    if(low<high){
        int partitionindex=partition(arr,low,high);
        quiksort(arr,low,partitionindex-1);
        quiksort(arr,partitionindex+1,high);
    }
}

int main(){
    int arr[]={6,3,1,2,8,9,4};
    int high=sizeof(arr)/sizeof(arr[0]);
    quiksort(arr,0,high-1);
    for(int i=0;i<high;i++)
        printf("%d\t",arr[i]);
    return 0;
}



// #include <stdio.h>

// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int* arr, int low, int high) {
//     int i = low - 1;
//     int pivot = arr[high];
//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }

// void quicksort(int* arr, int low, int high) {
//     if (low < high) {
//         int partitionIndex = partition(arr, low, high);
//         quicksort(arr, low, partitionIndex - 1);
//         quicksort(arr, partitionIndex + 1, high);
//     }
// }

// int main() {
//     int arr[] = {6, 3, 1, 2, 8, 9, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quicksort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//         printf("%d\t", arr[i]);
//     return 0;
// }
