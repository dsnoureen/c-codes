#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int diff, sumOfPrimary = 0, sumOfSecondary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumOfPrimary = sumOfPrimary + arr[i][j];
            }
            if (i + j == n-1)
            {
                sumOfSecondary = sumOfSecondary + arr[i][j];
            }
        }
    }
    diff = (sumOfPrimary - sumOfSecondary);
    printf("%d", abs(diff));
    return 0;
}