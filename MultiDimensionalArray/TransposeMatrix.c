#include <stdio.h>
#define C 100
#define R 100
void main()
{
    int r, c, i, j;
    int mat[R][C], tmat[C][R];

    printf("Enter rows and colums : \n");
    scanf("%d%d", &r, &c);

    printf("Enter data for matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
            tmat[j][i] = mat[i][j];
        }
    }

    for (i = 0; i < c; i++)          // printing transpose
    {
        printf("\n");
        for (j = 0; j < r; j++)
        {
            printf("%d\t", tmat[i][j]);
        }
    }
}