#include <stdio.h>

int main()
{
	int fVal, sVal, i, sum = 0;
	
	scanf("%d\n%d", &fVal, &sVal);
	
	if(fVal > sVal)
	{
		int aux = fVal;
		fVal = sVal;
		sVal = aux;
	}
	
	for(i = fVal+1; i < sVal;i++)
		if(i % 2 != 0) sum += i;
	
	printf("%d\n", sum);
}
