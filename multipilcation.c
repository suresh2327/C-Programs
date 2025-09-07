#include <stdio.h>
int main()
{
    int m1, n1;
    printf("Enter m1xn1\n");
    scanf("%d%d", &m1, &n1);
    printf("Enter m1xn1 mat1 elements\n");
    int mat1[m1][n1];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    int m2, n2;
    printf("Enter m2xn2\n");
    scanf("%d%d", &m2, &n2);
    printf("Enter m2xn2 mat2 elements\n");
    int mat2[n2][m2];
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    int mat[m1][n2];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            mat[i][j] = 0;
            
                        
            for (int k = 0; k < n1; k++)
            {
                mat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Multiplication of mat1 and mat2 is mxm\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}