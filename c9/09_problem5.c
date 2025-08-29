#include<stdio.h>

struct complex_no{
    int real_part;
    int imaginary_part;
};
int main(){
    struct complex_no c1={1,2};
    printf("The complex no. is %d + %di.\n",c1.real_part, c1.imaginary_part);
    return 0;

}