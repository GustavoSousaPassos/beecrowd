#include <stdio.h>

int main()
{
	int num, fVal, sVal, i, j;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++)
	{
		int sOdd = 0;
		
		scanf("%d %d", &fVal, &sVal);
		
		if(sVal < fVal)
		{
			int aux = fVal;
			fVal = sVal;
			sVal = aux;
		}
		
		for(j = fVal+1; j < sVal; j++)
			if(j % 2 != 0) sOdd += j;
		
		printf("%d\n", sOdd);
	}
}
