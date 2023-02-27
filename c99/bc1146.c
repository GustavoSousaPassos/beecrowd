#include <stdio.h>

int main()
{
	int val, i;
	
	while(1)
	{
		scanf("%d", &val);
		
		if(val == 0) break;
		else
		{
			for(i = 1; i < val; i++)
				printf("%d ", i);
			printf("%d\n", val);
			
		}
	}
}
