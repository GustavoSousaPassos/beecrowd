#include <stdio.h>

int main()
{
	int fVal, sVal, res;
	
	scanf("%d %d", &fVal, &sVal);
	
	if(fVal == sVal) res = fVal;
	else res = fVal > sVal? fVal : sVal;
	
	printf("%d\n", res);
}
