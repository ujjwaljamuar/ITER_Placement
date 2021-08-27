#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    
    if (n >> 1 << 1 == n)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
}