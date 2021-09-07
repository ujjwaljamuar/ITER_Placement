#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    
    /*if (n >> 1 << 1 == n)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    } */
    int c = n& 1;
    printf("%d \n",c);

    if (n & 1 > 0)
    {
        printf("odd. \n");
    }
    else
    {
        printf("even ");
    }
    
    
}