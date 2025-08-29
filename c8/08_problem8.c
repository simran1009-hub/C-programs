#include<stdio.h>
#include<string.h>

int main(){
    char str[]="Simran is doing fine these days.";
    char c='i';
    int count=0; 
    for (int j = 0; j < strlen(str); j++)
    {
        if(str[j]==c){
count++;
        }
    }
    printf("i is repeated %d times in the string.\n",count);
    return 0;
}