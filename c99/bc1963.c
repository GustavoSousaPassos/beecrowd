#include <stdio.h>
#include <math.h>

int main()
{
	double pPri, aPri, agree;
	
	scanf("%lf %lf", &pPri, &aPri);
	
	agree = fabs((pPri - aPri) / pPri * 100.0);
	
	printf("%.2f%%\n", agree);
}
