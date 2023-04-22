#include <stdio.h>
#include <conio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}
int main()
{
    int result;
    result = fact(5);
    printf("%d", result);
}