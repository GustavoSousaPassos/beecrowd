#include <stdio.h>
#include <math.h>

int main()
{
	double n = 3.14159, raio, area;
	
	scanf("%lf", &raio);
	
	area = n * pow(raio, 2);
	
	printf("A=%.4lf\n", area); 
}
