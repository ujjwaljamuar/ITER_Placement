#include <stdio.h>
int main()
{
    float p, r, t, si, amount;
    printf("enter the values of principal,interest & time \n");
    scanf("%f%f%f", &p, &r, &t);

    si = p * r * t / 100;
    amount = si + p;

    printf("Principal is %f , rate is %f , time is %f , simple interest is %f and amount is %f", p, r, t, si, amount);
    return 0;
}