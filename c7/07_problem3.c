#include<stdio.h>

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i]=5*(i+1);
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
    
}