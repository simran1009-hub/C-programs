#include <stdio.h>

float C_to_F(float);

float C_to_F(float a)
{
    printf("%f degree celsius in fahrenheit is %.2f.\n", a, ((9.0 / 5) * a + 32));
    return ((9 / 5) * a + 32);
}
int main()
{
    float temp_in_degree_celsius = 37.8;
    C_to_F(temp_in_degree_celsius);
    return 0;
}
