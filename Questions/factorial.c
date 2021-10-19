#include <stdio.h>

int factorial(int n)
{
    int f = 1;
    if (n < 0)
    {
        printf("Please enter a non negative number.");
        return 1;
    }
    else
    {
        while (n > 0)
        {
            f *= n;
            n--;
        }
    }
    return f;
}

int main()
{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);

    printf("Factorial of %d is %d", a, factorial(a));
}

