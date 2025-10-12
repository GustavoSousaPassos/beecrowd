#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* calcRe(int pu, int qtd)
{
	int i;
	int * cVal = malloc(sizeof(int)* qtd);
	char * sCa = malloc(sizeof(char)*(qtd*2));
	
	fgets(sCa, qtd*2, stdin);
	
	char* token = strtok(sCa, " \n");
	
	for(i = 0; i < qtd; i++)
	{
	    cVal[i] = atoi(token);
	    token = strtok(NULL, " \n");
	}
	
	for(i = 0; i < qtd-1; i++)
	{
	    if(abs(cVal[i] - cVal[i+1]) > pu)
	    {
	        free(cVal);
	        free(sCa);
	        return "GAME OVER";
	    }
	}
	
	free(cVal);
	free(sCa);
	return "YOU WIN";
}


int main()
{
	int aPu, qCa;
	
	scanf("%d %d", &aPu, &qCa);
	getchar();
	
	puts(calcRe(aPu, qCa));
}
