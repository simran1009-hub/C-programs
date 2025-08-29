// #include<stdio.h>

// int sum_of_two(int*, int*);

// int sum_of_two(int* i, int* j){
//     return (*i+*j);
// }

// float average_of_two(int*, int*);

// float average_of_two(int* x, int* y){
//     return (*x+*y)/2.0;
// }

// int main(){
//     int a=0,b=201;
    
//     int* j=&a;
//     int* i=&b;
    
//     printf("The sum of a and b is %d.\n",sum_of_two(j,i));
    
//     printf("The average of a and b is %.2f.\n",average_of_two(j,i));
//     return 0;
    
// }
#include<stdio.h>

int* sum(int, int);

int* sum(int a, int b){
    int sum_storing_var=(a+b);
    printf("The sum of a and b is %d.\n",sum_storing_var);
    int* address_of_sum_storing_var=&sum_storing_var;
    printf("The address of sum of a and b is %u.\n",address_of_sum_storing_var);
    return address_of_sum_storing_var;
}
float* average(int, int);

float* average(int a, int b){
    float average_storing_var=(a+b)/2.0;
    printf("The average of a and b is %.2f.\n",average_storing_var);
    float* address_of_average_storing_var=&average_storing_var;
    printf("The address of average of a and b is %u.\n",address_of_average_storing_var);
    return address_of_average_storing_var;
}
int main(){
    int a=2,b=4;
    sum(a,b);
    average(a,b);
    return 0;
}