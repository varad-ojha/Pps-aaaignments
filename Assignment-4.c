#include <stdio.h> 
int main() 
{ 
    int mat1[2][2], mat2[2][2], sum[2][2];
    printf("Enter elements of 1st matrix (2x2):\n");
    for (int i=0;i<2;i++) 
    {
        for (int j=0;j<2;j++) 
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix (2x2):\n");
    for (int i=0;i<2;i++) 
    {
        for (int j=0;j<2;j++) 
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i=0;i<2;i++) 
    {
        for (int j=0;j<2;j++) 
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Your entered matrices are:\n");
    printf("Matrix 1:\n"); 
    for (int i=0;i<2;i++) 
    {
        for (int j=0;j<2;j++) 
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++) 
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the two matrices:\n");  
    for (int i=0;i<2;i++) 
    {
        for (int j=0;j<2;j++) 
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
