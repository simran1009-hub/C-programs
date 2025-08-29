#include<stdio.h>

struct date{
    int yyyy;
    int mm;
    int dd;
};
int compare(struct date,struct date);

int compare(struct date d1,struct date d2){
    if((d1.yyyy==d2.yyyy) && (d1.mm ==d2.mm) && (d1.dd==d2.dd)){
        return 0;
    }
    if(d1.yyyy>d2.yyyy){
        return 1;
    }
    if(d1.yyyy<d2.yyyy){
        return -1;
    }
    if(d1.mm>d2.mm){
        return 1;
    }
    if(d1.mm<d2.mm){
        return -1;
    }
    if(d1.dd>d2.dd){
        return 1;
    }
    if(d1.dd<d2.dd){
        return -1;
    }
}
int main(){
    struct date d1={2012,12,04};
    struct date d2={2012,11,04};
    printf("%d",compare(d1,d2));
    return 0;

}