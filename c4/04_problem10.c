#include<stdio.h>

int main(){
    /*
    int n;
    printf("Enter the number which has to be checked for prime.\n");
scanf("%d", &n);
    */
   int n=1;
   int prime =1;
   if(n==1 || n==0){
    prime =0;
   }
   else{
    for (int a = 2; a < n; a++)
    {
        if(n%a==0 && n!=2){
            prime=0;
        }
    }
    
   }
   if(prime){
    printf("%d is a prime number.\n",n);
   }
   else{
    printf("%d is not a prime number.\n", n);
   }
   return 0;
}