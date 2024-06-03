#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



int main()
{
	int qLi, qtA, sTo, i;
	char line[50];
	char nAl[20];
	
	while(1)
	{
		sTo = 0;
		
		scanf("%d", &qLi);
		getchar();
		
		if(qLi == 0) break;
		else
		{
			for(i = 0; i < qLi; i++)
			{
				fgets(line, sizeof(line), stdin);
				
				char *token = strtok(line, " \n");
				
				qtA = atoi(token);
				token = strtok(NULL, " \n");
				
				nAl[0] = '\0';
				
				while(token != NULL)
				{
					strcat(nAl, token);
					strcat(nAl, " ");
					token = strtok(NULL, " \n");
				}
				
				if(strlen(nAl) > 0 && nAl[strlen(nAl) - 1] == ' ')
					nAl[strlen(nAl) - 1] = '\0';
				
				if(strcmp(nAl, "suco de laranja") == 0) sTo += 120*qtA;
				else if(strcmp(nAl, "laranja") == 0) sTo += 50*qtA;
				else if(strcmp(nAl, "morango fresco") == 0) sTo += 85*qtA;
				else if(strcmp(nAl, "mamao") == 0) sTo += 85*qtA;
				else if(strcmp(nAl, "goiaba vermelha") == 0) sTo += 70*qtA;
				else if(strcmp(nAl, "manga") == 0) sTo += 56 * qtA;
				else if(strcmp(nAl, "brocolis") == 0) sTo += 34*qtA;
			}
			
			if(sTo < 110) printf("Mais %d mg\n", 110 - sTo);
			else if(sTo > 130) printf("Menos %d mg\n", sTo-130);
			else printf("%d mg\n", sTo);
		}
				
	}
}
