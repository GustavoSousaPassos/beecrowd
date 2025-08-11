#include <stdio.h>

int main()
{
	double fPib, sPib, res;
	
	scanf("%lf %lf", &fPib, &sPib);
	
	fPib = fPib / 100 + 1;
	sPib = sPib / 100 + 1;
	
	res = (fPib * sPib - 1) * 100;
	
	printf("%.6f\n", res);
}
