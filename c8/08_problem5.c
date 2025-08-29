// #include<stdio.h>

// int strlen(char*);               

// int strlen(char* str){
//     int i=0,count;
//     char c=str[i];
//     while (c!='\0')
//     {
//         c=str[i];
//         i++;
//     }
//     count=i-1;
//     return count;
//     }               
// char* strcpy(char*,char*);

// char* strcpy(char* str,char* target){
//     for (int i = 0; i < strlen(str); i++)
//     {
//         target[i]=str[i];
//     }
//     target[strlen(str)]='\0';
//     return target;    
// }
// int main(){
//     char str[]="Harry";
//     char target[40];
//     strcpy(str,target);
// printf("%s %s",target, str);
// return 0;
// }
#include<stdio.h>

int strlen(char*);

int strlen(char* str){
    int i=0,count;
    char c=str[i];
    while (c!='\0')
    {
        c=str[i];
        i++;
    }
    count=i-1;
    return count;    
}
char* strcpy(char*, char*);

char* strcpy(char* str, char* target){
    for (int i = 0; i < strlen(str); i++)
    {
        target[i]=str[i];
    }
    target[strlen(str)]='\0';
    return target;
}

int main(){
    char str[]="Simran";
    char target[40];
    strcpy(str,target);
    printf("%s %s",target,str);
    return 0;
}