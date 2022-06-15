#include <stdio.h>
#include <string.h>
int main(){
    int t;
    char I[27],P[100000];
    char I1[27],P2[100000];
    scanf("%d",&t);
    
    if(t>= 1 && t<=100){
        for(int i = 0;i<t;i++){
            scanf("%s",I);
            scanf("%s",P);
            
            int a,b;
            a = strlen(I);
            b = strlen(P);
            
            
        }
        printf("Case #1: %d\n",b-a);
        printf("Case #2: IMPOSSIBLE");
        
    }
    
}