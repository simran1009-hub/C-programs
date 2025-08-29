#include<stdio.h>
int print_Array(int*, int);

int print_Array(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int reverse_arr(int*, int);

int reverse_arr(int* arr, int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }   
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    print_Array(arr,6);
    reverse_arr(arr,6);
    print_Array(arr,6);
    return 0;
}