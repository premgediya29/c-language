#include <stdio.h>

main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
