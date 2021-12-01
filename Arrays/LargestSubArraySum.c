#include <stdio.h>
#include <limits.h>

int maxSubArrSum(int a[],int size){
    int maxSoFar = INT_MIN, MaxEndHere = 0;
    for (int i = 0; i < size; i++)
    {
        MaxEndHere = MaxEndHere + a[i];

        if(maxSoFar < MaxEndHere)
            maxSoFar = MaxEndHere;

        if(MaxEndHere < 0)
            MaxEndHere = 0;
    }
    return maxSoFar;
    
}

void main(){
    int a[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(a)/sizeof(a[0]);

    int maxSum = maxSubArrSum(a,n);
    printf("Max Sum SubArray = %d",maxSum);
}