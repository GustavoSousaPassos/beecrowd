#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char cLe[26], cPos[50];
	int num, i;
	
	while(scanf("%s", cLe) == 1)
	{
		if(scanf("%d", &num) != 1) break;
		
		int cVal[num];
		getchar();
		
		fgets(cPos, sizeof(cPos), stdin);
		
		char *token = strtok(cPos, " \n");
		
		for(i = 0; i < num; i++)
		{
			if(token != NULL)
			{
				cVal[i] = atoi(token) - 1;
				token = strtok(NULL, " \n");
			}
		}
		
		char *res = malloc(sizeof(char)*(num+1));
		
		for(i = 0; i < num; i++)
		{
		    int pos = cVal[i];
		    if(pos >= 0 && pos <= 26) res[i] = cLe[pos];
		}
		res[num] = '\0';
		
		puts(res);
	
		free(res);
	}
}
