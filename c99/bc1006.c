#include <stdio.h>

int main()
{
	double pNota, sNota, tNota, me;
	
	scanf("%lf\n%lf\n%lf", &pNota, &sNota, &tNota);
	
	printf("MEDIA = %.1f\n", (pNota*2 + sNota*3 + tNota*5) / 10.0);
}
