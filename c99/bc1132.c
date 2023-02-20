#include <stdio.h>

int main()
{
	int fVal, sVal, sum = 0, aux, i;
	
	scanf("%d\n%d", &fVal, &sVal);
	
	if(fVal > sVal)
	{
		aux = fVal;
		fVal = sVal;
		sVal = aux;
	}
	
	for(i = fVal; i < sVal; i++)
		if(i % 13 != 0) sum += i;
	
	printf("%d\n", sum);
}
