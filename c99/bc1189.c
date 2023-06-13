#include <stdio.h>

int main()
{
	double cVal[12][12], sum = 0.0;
	int lPos = 5, i, j;
	char op;
	
	scanf("%c", &op);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
			scanf("%lf", &cVal[i][j]);
	}
	
	for(i = 1; i < 6; i++)
	{
		for(j = 0; j < i; j++)
			sum += cVal[i][j];
	}
	
	for(i = 6; i < 11; i++)
	{
		for(j = 0; j < lPos; j++)
			sum += cVal[i][j];
		lPos--;
	}
	
	if(op != 'S') sum /= 30.0;
	
	printf("%.1f\n", sum);
}
