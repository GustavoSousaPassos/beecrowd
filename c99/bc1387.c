#include <stdio.h>

int main()
{
    int fVal, sVal;

    while(1)
    {
        scanf("%d %d", &fVal, &sVal);

        if(fVal == 0 && sVal == 0) break;
        else printf("%d\n", fVal+sVal);
    }
}