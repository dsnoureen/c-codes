#include <stdio.h>
#include <stdlib.h>
void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    int x = n % 10;
    fun(n / 10);
    printf("%d ", x);
}

int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}