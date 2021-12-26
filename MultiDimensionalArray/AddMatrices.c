#include <stdio.h>
#define C 100
#define R 100
int main()
{
    int r1,r2, c1,c2, i, j;
    int mat1[R][C], mat2[R][C], res[R][C];

    printf("Enter rows and colums for mat 1: \n");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and colums for mat 2: \n");
    scanf("%d%d", &r2, &c2);

    if(!(r1 == r2 && c1 == c2))
        return 1;

    printf("Enter data for matrix1 : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n");

    printf("Enter data for matrix2 : \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\n");

    

    for (i = 0; i < c2; i++)          
    {
        printf("\n");
        for (j = 0; j < r2; j++)
        {
            printf("%d\t", res[i][j]);
        }
    }
}