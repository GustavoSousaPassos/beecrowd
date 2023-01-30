#include <stdio.h>

int main()
{
	int val, count = 0;
	
	scanf("%d", &val);
	
	while(count <= 5)
	{
		if(val % 2 != 0)
		{
			printf("%d\n", val);
			count++;
		}
		val++;
	}
}
