#include <stdio.h>
void printPattern(int n)
{
    int i, j;                                               // 1
    for (i = 1; i <= n; i++)                                // 2 4
    {                                                       // 3 6 9
        printf("\n");                                       // 4 8 12 16
        for (j = 1; j <= i; j++)                            
        {
            printf("%d ", i*j);
        }
    }
}
int main()
{
    printPattern(4);
}