#include <stdio.h>

int main()
{
	int count = 0, fVal, sVal, i;
	
	scanf("%d %d", &fVal, &sVal);
	
	printf("%d", 1);
	
	for(i = 2; i != sVal; i++)
	{
		printf(" %d", i);
		count++;
		
		if(count == fVal-1)
		{
			printf("\n%d", i+1);
			count = 0;
			i++;
		}
	}
	printf(" %d\n", sVal);
}
