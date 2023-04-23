#include <stdio.h>

int main()
{
	int li, i, j, k;
	float res = 0.0, vec[12][12];
	char op;
	
	scanf("%d\n%c", &li, &op);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
			scanf("%f", &vec[i][j]);
	}
	
	for(k = 0; k < 12; k++)
		res += vec[li][k];
	if(op == 'm' || op == 'M') res = res / 12.0;
	
	printf("%.1f\n", res);
}
