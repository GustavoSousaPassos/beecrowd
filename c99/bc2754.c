#include <stdio.h>

int main()
{
	double fVa = 234.345, sVa = 45.698;
	
	printf("%lf - %lf\n", fVa, sVa);
	printf("%.0f - %.0f\n", fVa, sVa);
	printf("%.1f - %.1f\n", fVa, sVa);
	printf("%.2f - %.2f\n", fVa, sVa);
	printf("%.3f - %.3f\n", fVa, sVa);
	printf("%e - %e\n", fVa, sVa);
	printf("%E - %E\n", fVa, sVa);
	printf("%.3f - %.3f\n", fVa, sVa);
	printf("%.3f - %.3f\n", fVa, sVa);
}
