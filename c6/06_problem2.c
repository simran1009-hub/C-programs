#include<stdio.h>

int returns_5(int*);

int returns_5(int* j){
    printf("The address of i through function is %u.\n",j);
    printf("The value at address of i through function is %u.\n",*j);
    return 5;
}
int main(){
    int i=10;
    int* l=&i;
    printf("The value of i is %u.\n",i);
    printf("The address of i is %u.\n",l);
    returns_5(l);
    return 0;
}