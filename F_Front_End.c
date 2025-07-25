int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = 0, r = n - 1;

    while (l <= r) {
        printf("%d ", arr[l++]);
        if (l <= r) {
            printf("%d ", arr[r--]);
        }
    }
    return 0;
}