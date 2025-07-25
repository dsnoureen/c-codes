#include <stdio.h>
int main()
{
    int sumOfUppTriangle = 0, sumOfLowTriangle = 0;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j > i)
            {
                sumOfUppTriangle = sumOfUppTriangle + arr[i][j];
            }
            if (i > j)
            {
                sumOfLowTriangle = sumOfLowTriangle + arr[i][j];
            }
        }
    }
    printf("%d\n", sumOfUppTriangle);
    printf("%d\n", sumOfLowTriangle);
    return 0;
}