#include <stdio.h>
#include <math.h>

int main()
{
	double an, h, m, s;
	
	while(scanf("%lf", &an) == 1)
	{
		h = an / 15;
		m = fmod(an ,15) * 4;
		s = round(m * 60);
		
		
		printf("%02.0f:%02.0f:%02.0f\n", h, m, s);
	}
}
