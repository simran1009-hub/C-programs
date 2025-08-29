#include<stdio.h>

int main(){
    int a=1;
    int sum=0;
    while(a<=10){
        sum+=a;
        a++;
    }
    printf("The sum of first 10 natural numbers is %d.\n", sum);
    return 0;
}