// #include<stdio.h>

// int main(){
//     int arr[9]={-3,0,58,74,3,-45,11,55,-23};
//     int no_of_neg_no=0;
//     for (int i = 0; i < 9; i++)
//     {
//         if(arr[i]>0)
//         {
// no_of_neg_no++;
//         }

//     }
//     printf("No. of positive number(s) in array is/are %d.\n", no_of_neg_no);
//     return 0;

// }
#include <stdio.h>

int counts_positive_integers(int *, int);
int counts_positive_integers(int *arr, int n)
{
    int no_of_positive_int = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            no_of_positive_int++;
        }
    }
    printf("The no. of positive integer in array = %d \n", no_of_positive_int);
}
int main()
{
    int arr[10] = {1, 8, -45, 90, 0, -32, 41, 64, -82, 22};
    counts_positive_integers(arr, 10);
    return 0;
}