#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("MULTIPLICATION TABLE OF 7 UPTO 7 X 10:\n");
    for (int i = 0; i < n; i++)
    {
        printf("7 X %d = %d\n", (i + 1), (7 * (i + 1)));
    }
    printf("\n");
    n = 15;
    ptr = (int *)realloc(ptr, n * sizeof(int));
printf("MULTIPLICATION TABLE OF 7 UPTO 7 X 15:\n");
    for (int i = 0; i < n; i++)
    {
        printf("7 X %d = %d\n", (i + 1), (7 * (i + 1)));
    }
    return 0;
}