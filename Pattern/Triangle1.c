#include <stdio.h>
void printPattern(int n)
{
    int i, j;                                               // 1
    for (i = 1; i <= n; i++)                                // 2 2
    {                                                       // 3 3 3
        printf("\n");                                       // 4 4 4 4
        for (j = 1; j <= i; j++)                            // 5 5 5 5 5
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    printPattern(5);
}