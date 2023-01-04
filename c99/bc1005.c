#include <stdio.h>

int main()
{
	double pNota, sNota, me;
	
	scanf("%lf\n%lf", &pNota, &sNota);
	
	me = (pNota*3.5 + sNota*7.5) / 11.0;
	
	printf("MEDIA = %.5f\n", me);
}
