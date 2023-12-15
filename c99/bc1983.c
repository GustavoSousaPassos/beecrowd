#include <stdio.h>

int main()
{
	int qtdA, nMa, aEs = 0, i;
	double nota, nEs = 0.0;
	
	scanf("%d", &qtdA);
	
	for(i = 0; i < qtdA; i++)
	{
		scanf("%d %lf", &nMa, &nota);
		
		if(nota > nEs && nota >= 8)
		{
			aEs = nMa;
			nEs = nota;
		}
	}
	
	nEs == 0? printf("Minimum note not reached\n"): printf("%d\n", aEs);
}
