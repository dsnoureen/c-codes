#include <stdio.h>
#include <limits.h>
int fun(int arr[], int n, int i)
{
    if (i == n)
    {
        return INT_MAX;
    }
    int min = fun(arr, n, i + 1);
    if (arr[i] > min)
    {
        return min;
    }
    else
    {
        return arr[i];
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = fun(arr, n, 0);
    printf("%d", x);
    return 0;
}