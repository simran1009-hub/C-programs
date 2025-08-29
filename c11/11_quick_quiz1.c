#include<stdio.h>
#include<stdlib.h>

int main(){
    float n=5;
    float* ptr;
    ptr=(float*)malloc(5*sizeof(float));
    ptr[0]=93;
    ptr[1]=84.9282;
    ptr[2]=84.9282;
    ptr[3]=84.9282;
    ptr[4]=84.9282;
    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    printf("%.2f\n",ptr[2]);
    printf("%.2f\n",ptr[3]);
    printf("%.2f\n",ptr[4]);
    return 0;
}