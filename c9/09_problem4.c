#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    struct employee* ptr1=&e1;
    ptr1->code=100;
    ptr1->salary=78;
    strcpy(ptr1->name,"Harry");
    printf("The employee code is %d, employee name is %s and employee salary is %.2f.\n",ptr1->code, ptr1->name, ptr1->salary);
    return 0;
}