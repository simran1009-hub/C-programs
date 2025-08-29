#include<stdio.h>
int main()
{
    FILE* ptr;
    ptr=fopen("prblm1.txt","r");
    int num1,num2,num3;
    fscanf(ptr,"%d %d %d",&num1,&num2,&num3);
    printf("%d %d %d\n",num1,num2,num3);
    fclose(ptr);
    return 0;
}
// #include<stdio.h>
// int main(){
//     FILE* ptr;
//     ptr=fopen("prblm1.txt","r");
//     int num;
//     fscanf(ptr,"%d",&num);
//     printf("%d\n",num);
//     fscanf(ptr,"%d",&num);
//     printf("%d\n",num);
    
//     fscanf(ptr,"%d",&num);
//     printf("%d\n",num);
    
//     fclose(ptr);
//     return 0;
// }