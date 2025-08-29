#include <stdio.h>

int main()
{
   /* int marks1, marks2, marks3;
    printf("Enter marks1\n");
    scanf("%d", &marks1);
    printf("Enter marks2\n");
    scanf("%d", &marks2);
    printf("Enter marks3\n");
    scanf("%d", &marks3);
    */
   int marks1=34, marks2=55, marks3=46;
    printf("Your marks1, marks2 and marks3 are %d, %d and %d respectively\n", marks1, marks2, marks3);
    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You have failed due to less than 33 percent marks in subject(s)");
    }
    else if (((marks1 + marks2 + marks3) / 3) < 40)
    {
        printf("You have failed due to less than 40 percent in total");
    }
    else
    {
        printf("You have passed");
    }
    return 0;
}