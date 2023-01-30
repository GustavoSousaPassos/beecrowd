#include <stdio.h>
#include <math.h>

int main()
{
	long int in;
	int i;
	
	scanf("%d", &in);
	
	for(i = 1; i <= in; i++)
		if(i % 2 == 0) printf("%d^2 = %.0f\n", i, pow(i, 2));
}
