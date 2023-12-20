#include <stdio.h>
#include <math.h>
int main()
{
	double vol, di, al, area;
	
	while(scanf("%lf\nlf", &vol, &di) != EOF)
	{
		area = pow(di/2.0, 2) * 3.14;
		al = vol / area;
		
		printf("ALTURA  = %.2f\nAREA = %.2f\n", al, area); 
	}
}
