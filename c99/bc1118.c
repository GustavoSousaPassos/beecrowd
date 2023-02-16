#include <stdio.h>

int main()
{
	int opc = 1;
	
	while(opc == 1)
	{
		float val, sum = 0.0;
		int i = 0;
		
		while(i != 2)
		{
			scanf("%f", &val);
			
			if(val >= 0.0 && val <= 10.0)
			{
				sum += val;
				i++;
			}
			else printf("nota invalida\n");
		}
		
		printf("media = %.2f\n", sum/2.0);
		
		for(;;)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &opc);
			
			if(opc == 1 || opc == 2) break;
		}
	}
}
