#include <stdio.h>

int main()
{
	int codL, qtd;
	float pre;
	
	scanf("%d %d", &codL, &qtd);
	
	switch(codL)
	{
		case 1: pre = 4.00*qtd; break;
		case 2: pre = 4.50*qtd; break;
		case 3: pre = 5.00*qtd; break;
		case 4: pre = 2.00*qtd; break;
		case 5: pre = 1.50*qtd; break;
	}
	
	printf("Total: R$ %.2f\n", pre);
}
