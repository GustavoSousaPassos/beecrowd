#include<stdio.h>
#include<string.h>

int main()
{
	int count, i;
	char fVal[7], sVal[7];
	
	scanf("%d", &count);
	
	for(i = 1; i <= count; i++)
	{
		int winner = 0;
		scanf("%s %s", &fVal, &sVal);
			
		if(strcmp(fVal, sVal) == 0) winner = 0;
		else if(strcmp(fVal, "tesoura") == 0)
		{
			if(strcmp(sVal, "papel") == 0 || strcmp(sVal, "lagarto") == 0) winner = 1;
			else winner = 2;
		}
		else if(strcmp(fVal, "papel") == 0)
		{
			if(strcmp(sVal, "pedra") == 0 || strcmp(sVal, "Spock") == 0) winner = 1;
			else winner = 2;
		}
		else if(strcmp(fVal, "pedra") == 0)
		{
			if(strcmp(sVal, "tesoura") == 0 || strcmp(sVal, "lagarto") == 0) winner = 1;
			else winner = 2;
		}
		else if(strcmp(fVal, "lagarto") == 0)
		{
			if(strcmp(sVal, "Spock") == 0 || strcmp(sVal, "papel") == 0) winner = 1;
			else winner = 2;
		}
		else
		{
			if(strcmp(sVal, "pedra") == 0 || strcmp(sVal, "tesoura") == 0) winner = 1;
			else winner = 2;
		}
	
		printf("Caso #%d: ", i);
		
		if(winner == 1) printf("Bazinga!\n");
		else if(winner == 2) printf("Raj trapaceou!\n");
		else printf("De novo!\n");
	}
}
