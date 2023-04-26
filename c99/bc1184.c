#include <stdio.h>

int main()
{
	double cVal[12][12], res = 0.0;
	char op;
	int i, j, pivo;
	
	scanf("%c", &op);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
			scanf("%lf", &cVal[i][j]);
	}
	
	for(i = 1; i < 12; i++)
	{
		for(j = 0; j < pivo; j++)
			res += cVal[i][j];
			
		pivo = i + 1;
	}
	
	if(op != 'S') res /= 66.0;
	
	printf("%.1f\n", res);
}
