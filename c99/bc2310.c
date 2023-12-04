#include <stdio.h>

int main()
{
	int sA, bA, aA, tS, tB, tA, count, i;
	char name[10];
	
	sA =  bA =  aA =  tS =  tB =  tA = 0;
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		int fVal, sVal, tVal;
		
		scanf("%s", &name);
		scanf("%d %d %d", &fVal, &sVal, &tVal);
		
		tS += fVal;
		tB += sVal;
		tA += tVal;
		
		scanf("%d %d %d", &fVal, &sVal, &tVal);
		
		sA += fVal;
		bA += sVal;
		aA += tVal;
	}
	
	printf("Pontos de Saque: %.2f %%.\n", ((double)sA / tS) * 100.0);
	printf("Pontos de Bloqueio: %.2f %%.\n", ((double)bA / tB) * 100.0);
	printf("Pontos de Ataque: %.2f %%.\n", ((double)aA / tA) * 100.0);
}
