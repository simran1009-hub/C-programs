#include<stdio.h>

int main(){
    int arr[]={83,68,81,84,53,63,49,29,31,72};
    int* ptr=arr;
    printf("The value of array at address %u is %d.\n", ptr,*ptr);
    ptr=ptr+2;
    printf("The value of array at address %u is %d.\n", ptr,*ptr);
return 0;
}