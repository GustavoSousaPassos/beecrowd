#include <stdio.h>

int main()
{
	float sum, val;
	int count = 0, i;
	
	for(i = 0; i < 6; i++)
	{
		scanf("%f", &val);
		
		if(val > 0)
		{
			count++;
			sum += val;
		}
	}
	
	printf("%d valores positivos\n%.1f\n", count, sum / count);
}
