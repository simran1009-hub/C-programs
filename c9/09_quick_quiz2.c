#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[40];
};
void show(struct employee e);

void show(struct employee e){
    printf("Code is %d\nSalary is %f\nName is %s\n",e.code,e.salary,e.name);
}
int main(){
    struct employee e;
    e.code=100;
    e.salary=54.84;
    strcpy(e.name,"Harry");
    show(e);
    return 0;
}