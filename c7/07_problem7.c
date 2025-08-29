// #include<stdio.h>

// int main(){

//     int arr[3][10];
//     for (int i = 0; i < 1; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j]=2*(j+1);
//              printf("%d ",arr[i][j]);
//         }
//        printf("\n");
//     }

//     for (int i = 1; i < 2; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//            arr[i][j]=7*(j+1);
//            printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 2; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//            arr[i][j]=9*(j+1);
//            printf("%d ",arr[i][j]);
//         }

//     }

// }
#include <stdio.h>

int main()
{
    int arr[3][10];
    int multiplication_table[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        printf("Multiplication table of %d:\n", multiplication_table[i]);
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = multiplication_table[i] * (j + 1);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        printf("\n");

        
    }
    return 0;
}