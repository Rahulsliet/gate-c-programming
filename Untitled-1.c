#include <stdio.h>
int main()
{

    int funA(int n)
    {
        if (n > 0)
        {
            printf("%d", n);
        }
        funB(n - 1);
    }

    int funB()
    {
        int n;
        if (n > 0)
        {
            printf("%d", n);
        }
        funA(n / 2);
    }
    int main()
    {
        funA(20);
        return 0;
    }
}