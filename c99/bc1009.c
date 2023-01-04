#include <stdio.h>
#include <string.h>

int main()
{
	char name[12];
	double salF, tVen, salB;
	
	gets(name);
	scanf("%lf\n%lf", &salF, &tVen);
	
	salB = (tVen*0.15) + salF;
	
	printf("TOTAL = R$ %.2f\n", salB);
}
