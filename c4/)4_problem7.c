#include <stdio.h>

int main()
{
    int sum = 0;
    int p = 8;
    for (int a = 1; a <= 10; a++)
    {

        int multiple = p * a;
        sum += p * a;
    }
    printf("The sum of the multiples of 8 is %d.\n", sum);
    return 0;
}