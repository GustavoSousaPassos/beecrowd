#include <stdio.h>

int main()
{
	int val, i, j;
	float vec[3];
	
	scanf("%d", &val);
	
	for(i = val; i > 0; i--)
	{
		scanf("%f %f %f", &vec[0], &vec[1], &vec[2]);
		float sum = (vec[0]*2 + vec[1]*3 + vec[2]*5) / 10.0;
		printf("%.1f\n", sum);
	}
}
