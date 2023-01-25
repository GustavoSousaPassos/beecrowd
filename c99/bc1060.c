#include <stdio.h>

int main()
{
	int count = 0, i;
	
	for(i = 0; i < 6; i++)
	{
		float val;
		scanf("%f", &val);
		if(val > 0) count++;
	}
	printf("%d valores positivos\n", count);
}
