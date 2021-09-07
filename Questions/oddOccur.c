#include <stdio.h>

// given an array with numbers all occur even num of time except one print that number.
int getOdd(int arr[], int n)
{
    int i, res = 0;
    for (i = 0; i < n; i++)
    {
        res ^= arr[i];
    }
    return res;
}
int main()
{
    int arr[] = {2, 2, 3, 5, 5, 7, 8, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Odd occuring element is %d ", getOdd(arr, n));
}