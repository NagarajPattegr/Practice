#include<stdio.h>
#include<conio.h>

// void reverse(int* arr,int size){
//     for(int i=0;i<size/2;i++){
//        int temp=arr[i];
//        arr[i]=arr[size-i-1];
//        arr[size-i-1]=temp;
//     }
// }
// int arr[]={1,2,3,4,5,67,8};
//     reverse(arr,7);
//     for(int i=0;i<7;i++){
//         printf("%d\t",arr[i]);

//     }

int main(){
    int n;
    int arr[5]={2,3,4,5};
    printf("Enter n (n>2)");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=0;i<n;i++)
        printf("%d\t",fib[i]);

}