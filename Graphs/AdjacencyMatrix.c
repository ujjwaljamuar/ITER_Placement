#include <stdio.h>
#define V 5
void addEdge(int arr[V][V],int src,int dest){
    arr[src][dest] = 1;       // for directed
    
//  arr[dest][src] = 1        // for undirected
}

void printMatrix(int arr[V][V]){
    int i,j;
    for(i = 0;i<V;i++){
        for(j = 0;j<V;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int adjMat[V][V] = {{0}};

    addEdge(adjMat,0,1);
    addEdge(adjMat,0,2);
    addEdge(adjMat,0,3);
    addEdge(adjMat,1,3);
    addEdge(adjMat,1,2);

    printMatrix(adjMat);

}