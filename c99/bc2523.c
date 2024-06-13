#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	char cLe[26], cPos[50];
	int num, i;
	
	while(scanf("%s", cLe) == true)
	{
		//cLe[0] = '\0';
		
		scanf("%d", &num);
		
		int cVal[num];
		getchar();
		
		fgets(cPos, sizeof(cPos), stdin);
		
		char *token = strtok(cPos, " \n");
		
		for(i = 0; i < num; i++)
		{
			cVal[i] = atoi(token);
			token = strtok(NULL, " \n");
		}
		
		char *res = malloc(sizeof(char)*num);
		
	}
}
