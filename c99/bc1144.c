#include <stdio.h>
#include <math.h>

int main()
{
	int val, sRes, tRes, i;
	
	scanf("%d", &val);
	
	for(i = 1; i <= val; i++)
	{
		sRes = pow(i, 2);
		tRes = pow(i, 3);
		
		printf("%d %d %d\n", i, sRes, tRes);
		printf("%d %d %d\n", i, sRes+1, tRes+1);
	}
}
