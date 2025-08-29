#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=6;
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));
    ptr[0]=84;
    ptr[1]=648;
    ptr[2]=779;
    ptr[3]=35;
    ptr[4]=9;
    ptr[5]=129;
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",ptr[4]);
    printf("%d\n",ptr[5]);
    return 0;
}