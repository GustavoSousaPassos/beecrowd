#include <stdio.h>

int main()
{
	double vec[12][12], sum = 0.0;
	int val = 10, i, j;
	char op;
	
	scanf("%c", &op);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
			scanf("%lf", &vec[i][j]);
	}
	
	for(i = 1; i < 6; i++)
	{
		for(j = 11; j != val; j--)
			sum += vec[i][j];
		val--;
	}
	
	for(i = 6; i < 11; i++)
	{
		for(j = i+1; j < 12; j++)
			sum += vec[i][j];
	}
	
	if(op != 'S') sum /= 30.0;
	
	printf("%.1f\n", sum);
}
