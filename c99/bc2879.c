#include <stdio.h>

int main()
{
    int count, num, res = 0;

    scanf("%d", &count);

    for(int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        if(num != 1) res++;
    }

    printf("%d\n", res);
}