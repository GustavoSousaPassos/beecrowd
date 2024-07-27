#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int nJo, i, fI;
	char res[50];
	
	while(scanf("%d", &nJo) == 1)
	{
		getchar();
		fI = 0;
		
		int vec[nJo];
		
		fgets(res, sizeof(res), stdin);
		
		char *token = strtok(res, " \n");
		
		for(i = 0; i < nJo; i++)
		{
			vec[i] = atoi(token);
			token = strtok(NULL, " \n");
		}
		
		for(i = 0; i < nJo; i++)
			if(vec[i] == 1) fI++;
		
		int cal = ceil((nJo / 3.0) * 2);
		
		fI >= cal? printf("impeachment\n") : printf("acusacao arquivada\n");
	}
}
