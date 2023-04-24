#include <stdio.h>

int main()
{
	double cVal[12][12], sum = 0.0;
	int i, j;
	char op;
	
	scanf("%c", &op);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
			scanf("%lf", &cVal[i][j]);
	}
	
	for(i = 0; i < 12; i++)
	{
		int pivo = i + 1;
		
		for(j = pivo; j < 12; j++)
			sum += cVal[i][j];
	}
	
	op == 'S'?printf("%.1f\n", sum) : printf("%.1f\n", sum / 66.0);
}
