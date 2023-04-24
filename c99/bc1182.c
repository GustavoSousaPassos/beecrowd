#include <stdio.h>

int main()
{
	double cVal[12][12], sum = 0.0;
	int col, i, j;
	char op;
	
	scanf("%d\n%c", &col, &op);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
			scanf("%lf", &cVal[i][j]);
	}
	
	for(i = 0; i < 12; i++)
		sum += cVal[i][col];
	
	op == 'S'? printf("%.1f\n", sum) : printf("%.1f\n", sum/12.0);
}
