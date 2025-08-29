#include <stdio.h>

float Force_of_attraction(float m);

float Force_of_attraction(float m)
{

    float g = 9.8;

    printf("The force of attraction exerted on a body of mass %f kg by the earth is %.2f N.\n", m, (m * g));
    return (m * g);
}
int main()
{
    float m = 5.0;
    Force_of_attraction(m);
    return 0;
}
