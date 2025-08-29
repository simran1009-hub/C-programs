#include <stdio.h>

int main()
{
    int n = 4;
    int prime = 1;
    int a = 2;
    if (n == 0 || n == 1)
    {
        prime = 0;
    }
    else if (n == 2)
    {
        prime = 1;
    }
    else
    {
        do
        {
            if (n % a == 0)
            {
                prime = 0;
                break;
            }
            a++;
        } while (a < n);
    }
    if (prime)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}