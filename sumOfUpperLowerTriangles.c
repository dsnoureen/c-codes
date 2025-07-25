#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sumOfUpperTriangle = 0;
    int sumOfLowerTriangle = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j)
            {
                sumOfUpperTriangle = sumOfUpperTriangle + arr[i][j];
            }
            if (i > j)
            {
                sumOfLowerTriangle = sumOfLowerTriangle + arr[i][j];
            }
        }
    }
    printf("%d\n", sumOfUpperTriangle);
    printf("%d\n", sumOfLowerTriangle);
    return 0;
}