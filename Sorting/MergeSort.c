#include <stdio.h>

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int h);

void printarr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int m = l + (h - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);
        merge(arr, l, m, h);
    }
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n1; j++)
        R[j] = arr[m + j + 1];

    i = j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k++] = L[i++];

        else
            arr[k++] = R[j++];
    }

    while (i < n1)
    {
        arr[k++] = L[i++];
    }

    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}
void main()
{
    int arr[] = {42, 9, 18, 29, 36, 35, 13, 38, 18};
    int len = sizeof(arr) / sizeof(int);
    printarr(arr, len);
    mergeSort(arr, 0, len - 1);
    printarr(arr, len);
}