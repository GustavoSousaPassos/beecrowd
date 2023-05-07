#include <stdio.h>

int main()
{
	double cVal[12][12], sum = 0.0;
	int fPos = 5, lPos = 6, i, j;
	char op;
	
	scanf("%c", &op);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
			scanf("%lf", &cVal[i][j]);
	}
	
	for(i = 7; i < 12; i++)
	{
		for(j = fPos; j <= lPos; j++)
			sum += cVal[i][j];
		
		fPos--;
		lPos++;
	}
	
	if(op != 'S') sum /= 30.0;
	
	printf("%.1f\n", sum);
}
