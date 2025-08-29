#include <stdio.h>

int main()
{
    /*
    int n;
    printf("Enter the number whose factorial is to be calculated.\n");
    scanf("%d", &n);
*/
    int n = 4;
    int factorial = 1;
    for (int a = 1; a <= n; a++)
    {
        factorial *= a;
    }
    printf("The factorial of %d is %d.\n",n, factorial);
    return 0;
}