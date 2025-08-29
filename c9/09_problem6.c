#include<stdio.h>

struct complex_no{
    int real_part;
    int imaginary_part;
};

void display(struct complex_no);

void display(struct complex_no a){
    printf("The complex no is %d + %di.\n",a.real_part,a.imaginary_part);
}
int main(){
    struct complex_no c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part.\n");
        scanf("%d",&c[i].real_part);
        printf("Enter the imaginary part.\n");
        scanf("%d",&c[i].imaginary_part);
        display(c[i]);
    }
    return 0;    
}