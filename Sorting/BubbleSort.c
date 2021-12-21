#include <stdio.h>

void printarr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main()
{
    int arr[5] = {7, 4, 8, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting -> \n");

    printarr(arr, n);

    printf("After sorting -> \n");
    bubble(arr, n);
    printarr(arr, n);
}