#include <stdio.h>
int main(){
    int a = 10,b=20;
    a = a^b;
    b = a^b;
    a = a^b;

    printf("After Swap a is %d and b is %d.",a,b);
}