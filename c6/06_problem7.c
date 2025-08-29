#include<stdio.h>

int does_10_times(int);

int does_10_times(int a){
    a=(10*a);
    return (10*a);
    }

int main(){
int i=5;
printf("The value of i is %d.\n", i);
does_10_times(i);
printf("The value of i after changing through call by value is %d.\n", i);
return 0;

}