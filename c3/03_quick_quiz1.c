#include <stdio.h>

int main()
{
    int Marks=87;
    char Grade;
    if (Marks <= 100 && Marks >= 90)
    {
        printf("Your Grade=A");
    }

    else if (Marks <= 90 && Marks >= 80)
    {
        printf("Your Grade=B");
    }

    else if (Marks <= 80 && Marks >= 70)
    {
        printf("Your Grade=C");
    }

    else if (Marks <= 70 && Marks >= 60)
    {
        printf("Your Grade=D");
    }

    else if (Marks <= 60 && Marks >= 50)
    {
        printf("Your Grade=E");
    }
    else
    {
        printf("Your Grade=F");
    }

    return 0;
}