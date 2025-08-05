#include <stdio.h>
#include <limits.h>
int main()
{
    int n, count = 0, min = INT_MAX;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    // printf("%d",min);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}