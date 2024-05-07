#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int qLi, qtA, sTo, i;
	char line[50];
	char nAl[20];
	
	while(1)
	{
		strcpy(nAl, "");
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
				
				while(token != NULL)
				{
					strcat(nAl, token);
					strcat(nAl, " ");
					token = strtok(NULL, " \n");
				}
				
				if(strcmp(nAl, "suco de laranja") == 1) printf("sla\n");
			}
		}
	}
}
