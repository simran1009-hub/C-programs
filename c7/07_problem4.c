#include<stdio.h>

int main(){
    int arr[10];
    int n;
    printf("Enter the number whose multiplication table is to be stored in array.\n");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        
        arr[i]=n*(i+1);
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}