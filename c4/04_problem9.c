#include<stdio.h>

int main(){
    int a=1;
    int product=1;
    int n=5;
    while(a<=n){
        product*=a;
        a++;
    }
    printf("The factorial of %d is %d.\n", n,product);
    return 0;
}