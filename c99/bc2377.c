#include<stdio.h>

int main()
{
    int nPe, kTo, dPe, vKi, vPe;
    
    scanf("%d %d\n%d %d", &kTo, &dPe, &vKi, &vPe);
    
    nPe = kTo / dPe;
    
    printf("%d\n", kTo*vKi + nPe*vPe);
}
