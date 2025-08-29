#include<stdio.h>

int main(){
    int a=38,b=16,c=35,d=9;
    /*
    printf("Enter value of a \n");
    scanf("%d", &a);
      printf("Enter value of b \n");
    scanf("%d", &b);
    
  printf("Enter value of c \n");
    scanf("%d", &c);
      printf("Enter value of d \n");
    scanf("%d", &d);
*/
printf("The value of a,b,c and d is %d,%d,%d and %d\n",a,b,c,d);
if(a>b && a>c && a>d){
    printf("The greatest value among a,b,c and d is a");
}
if(b>a && b>c && b>d){
    printf("The greatest value among a,b,c and d is b");
}
if(c>b && c>a && c>d){
    printf("The greatest value among a,b,c and d is c");
}
if(d>b && d>c && d>a){
    printf("The greatest value among a,b,c and d is d");
}
return 0;

}