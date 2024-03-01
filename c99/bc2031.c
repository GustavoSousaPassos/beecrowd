#include <stdio.h>
#include <string.h>

int main()
{
	char fPal[6], sPal[6], res[20];
	int nCa, i;
	
	scanf("%d", &nCa);
	
	for(i = 0; i < nCa; i++)
	{
		scanf("%s\n%s", &fPal, &sPal);
		
		if(strcmp(fPal, "pedra") == 0) 
		{
			if(strcmp(sPal, "ataque") == 0) puts("Jogador 2 venceu");
			else if(strcmp(sPal, "papel") == 0) puts("Jogador 1 venceu");
			else puts("Sem ganhador");
		}
		else if(strcmp(fPal, "papel") == 0)
		{
			if(strcmp(sPal, "pedra") == 0 || strcmp(sPal, "ataque") == 0) puts("Jogador 2 venceu");
			else puts("Ambos venceram");
		}
		else
		{
			if(strcmp(sPal, "pedra") == 0 || strcmp(sPal, "papel") == 0) puts("Jogador 1 venceu");
			else puts("Aniquilacao mutua");
		}
	}
	
}
