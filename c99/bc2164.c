#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	double fPa, sPa, res;
	
	scanf("%d", &num);
	
	fPa = pow((1 + sqrt(5)) / 2, num);
	sPa = pow((1 - sqrt(5)) / 2, num);
	
	res = (fPa - sPa) / sqrt(5);
	
	printf("%.1f\n", res);
}
