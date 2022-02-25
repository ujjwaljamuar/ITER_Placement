#include <stdio.h>
int linearSearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 91, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter key : \n");
    int key;
    scanf("%d", &key);

    int res = linearSearch(arr, n, key);

    (res == -1) ? printf("Key not found ! \n") : printf("Key found at index %d \n", res);

    return 0;
}