#include <stdio.h>

int main()
{
	int count, res, val, i;
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		scanf("%d", &val);
		
		res = val % 2 == 0? 0 : 1;

		printf("%d\n", res);
	}
}
