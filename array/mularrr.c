#include<stdio.h>
#include<conio.h>

int countOdd(int* arr,int size){
    int c=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0)
          c++;
    }
    printf("%d",*(arr+5));
    return c;
}

int main(){
    int arr[]={1,2,3,4,5,67,8};
    int res=countOdd(arr,7);
    printf("%d",res);
    return 0;
}