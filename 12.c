#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the number of row and coloumn in the matrix:\n ");
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    int t[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            t[j][i] = m[i][j];
        }
    }
    printf("\ntranspose matrix is: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    if (r != c)
    {
        printf("Not symmetric (matrix not square)");
    }
    else
    {
        int symmetric = 1;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (t[i][j] != m[i][j])
                {
                    symmetric = 0;
                    break;
                }
            }
        }

        if (symmetric)
            printf("Matrix is symmetric");
        else
            printf("Matrix is not symmetric");
    }

    return 0;
}
