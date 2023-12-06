#include <stdio.h>

int main()
{
	int ano, count, resY, i;
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		scanf("%d", &ano);
		
		resY = abs(ano - 2015);
		
		if(ano >= 2015)
		{
			resY++;
			printf("%d A.C.\n", resY);
		}
		else printf("%d D.C.\n", resY);
	}
}
