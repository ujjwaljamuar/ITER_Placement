#include <stdio.h>
void printPattern(int n)
{
    int i, j, k; 
    k = n*(n+1)/2;                                              // 10
    for (i = 1; i <= n; i++)                                    // 9  8
    {                                                           // 7  6  5
        printf("\n");                                           // 4  3  2  1
        for (j = 1; j <= i; j++, k--)                            
        {
            printf("%d  ", k);
        }
    }
}
int main()
{
    printPattern(4);
}