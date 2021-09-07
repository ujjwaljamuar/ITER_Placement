#include <stdio.h>
// print binary and reverse of binary to equivalent
int main()
{
    char n;
    int i, k, rev = 0;
    printf("Enter a char. \n");
    scanf("%c", &n);
    printf("%d", n);
    printf("\n");

    for (i = 7; i >= 0; i--)
    {
        k = 1 << i;
        n &k ? printf("1") : printf("0");
    }
    printf("\n");

    // for reverse equivalent

    for (i = 7; i >= 0; i--)
    {
        k = 1 << i;
        n &k ? rev += 1 << (7 - i) : 0;
    }
    printf("Reverse Equivalent is %d ", n);

    return 0;
}