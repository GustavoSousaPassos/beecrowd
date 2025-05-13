#include <stdio.h>

int main()
{
    int count, qRe, res;

    scanf("%d", &count);

    for(int i = 0; i < count; i++)
    {
        scanf("%d", &qRe);
        res = 1+(qRe*(qRe+1) / 2);
        printf("%d\n", res);
    }
}