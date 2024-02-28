#include <stdio.h>
#include <math.h>

int main()
{
	double v, d, area, al;
	
	while(scanf("%lf\n%lf", &v, &d) != EOF)
	{
		area = pow(d/2, 2) * 3.14;
		al = v / area;
		
		printf("ALTURA = %.2f\nAREA = %.2f\n", al, area);
	}
}
