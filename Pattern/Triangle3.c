#include <stdio.h>
void printPattern(int n)
{
    int i, j, k;                                               // 1
    for (i = 1, k = 1; i <= n; i++)                            // 2 3
    {                                                          // 4 5 6
        printf("\n");                                          // 7 8 9 10
        for (j = 1; j <= i; j++, k++)                            
        {
            printf("%d ", k);
        }
    }
}
int main()
{
    printPattern(4);
}