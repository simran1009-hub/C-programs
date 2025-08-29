// #include<stdio.h>

// int main(){
//     int arr[3][10];
//     int multiplication_table[3]; 
//     printf("Enter the 3 numbers whose multiplication table is to be devised.\n");
//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%d", &multiplication_table[i]);
       
    
//     }
    
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Multiplication table of %d is: \n", multiplication_table[i]);
//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j]=multiplication_table[i]*(j+1);
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");                
//         printf("\n");                
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
int arr[3][10];
int values[3];
printf("Enter the 3 values whose multiplication table is to be printed.\n");
for (int i = 0; i < 3; i++)
{
    scanf("%d",&values[i]);
}
for (int i = 0; i < 3; i++)
{
    printf("Multiplication table of %d is:\n", values[i]);
    for (int j = 0; j < 10; j++)
    {
        arr[i][j]=values[i]*(j+1);
        printf("%d ", arr[i][j]);
    }
    printf("\n");
    printf("\n");
}
return 0;
}