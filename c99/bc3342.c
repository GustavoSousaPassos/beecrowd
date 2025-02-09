#include <stdio.h>
#include <math.h>

int main()
{
	int val, cB, cP;
	
	scanf("%d", &val);
	
	cB = (int) pow(val, 2) / 2;
	cP = cB;
	
	if(val % 2 != 0) cB++;
	
	printf("%d casas brancas e %d casas pretas\n", cB, cP);
}
