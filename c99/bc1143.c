#include <stdio.h>
#include <math.h>

int main()
{
	int count, i;
	
	scanf("%d", &count);
	
	for(i = 1; i <= count; i++)
		printf("%d %.0f %.0f\n", i, pow(i, 2), pow(i, 3));
}
