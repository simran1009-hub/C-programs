#include<stdio.h>

int main(){
    FILE* ptr;
    ptr=fopen("prblm5.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr=fopen("prblm5.txt","w");
    fprintf(ptr,"%d",num*2);
    fclose(ptr);
    return 0;
}