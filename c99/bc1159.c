#include <stdio.h>

int main()
{
	int val, som, count;
	
	for(;;)
	{
		som = 0;
		
		scanf("%d", &val);
		
		if(val == 0) break;
		else
		{
			count = 0;
			
			while(1)
			{
				if(val % 2 == 0)
				{
					som += val;
					count++;
				}
				if(count == 5) break;
				else val++;
			}
			printf("%d\n", som);
		}
	}
}
