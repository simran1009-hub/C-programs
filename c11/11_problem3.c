#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 800;
    ptr[1] = 740;
    ptr[2] = 370;
    ptr[3] = 373;
    ptr[4] = 989;
    ptr[5] = 3434;
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
    return 0;
}