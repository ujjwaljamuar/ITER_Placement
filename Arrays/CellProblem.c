#include <stdio.h>

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {       
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void cellsComplete(int cells[],int n,int d){
    int temp[n];
    while(d--){
        temp[0] = cells[1];
        temp[n-1] = cells[n-2];

        for(int i = 1;i<n-2;i++)
            temp[i] = cells[i-1] ^ cells [i+1];

        for(int i = 0;i < n;i++)
            cells[i] = temp[i];
        

        printArray(cells,n);
    }
}

void main(){
    int cells[] = {1,0,0,0,0,1,0,0};
    int k;
    printf("Enter number of days : \n");
    scanf("%d",&k);

    int n = sizeof(cells)/sizeof(cells[0]);

    cellsComplete(cells,n,k);
}