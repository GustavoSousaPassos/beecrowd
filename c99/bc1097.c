#include <stdio.h>

int main()
{
	int i = 1, j, c, k;
	
	for(c = 7; c <= 15; c += 2)
	{
		j = c;
		
		for(k = 0; k < 3; k++)
		{
			printf("I=%d J=%d\n", i, j);
			j--;
		}
		i += 2;
	}
}
