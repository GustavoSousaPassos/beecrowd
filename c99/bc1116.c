#include <stdio.h>

int main()
{
	int fVal, sVal, cont, i;
	
	scanf("%d", &cont);
	
	for(i = 0; i < cont; i++)
	{
		scanf("%d %d", &fVal, &sVal);
		
		sVal == 0? printf("divisao impossivel\n") : printf("%.1f\n", (float) fVal/sVal);
	}
}
