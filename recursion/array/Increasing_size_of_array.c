#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, *q;
    int i;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 10;
    p[1] = 34;
    p[2] = 33;
    p[3] = 344;
    p[4] = 23;
    q = (int *)malloc(10 * sizeof(int));
    for (i = 0; i <= 5; i++)
    {
        q[i] = p[i];

        printf("%d\n", q[i]);
    }
    free(p);
    return 0;
}