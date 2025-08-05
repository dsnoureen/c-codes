#include <stdio.h>
#include <limits.h>
int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int arr[n];

    // n=no of elements in an array
    // k=maximum elements to sum within the array

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // Descending sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // sum until k
   long long int sum = 0;
    long long int count = 0;
    
    for (long long int i = 0; i < n && count < k; i++)
    {
        if (arr[i] > 0) 
        {
            sum += arr[i];
            count++;
        }
        else
        {
            break;  
        }
    }
    
    printf("%lld\n", sum);
    return 0;
}