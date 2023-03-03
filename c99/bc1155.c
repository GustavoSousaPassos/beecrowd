#include <stdio.h>

int main()
{
	float s = 1.0, val;
	int i;
	
	for(i = 2; i <= 100; i++)
	{
		val = (float) 1 / i;
		s += val;
	}
	
	printf("%.2f\n", s);
}
