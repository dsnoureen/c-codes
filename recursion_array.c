void fun(int arr, int n, int i)
{
    if (i == n )
    {
        return;
    }
    printf("%d ", i+1);
    fun(arr, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i = 0;
    fun(arr, n, i);
    return 0;
}