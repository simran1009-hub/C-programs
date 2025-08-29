#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int* ptr;
    ptr=(int*)calloc(n,sizeof(int));
    ptr[0]=92;
    printf("%d\n",ptr[0]);
    return 0;
}