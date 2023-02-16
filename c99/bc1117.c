#include <stdio.h>

int main()
{
	float val, s = 0;
	int i = 0;
	
	while(i != 2)
	{
		scanf("%f", &val);
		
		if(val >= 0.0 && val <= 10.0)
		{
			i++;
			s += val;
		}
		else printf("nota invalida\n");
	}
	
	printf("media = %.2f\n", s / 2.0);
}
