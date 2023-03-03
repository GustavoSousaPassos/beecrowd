#include <stdio.h>

int main()
{
	int sum = 0, i = 0, val;
	float res;
	
	while(1)
	{
		scanf("%d", &val);
		
		if(val < 0) break;
		else
		{
			sum += val;
			i++;
		}
	}
	
	res = (float) sum / i;
	
	printf("%.2f\n", res);
}
