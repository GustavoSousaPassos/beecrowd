#include <stdio.h>

int main()
{
	double cVal[12][12], sum = 0.0;
	int i, j, sPoint = 11;
	char op;
	
	scanf("%c", &op);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
			scanf("%lf", &cVal[i][j]);
	}
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < sPoint; j++)
			sum += cVal[i][j];
		sPoint--;
	}
	
	if(op != 'S') sum /= 66.0;
	
	printf("%.1f\n", sum);
}
