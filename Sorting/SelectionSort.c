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

void swap(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_ind;
    for (i = 0; i < n - 1; i++)
    {
        min_ind = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(&arr[min_ind], &arr[i]);
    }
}

void main()
{
    int arr[] = {5, 7, 9, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printarr(arr, n);

    selectionSort(arr, n);

    printarr(arr, n);
}