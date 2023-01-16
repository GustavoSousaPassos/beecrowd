#include <stdio.h>
#include <math.h>

int main()
{
	double fVal, sVal, tVal, delta, r1, r2;
	
	scanf("%lf %lf %lf", &fVal, &sVal, &tVal);
	
	delta = pow(sVal, 2) -4*fVal*tVal;
	
	if(fVal > 0.0 && delta > 0)
	{
		r1 = ((sVal - sqrt(delta)) / (2*fVal)) * -1;
		r2 = ((sVal + sqrt(delta)) / (2*fVal)) * -1;
		
		printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
	}
	else printf("Impossivel calcular\n");
}

