#include <stdio.h>

int returns_5(int* );

int returns_5(int* j)
{
    *j = (*j) * 2;
    return 5;
}
int main()
{
    int i = 20;
    int* j = &i;
    printf("The value of i is %d.\n", i);
    returns_5(j);
    printf("The value of i is %d.\n", i);
    return 0;
}