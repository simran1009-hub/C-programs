#include<stdio.h>

int main()
{
    int n = 3;
    int prime = 1;
    int a = 2;
    if (n == 0 || n == 1)
    {
        prime = 0;
    }
    else 
    {
        while (a < n)
        {
            if (n % a == 0)
            {
                prime = 0;
                break;
                
            }
            a++;
        }
    }
    if(prime){
        printf("%d is a prime number.\n", n);
    }
    else{
        printf("%d is not a prime number.\n",n);
    }
    return 0;
}