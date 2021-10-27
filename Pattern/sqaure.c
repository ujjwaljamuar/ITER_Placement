#include <stdio.h>
void printPattern(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        printf("\n"); 
        for (j = 1; j <= n; j++)                        // 1 1 1 1
        {                                               // 1 1 1 1
            printf("1 ");                               // 1 1 1 1
        }                                               // 1 1 1 1
    }
}
int main()
{
    printPattern(4);
}