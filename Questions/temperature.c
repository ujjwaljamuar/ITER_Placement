#include <stdio.h>
int main()
{
    float f, c;
    printf("enter the value in fahrenheit : ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("temperature in centigrade is %f", c);
}