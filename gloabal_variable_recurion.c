#include <stdio.h>
#include <conio.h>
int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int r;
    printf("enter the value of r: ");
    scanf("%d", &r);
    printf("%d", fun(r));
}