#include<stdio.h>

int sum(int);

int sum(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (sum(n-1) + n);
    }

}
int main(){
    int n=8;
    printf("The sum of first %d natural numbers is %d.\n", n, sum(n));
    return 0;
}