#include <stdio.h>
int fun(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    int count = 0;
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        count++;
    }
    return count + fun(s, i + 1);
}
int main()
{
    char s[2000];
    fgets(s, 2000, stdin);
    int n = fun(s, 0);
    printf("%d", n);
    return 0;
}