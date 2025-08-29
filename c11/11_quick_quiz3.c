#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));
    ptr[0]=2;
    free(ptr);
    printf("The value of index 1 array element is %d.\n",ptr[0]);
    return 0;
}