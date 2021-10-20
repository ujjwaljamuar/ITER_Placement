#include <stdio.h>
int isPrime(int n){
    int i;

    if(n <= 1)
        return 0;
    if(n <= 3)
        return 1;
    if(n % 2 == 0 || n % 3 == 0)
        return 0;
    for(i = 5 ; i*i <= n; i +=6 ){
        if(n % i == 0 || n % (i+2) == 0)
            return 0;
    }
    return 1;
}

int main(){
    int n,i;
    printf("Enter : \n");
    scanf("%d",&n);
    printf("1 ");
    for(i = 2; i <= n/2; i++){
        if(n % i == 0 && isPrime(i))
            printf("%d " ,i );
    }
    if(isPrime(n))
        printf("%d",n);
}