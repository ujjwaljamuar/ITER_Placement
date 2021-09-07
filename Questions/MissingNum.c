// given an array with a range with one number missing , print that number.\

// method 1

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7};
    int n = (sizeof(arr) / sizeof(arr[0])) + 1;
    int sum = n * (n + 1) / 2;
    int i;
    for (i = 0; i < n - 1; i++)
    {
        sum = sum - arr[i];
    }
    printf("Missing number is %d \n", sum);

    // method 2

    int x1 = arr[0]; // for xor of all elements in array
    int x2 = 1;      // for xor of all elements in range

    for (i = 1; i < n - 1; i++)
    {
        x1 ^= arr[i];
    }

    for (i = 2; i <= n; i++)
    {
        x2 ^= i;
    }

    printf("Missing number for method 2 is %d", (x1 ^ x2));
}