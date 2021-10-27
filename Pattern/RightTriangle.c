

#include <stdio.h>
void printPattern(int n)
{
    int i, j;                                                     //   *
    for (i = 1; i <= n; i++)                                      //   **
    {                                                             //   ***
        printf("\n");                                             //   ****
        for (int j = 1; j <= i; j++)                              //   *****
        {
            printf("* ");
        }
    }
}
int main()
{
    printPattern(5);
}