#include<stdio.h>
int main(){
    
    int x = 10,y = 20 , z = 30;
    int max = x > y ?( x > z ? x : z ) : (y > z ? y : z);
    printf("%d",max);
}