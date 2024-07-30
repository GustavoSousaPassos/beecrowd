#include <stdio.h>

int main()
{
    int nCa, ind, fVal, sVal, count, i;
    
    while(scanf("%d %d", &nCa, &ind) == 2)
    {
        count = 0;
        
        for(i = 0; i < nCa; i++)
        {
            scanf("%d %d", &fVal, &sVal);
            
            if(fVal == ind && sVal == 0) count++;
        }
        
        printf("%d\n", count);
    }
}

