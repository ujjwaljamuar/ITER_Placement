#include <stdio.h>
int add(int x,int y){
    while(y != 0 ){
        unsigned carry = x &y;
        x = x ^ y;
        y = carry << 1;
    }

    return x;
}

int main()
{
    int x,y;
    printf("Enter 1st number : \n");
    scanf("%d",&x);
    printf("Enter 2nd number : \n");
    scanf("%d",&y);
    printf("Sum of %d + %d = %d ",x,y,add(x,y));
    return 0;
}