#include<stdio.h>

int main(){
    // char st[]={'a','b','c','\0'};
    char st[]="abc";
    for (int i = 0; i <= 3; i++)
    {
        printf("st[%d] = %c\n", i,st[i]);
    }
    return 0;
}