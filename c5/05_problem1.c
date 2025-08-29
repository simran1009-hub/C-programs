#include<stdio.h>
int average(int a,int b, int c);

int average(int a,int b,int c){
    printf("The average of a, b and c is %d.\n", ((a+b+c)/3));
    return (a+b+c)/3;
    
}
int main(){
    int a=4,b=5,c=3;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    average(a,b,c);
return 0;
}
