#include <stdio.h>

int main()
{
	int nCa, i, val;
	
	scanf("%d", &nCa);
	
	for(i = 0; i < nCa; i++)
	{
		scanf("%d", &val);
		
		printf("resposta %d: %d\n", i+1, val);
	}
}
