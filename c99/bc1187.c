#include <stdio.h>

int main()
{
	double cVal[12][12], sum = 0.0;
	int i, j, aux = 10, count = 1;
	char op;
	
	scanf("%c", &op);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
			scanf("%lf", &cVal[i][j]);
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = count; j <= aux; j++)
			sum += cVal[i][j];
			
		aux -= 1;
		count++;
	}
	
	if(op != 'S') sum /= 30.0;
	
	printf("%.1f\n", sum);
}
