#include<stdio.h>

struct bankacc{
    int acc_no;
    char name[45];
    char ifsc[12];
    float balance;
};
int main(){
    struct bankacc p1;
    return 0;
}