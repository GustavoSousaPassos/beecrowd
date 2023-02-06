#include <stdio.h>

int main()
{
	int bigger, pos = 1, val, i;
	
	scanf("%d", &bigger);
	
	for(i = 2; i <= 100; i++)
	{
		scanf("%d", &val);
		
		if(val > bigger)
		{
			bigger = val;
			pos = i;
		}
	}
	
	printf("%d\n%d\n", bigger, pos);
}
