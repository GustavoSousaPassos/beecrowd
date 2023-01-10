#include <stdio.h>

int main()
{
	int valIn, year, mounth, day;
	
	scanf("%d", &valIn);
	
	year = valIn / 360;
	mounth = (int) (valIn%365) / 30;
	
	if(((valIn%360)%30)%5 == 0) day = ((valIn%365) %30);
	else day = ((valIn%360)%30) - 5*year;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, mounth, day);
}
