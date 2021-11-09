#include <stdio.h>
int count(int S[], int m, int n)
{
    if (n == 0)
        return 1;

    // If n is less than 0 then no
    // solution exists
    if (n < 0)
        return 0;

    // If there are no coins and n
    // is greater than 0, then no
    // solution exist
    if (m <= 0 && n >= 1)
        return 0;

    // count is sum of solutions (i)
    // including S[m-1] (ii) excluding S[m-1]
    return count(S, m - 1, n) + count(S, m, n - S[m - 1]);
}
int main()
{
    int i, j;
    int arr[] = {1, 2, 3};
    int m = sizeof(arr) / sizeof(arr[0]);
    printf("%d ", count(arr, m, 4));
    return 0;
}