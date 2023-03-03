#include <stdio.h>

int main()
{
	int count, val, sum, i, j;
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		scanf("%d", &val);
		sum = 0;
		
		for(j = 1; j < val; j++)
			if(val % j == 0) sum += j;
		
		if(sum == val) printf("%d eh perfeito\n", val);
		else printf("%d nao eh perfeito\n", val);
	}
}
