#include <stdio.h>
#define R 4
#define C 4

void printMat(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d   ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[R][C];
    printf("Enter data for 4x4 matrix : \n");

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printMat(mat);
    return 0;
}