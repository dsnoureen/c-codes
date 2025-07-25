#include <stdio.h>
int main()
{
    int arr[3][3] = {{15, 0, 0}, {0, 0, 0}, {0, 0, 15}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("%d", sum);
    return 0;
}