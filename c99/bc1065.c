#include <stdio.h>

int main()
{
	int val, count = 0, i;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &val);
		if(val % 2 == 0) count++;
	}
	
	printf("%d valores pares\n", count);
}
