#include<stdio.h>
int main(){
    FILE* ptr;
    ptr=fopen("mul_table.txt","w");
    int num=4;
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d\n",num*(i+1));
    }
    fclose(ptr);
    return 0;   
    
}