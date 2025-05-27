#include <stdio.h>

int main()
{
    int count, nCo, nLa, tCo = 0;

    scanf("%d", &count);

    for(int i = 0; i < count; i++)
    {
        scanf("%d %d", &nLa, &nCo);
        if(nCo < nLa) tCo += nCo;
    }

    printf("%d\n", tCo);
}