#include <stdio.h>

int main()
{
	int cVal[46], val, i;
	
	cVal[0] = 0;
	cVal[1] = 1;
	
	scanf("%d", &val);
	
	printf("%d %d", cVal[0], cVal[1]);
	
	for(i = 2; i < val; i++)
	{
		cVal[i] = cVal[i-2] + cVal[i-1];
		printf(" %d", cVal[i]);
	}
	printf("\n");
}
