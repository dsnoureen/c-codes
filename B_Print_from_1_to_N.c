void fun(int m, int b)
{
    if (m == b + 1)
    {
        return;
    }
    printf("%d\n", m);
    fun(m + 1, b);
}

int main()
{
    int n;
    scanf("%d", &n);
    fun(1, n);
    return 0;
}