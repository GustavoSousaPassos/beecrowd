#include <stdio.h>

int main()
{
	int count, i, val;
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		int j, cNu = 0;
		
		scanf("%d", &val);
		
		for(j = 1; j <= val; j++)
			if(val % j == 0) cNu++;
		
		cNu == 2? printf("%d eh primo\n", val) : printf("%d nao eh primo\n", val);
	}
}
