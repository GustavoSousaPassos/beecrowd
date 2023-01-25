#include <stdio.h>

int main()
{
	int val, i, countP, countI, countPo, countN;
	countP = countI = countPo = countN = 0;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &val);
		
		val % 2 == 0? countP++ : countI++;
		if(val > 0)countPo++;
		else if(val < 0) countN++;
	}
	
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", countP, countI, countPo, countN);
}
