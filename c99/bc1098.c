#include <stdio.h>

int main()
{
	float i = 0.0, j = 1.0;
	int c, d;
	
	for(c = 0; c < 3; c++)
	{
		printf("I=%.0f J=%.0f\n", i, j);
		j++;
	}
	
	i += 0.2;
	j = 1.0;
	j += 0.2;
	
	for(c = 0; c < 9; c++)
	{
		for(d = 0; d < 3;d++)
		{
			if(i == 1.0 || i == 2.0) 
				printf("I=%.0f J=%.0f\n", i, j);
			else 
				printf("I=%.1f J=%.1f\n", i, j);
			j++;
		}
		
		i += 0.2;
		j -= 3;
		j += 0.2;
	}
	
	for(c = 0; c < 3; c++)
	{
		printf("I=%.0f J=%.0f\n", i, j);
		j++;
	}
}
