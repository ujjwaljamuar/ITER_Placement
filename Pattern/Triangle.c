#include <stdio.h>
void printPattern(int n)
{
    int i, j;                                               // 1
    for (i = 1; i <= n; i++)                                // 1 2
    {                                                       // 1 2 3
        printf("\n");                                       // 1 2 3 4
        for (j = 1; j <= i; j++)                            // 1 2 3 4 5
        {
            printf("%d ", j);
        }
    }
}
int main()
{
    printPattern(5);
}