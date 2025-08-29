// #include <stdio.h>
// int makes_the_variable_its_10times(int* );

// int makes_the_variable_its_10times(int* j)
// {
//     printf("i=%d\n", (10 * (*j)));
//     return (10 * (*j));
// }

// int main()
// {
//     int i = 10;
//     int* j = &i;
//     printf("i=%d\n", i);
//     makes_the_variable_its_10times(j);
//     return 0;
// }
#include<stdio.h>

void makes_the_variable_its_10_times(int* );

void makes_the_variable_its_10_times(int* j){
    *j=(*j)*10;
}
int main(){
    int i=24;
    printf("The value of i is %d.\n",i);
    makes_the_variable_its_10_times(&i);
    printf("The value of i is %d.\n",i);
    return 0;

}