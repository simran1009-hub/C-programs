#include<stdio.h>

struct vector{
    int i;
    int j;
};
struct vector sumVector(struct vector v1, struct vector v2);

struct vector sumVector(struct vector v1, struct vector v2){
    int a=v1.i+v2.i;
    int b=v1.j+v2.j;
    struct vector v3={a,b};
    printf("The resultant vector is %di + %dj\n",a,b);
    return v3;
}

int main(){
    struct vector v1={1,-2};
    struct vector v2={5,-6};
    sumVector(v1,v2);
}