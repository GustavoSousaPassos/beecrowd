#include <stdio.h>
#include <math.h>

int main()
{
	int fVal, sVal, tVal, bAB;
	
	scanf("%d %d %d", &fVal, &sVal, &tVal);
	
	bAB = (fVal + sVal + abs(fVal-sVal)) / 2;
	
	bAB > tVal? printf("%d eh o maior\n", bAB) : printf("%d eh o maior\n", tVal);
}
