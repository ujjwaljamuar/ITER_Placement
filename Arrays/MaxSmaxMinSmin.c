#include <stdio.h>
#include <limits.h>
#define N 100
void main(){
    int max,smax,min,smin,n,sum,arr[N];
    float avg;
    max=smax = INT_MIN;
    min = smin = INT_MAX;

    printf("Enter no. of elements : \n");
    scanf("%d",&n);

    printf("\n Enter datas: \n");

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i] > max){
            smax = max;
            max = arr[i];
            }
        else if(arr[i] > smax)
            smax = arr[i];

        if(arr[i] < min){
            smin = min;
            min = arr[i];
            }
        else if(arr[i] < smin)
            smin = arr[i];

        sum += arr[i];
    }

    avg = (float) sum / n;

    printf("Max = %d \nSmax = %d Min = %d \nSmin = %d \n Avg = %.2f",max,smax,min,smin);
}