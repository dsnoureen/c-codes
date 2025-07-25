#include <stdio.h>
int fun(char arr[], int i)
{
    if (arr[i] == '\0')
    {
        return 0;
    }
    int count = fun(arr, i + 1);
    if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}
int main()
{
    char ar[300];
    fgets(ar, 300, stdin);
    int l = fun(ar, 0);
    printf("%d", l);
    return 0;
}