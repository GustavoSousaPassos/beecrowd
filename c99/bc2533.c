#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int fSo, sSo, fVal, sVal, nCa, i, j;
	char str[5];
	double res;
	
	while(scanf("%d", &nCa))
	{	
		fSo = 0;
		sSo = 0;
		getchar();
		
		for(i = 0; i < nCa; i++)
		{
			fgets(str, sizeof(str), stdin);
			
			char *token = strtok(str, " \n");
			
			fVal = atoi(token);
			
			token = strtok(NULL, " \n");
			
			sVal = atoi(token);
			
			fSo += fVal * sVal;
			sSo += sVal;
			
			str[0] = '\0';
		}
		res = fSo / (sSo*100);
		printf("%.4f", res);
		
	}
}
