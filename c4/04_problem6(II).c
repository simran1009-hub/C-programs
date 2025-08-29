#include <stdio.h>

int main()
{
    int a = 1;
    int sum = 0;
    do
    {
        sum += a;
        a++;
    } while (a <= 10);
    printf("The sum of first 10 natural numbers is %d.\n", sum);
    return 0;
}