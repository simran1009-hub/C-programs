#include<stdio.h>

int main(){
    char ch='a';
    /*
    printf("Enter the character\n");
    scanf("%c", &ch);
    */
    printf("The character entered is %c\n",ch);
    printf("The ascii value of the character is %d\n ", ch);

    if(ch>=97 && ch<=122){
        printf("The character typed(i.e. %c) is lowercase", ch);
    }
    else{
        printf("The character entered is not lowercase");
    }
    return 0;
}