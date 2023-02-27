#include <stdio.h>

int main()
{
	int valX, valZ, j, sum , i;
	valZ = j = sum = 0;
	
	scanf("%d", &valX);
	
	while(1)
	{
		scanf("%d", &valZ);
		if(valZ > valX) break;
	}
	
	for(i = valX; i < valZ; i++)
	{
		sum += i;
		j++;
		if(sum > valZ) break;
	}
	printf("%d\n", j);
}
