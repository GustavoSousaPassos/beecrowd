#include <stdio.h>
 
int main() 
{
    int mRe, tFGi, tSGi;
    
    scanf("%d\n%d %d", &mRe,&tFGi, &tSGi);
    
    tFGi + tSGi <= mRe? printf("Farei hoje!\n") : printf("Deixa para amanha!\n");
    return 0;
}
