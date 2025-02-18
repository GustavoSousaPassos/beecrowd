#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	double an, h, m, s;
	char res[20];
	
	while(1)
	{
		if(scanf("%lf", &an) == 1)
		{
			h = an / 15;
			m = fmod(an ,15) * 4;
			s = round((m - floor(m)) * 60);
			
			if(an < 90 || an == 360) strcpy(res, "Bom Dia!!");
			else if(an < 180) strcpy(res, "Boa Tarde!!");
			else if(an < 270) strcpy(res, "Boa Noite!!");
			else strcpy(res, "De Madrugada!!");
			
			h = fmod(h + 6, 24);
			puts(res);
			printf("%02.0f:%02.0f:%02.0f\n", h, m, s);
		}
		else break;
	}
}
