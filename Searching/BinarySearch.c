#include <stdio.h>

int binarySearch(int arr[],int l, int r,int key) {
    if(r >= l){
        int mid = l + (r-l/2);
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            return binarySearch(arr,mid+1,r,key);
        }
        return binarySearch(arr,l,mid-1,key);
    }

    return -1;
}

void main(){
    int arr[] = {10,12,15,25,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Enter key : \n");
    int key;

    scanf("%d",&key);

    int res = binarySearch(arr,0,n-1,key);

    (res == -1)? printf("Key not found ! \n" ) : printf("Key found at %d index \n",res);
}