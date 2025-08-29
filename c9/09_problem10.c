#include<stdio.h>
typedef struct time{
    int hh;
    int mm;
    int ss;
}t;
int compare(t,t);

int compare(t t1,t t2){
    if((t1.hh==t2.hh) && (t1.mm==t2.mm) && (t1.ss==t2.ss)){
        return 0;
    }
    if(t1.hh>t2.hh){
        return 1;
    }
    if(t1.hh<t2.hh){
        return -1;
    }
    if(t1.mm>t2.mm){
        return 1;
    }
    if(t1.mm<t2.mm){
        return -1;
    }
    if(t1.ss>t2.ss){
        return 1;
    }
    if(t1.ss<t2.ss){
        return -1;
    }
}
int main(){
    t t1={20,39,03};
    t t2={03,29,03};
    printf("%d",compare(t1,t2));
    return 0;
}