int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                count = 1;
                break;
            }
        }
    }
    if (count == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}