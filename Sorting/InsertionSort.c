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

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void main()
{
    int arr[] = {5, 7, 9, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printarr(arr, n);

    insertionSort(arr, n);

    printarr(arr, n);
}