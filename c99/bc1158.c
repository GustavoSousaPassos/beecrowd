#include <stdio.h>

int main()
{
	int nCa, x, y, i;
	
	scanf("%d", &nCa);
	
	for(i = 0; i < nCa; i++)
	{
		int count = 0, sum = 0;
		
		scanf("%d %d", &x, &y);
		
		while(count != y)
		{
			if(x % 2 != 0)
			{
				sum += x;
				count++;
			}
			x++;
		}
		
		printf("%d\n", sum);
	}
}
