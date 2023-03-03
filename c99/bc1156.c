#include <stdio.h>

int main()
{
	float s = 1.0, odd = 3, pair = 2;
	int i;
	
	for(i = 1; i <= 39; i++)
	{
		s += odd / pair;
		
		odd += 2;
		pair *= 2;
	}
	
	printf("%.2f\n", s);
}
