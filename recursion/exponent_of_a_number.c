#include <stdio.h>
#include <conio.h>
int expo(int n, int r)
{
    if (r == 0)
    {
        return 1;
    }
    else
    {
        return expo(n, r - 1) * n;
    }
}
int main()
{
    int result;
    result = expo(2, 8);
    printf("%d", result);
}