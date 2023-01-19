#include <stdio.h>

int main()
{
	int fVal, sVal, tVal, aux, i, j, k;
	
	scanf("%d %d %d", &fVal, &sVal, &tVal);
	
	int cVal[3] = {fVal, sVal, tVal};
	
	for(k = 0; k < 2; k++)
	{
		for(i = 0; i < 2;i++)
		{
			if(cVal[i] > cVal[i+1])
			{
				aux = cVal[i];
				cVal[i] = cVal[i+1];
				cVal[i+1] = aux;
			}
		}
	}
	
	for(j = 0; j < 3; j++) printf("%d\n", cVal[j]);
	
	printf("\n%d\n%d\n%d\n", fVal, sVal, tVal);
}
