#include <stdio.h>
void fun(int n) // 1234
{
    if (n == 0)    
    {
        return;
    } 
    int x = n % 10; //4,3,2,1
    fun(n/10);
    printf("%d ", x);
}
int main()
{
    // count digits using recursion
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}