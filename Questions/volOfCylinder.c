#define PI 3.14
#include <stdio.h>
int main()
{
    float r, h, vol;
    printf("enter radius and height : \n");
    scanf("%f%f", &r, &h);

    vol = PI * r * r * h;

    printf("Volume of the cylinder is %f cubic unit", vol);
}