#include <stdio.h>
#define MAX 100

void display(int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    printf("\nEnter number of columns : ");
    scanf("%d", &cols);
    int sparceMatrix[rows][cols];
    printf("Enter elements in the sparce matrix : ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &sparceMatrix[i][j]);
        }
    }
    printf("\n");
    display(rows, cols, sparceMatrix);
    int size = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparceMatrix[i][j] != 0)
                size++;
        }
    }

    int compactMatrix[size][3];
    int k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparceMatrix[i][j] != 0)
            {
                compactMatrix[k][0] = i;
                compactMatrix[k][1] = j;
                compactMatrix[k][2] = sparceMatrix[i][j];
                k++;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", compactMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
