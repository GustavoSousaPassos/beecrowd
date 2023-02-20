#include <stdio.h>

int main()
{
	int fVal, sVal, aux, i;
	
	scanf("%d\n%d", &fVal, &sVal);
	
	if(fVal > sVal)
	{
		aux = sVal;
		sVal = fVal;
		fVal = aux;
	}
	
	for(i = fVal+1; i < sVal; i++)
		if(i % 5 == 2 || i % 5 == 3) printf("%d\n", i);
}
