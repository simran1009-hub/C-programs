#include<stdio.h>

int main(){
    FILE* ptr;
    ptr=fopen("prblm4.txt","w");

    char name1[40],name2[40];
    float salary1,salary2;
    printf("Enter the name of employee 1.\n");
    scanf("%s",&name1);
    printf("Enter the salary of employee 1.\n");
    scanf("%f",&salary1);
    printf("Enter the name of employee 2.\n");
    scanf("%s",&name2);
    printf("Enter the salary of employee 2.\n");
    scanf("%f",&salary2);

    fprintf(ptr,"%s, ", name1);
    fprintf(ptr,"%.2f\n", salary1);
    fprintf(ptr,"%s, ", name2);
    fprintf(ptr,"%.2f\n", salary2);
    fclose(ptr);
    return 0;
}