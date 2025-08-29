#include<stdio.h>

int Fibonacci_series(int);

int Fibonacci_series(int n){
    if(n==1 || n==2){
        return (n-1);
    }
    else{
        return (Fibonacci_series(n-1) + Fibonacci_series(n-2));
    }

}
int main(){
    int n=5;
    printf("The element at n=%d in Fibonacci series is %d.\n", n, Fibonacci_series(n));
    return 0;
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ....
}