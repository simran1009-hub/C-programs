#include <stdio.h>

int main()
{
    int n = 5;
    /*
    int n;
    printf("Enter the number whose multiplication table is to be calculated\n");
    scanf("%d", &n);
    */

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}