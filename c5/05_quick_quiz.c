#include<stdio.h>

void Good_morning();
void Good_afternoon();
void Good_night();

void Good_morning(){
    printf("good morning\n");
}
void Good_afternoon(){
    printf("good afternoon\n");
}
void Good_night(){
    printf("good night\n");
}
int main(){
    Good_morning();
    Good_afternoon();
    Good_night();
    return 0;
}
