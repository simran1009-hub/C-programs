#include<stdio.h>
int main(){
    FILE* ptr1;
    FILE* ptr2;
    ptr1=fopen("prblm3a.txt", "r");
    ptr2=fopen("prblm3b.txt", "w");
    char c;
    while (1)
    {
        c=fgetc(ptr1);
        if (c!=EOF)
        {
            printf("%c",c);
            fprintf(ptr2,"%c",c);
            fprintf(ptr2,"%c",c);
        }
        else{
            break;
        }
    }
    return 0;
}