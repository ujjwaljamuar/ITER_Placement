#include <stdio.h>
int main(){
    int n,i;
    printf("Enter : \n");
    scanf("%d",&n);
    printf("1 ");
    for(i = 2; i <= n/2; i++){
        if(n % i == 0)
            printf("%d " ,i );
    }
    printf("%d",n);
}