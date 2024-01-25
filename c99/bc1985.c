#include <stdio.h>

int main()
{
	int fVal, qtd, nPe, i;
	float total;
	
	scanf("%d", &nPe);
	
	for(i = 0; i < nPe; i++)
	{
		scanf("%d %d", &fVal, &qtd);
		
		switch(fVal)
		{
			case 1001: total += qtd*1.50; break;
			case 1002: total += qtd*2.50; break;
			case 1003: total += qtd*3.50; break;
			case 1004: total += qtd*4.50; break;
			case 1005: total += qtd*5.50; break;
		}
	}
	
	printf("%.2f\n", total);
}
