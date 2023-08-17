#include<stdio.h>

int main()
{
	int nCa, r1, r2, i;
	
	scanf("%d", &nCa);
	
	for(i = 0; i < nCa; i++)
	{
		scanf("%d %d", &r1, &r2);
		printf("%d\n", r1+r2);
	}
	
}
