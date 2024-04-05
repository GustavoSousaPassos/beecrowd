#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	double fPa, sPa, ra, res;
	
	scanf("%d", &num);
	
	ra = sqrt(5);
	
	fPa = pow((1 + ra) / 2, num);
	sPa = pow((1 - ra) / 2, num);
	
	res = (fPa - sPa) / ra;
	
	printf("%.1f\n", res);
}
