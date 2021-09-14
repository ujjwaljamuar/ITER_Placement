#include<stdio.h>
int main(){
    int a = 2,b = 5,c = 5;
    int x = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d",x);
}