// Count the numbers of bits flipped to convert from a to b;

#include <stdio.h>
int countBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n &= (n - 1);
    }
    return count;
}

int flippedCount(int a, int b)
{
    return countBits(a ^ b);
}

int main()
{
    printf("enter a and b : \n");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("No. of bits flipped to convert are : %d .", flippedCount(a, b));

    return 0;
}