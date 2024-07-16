#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int fSo, sSo, fVal, sVal, nCa, i, j;
	char str[4];
	
	while(scanf("%d", &nCa) == 1)
	{	
		for(i = 0; i < nCa; i++)
		{	
		    getchar();
			fgets(str, sizeof(str), stdin);
			
			char *token = strtok(str, " \n");
			
			fVal = atoi(token);
			
			token = strtok(NULL, " \n");
			
			sVal = atoi(token);
			
			printf("%d %d\n", fVal, sVal);
			
		}
	}
}
