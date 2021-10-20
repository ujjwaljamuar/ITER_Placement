// Keep Accepting till user wishes and then print minimum and the maximum number
#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i;
    int min = INT_MAX;
    int max = INT_MIN;
    do
    {
        printf("Enter : \n");
        scanf("%d",&n);
        if (n > max)
            max = n;
        if (n < min)
            min = n;

        printf("Wish to Continue ? Enter 0 for no and 1 for yes . \n");
        scanf("%d", &i);

    } while (i != 0);

    printf("Max = %d ",max);
    printf("Min = %d ",min);
    
}