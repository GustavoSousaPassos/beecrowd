#include <stdio.h>

int main()
{
	int qAl, qGas, qDi, val;
	
	qAl = qGas = qDi = 0;
	
	while(1)
	{
		scanf("%d", &val);
		
		if(val == 4) break;
		else
		{
			switch(val)
			{
				case 1: qAl++; break;
				case 2: qGas++; break;
				case 3: qDi++; break;
			}
		}
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", qAl, qGas, qDi);
}
