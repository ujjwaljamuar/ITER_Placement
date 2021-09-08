// Given two number , if they have different sign return true, else false.
#include <stdio.h>
#include <stdbool.h>

bool oppositeSign(int a, int b)
{
    return ((a ^ b) < 0);
}

int main()
{
    printf("Enter a and b : \n");
    int a, b;
    scanf("%d%d", &a, &b);
    if (oppositeSign(a, b) == true)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}