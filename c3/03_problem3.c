#include <stdio.h>

int main()
{
    int income = 600002, tax;
    /*
    printf("Enter your income");
scanf("%d",&income);\
*/
    if (income <= 250000)
    {
        printf("Tax payable=0");
    }
    else if (income > 250000 && income <= 500000)
    {
        printf("Tax payable=%f",( 0.05 * (income - 250000)));
    }
    else if (income > 500000 && income <= 1000000)
    {
        printf("Tax payable=%.1f",( (0.05 * (500000 - 250000)) + (0.2 * (income - 500000))));
    }
    else
    {
        printf("Tax payable=%f",( (0.05 * (500000 - 250000)) + (0.2 * (1000000 - 500000)) + (0.3 * (income - 1000000))));
    }

    return 0;

}
