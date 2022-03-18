#include <stdio.h>
#define SQR(a) a*a


int sqr(int a){
    return a*a;
    }

int main()
{
    int x = 10;
    printf("%d \n",sqr(++x));
    printf("%d ",SQR(++x));

    return 0;
}