#include<stdio.h>

char* slice(char*, int, int);

char* slice(char* str,int m,int n){
    char* ptr1=&str[m];
    str=ptr1;
    str[n-m+1]='\0';
    return str; 
}
int main(){
    char str[]="Apple tree";
    printf("%s", slice(str,2,8));
    return 0;
}