long long int fun(int ar[], int n, int i)
{
    if (i == n)  //base case
    {
        return 0;
    }
    return ar[i] + fun(ar, n, i+1);
}

#include <stdio.h>
int main()
{
    //n=size of array, i=index in array
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int total=fun(arr, n, 0);
    printf("%lld",total);
    return 0;
}