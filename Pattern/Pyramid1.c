#include <stdio.h>
void printPattern(int n)
{
    int i, j, sp;
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (sp = n; sp > i; sp--)
            printf(" ");

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
    }
}
int main()
{
    printPattern(4);
}