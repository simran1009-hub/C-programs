#include<stdio.h>

int main(){
    FILE* ptr;
    ptr=fopen("harry.txt","r");
    if(ptr==NULL){
        printf("This file does not exists, sorry!\n");
    }
    else{
        int num;
        fscanf(ptr,"%d",&num);
        printf("The value of num is %d.\n",num);
        fscanf(ptr,"%d",&num);
        printf("The value of num is %d.\n",num);
    }
return 0;
}
