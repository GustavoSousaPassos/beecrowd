#include <stdio.h>

int main()
{
	double vec[100], val;
	int i;
	
	scanf("%lf", &val);
	
	vec[0] = val;
	
	for(i = 1; i < 100; i++)
		vec[i] = vec[i-1] / 2.0;
	for(i = 0; i < 100; i++)
		printf("N[%d] = %.4f\n", i, vec[i]);
}
