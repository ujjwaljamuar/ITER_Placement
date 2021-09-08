#include <stdio.h>
int add(int x,int y){
    int carry;
    while (y != 0){
        carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
    
    
    }
int main(){
    int a,b;
    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);
    printf("Sum is %d .",add(a,b));
    return 0;
    
}