#include <stdio.h>
#define C 5
#define R 4

void printSpiral(int re, int ce, int a[R][C])
{
    int i, rs = 0, cs = 0;
    re--;
    ce--;

    while (rs < re && cs < ce)
    {
        for (i = cs; i < ce; i++)
            printf("%d ", a[rs][i]);
        rs++;

        for (i = rs; i < re; i++)
            printf("%d ", a[i][ce]);
        ce--;

        if (rs <= re)
        {
            for (i = ce; i >= cs; i--)
                printf("%d ", a[re][i]);
            re--;
        }

        if (cs <= ce)
        {
            for (i = re; i >= rs; i--)
                printf("%d ", a[i][cs]);

            cs++;
        }
    }
}

int main()
{
    int r, c, i, j;
    int mat[R][C];

    printf("Enter rows and colums for mat: \n");
    scanf("%d%d", &r, &c);

    printf("Enter data for matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");

    printSpiral(r, c, mat);
    printf("\n");
}