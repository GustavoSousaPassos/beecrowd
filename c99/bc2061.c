#include <stdio.h>
#include <string.h>

int main()
{
	int nAb, nA, i;
	char pal[7];
	
	scanf("%d %d", &nAb, &nA);
	
	getchar();
	
	for(i = 0; i < nA; i++)
	{
		scanf("%s", pal);
		
		if(strcmp(pal, "fechou") == 0)
		{
			nAb -= 1;
			nAb += 2;
		}
		else
			nAb -= 1;
	}
	
	
	printf("%d\n", nAb);
}
