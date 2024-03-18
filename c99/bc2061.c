#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int nAb, nA, i, tam = 6;
	
	scanf("%d %d", &nAb, &nA);
	
	//getchar();
	
	for(i = 0; i < nA; i++)
	{
		//scanf("%s", pal);
		pal = malloc((tam+1)* sizeof(char));
		
		gets(pal);
		
		if(strcmp(pal, "fechou") == 0)
		{
			nAb -= 1;
			nA += 2;
		}
		else
			nAb -= 1;
			
		free(pal);	
	}
	
	
	printf("%d\n", nAb);
}
