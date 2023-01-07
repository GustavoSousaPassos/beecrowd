#include <stdio.h>

int main()
{
	int valIn, n100, n50, n20, n10, n5, n2, n1;
	
	n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;
	
	scanf("%d", &valIn);
	
	int valO = valIn;
	
	while(valIn != 0)
	{
		if(valIn >= 100)
		{
			n100++;
			valIn -= 100;
		}
		else if(valIn >= 50)
		{
			n50++;
			valIn -= 50;
		}
		else if(valIn >= 20)
		{
			n20++;
			valIn -= 20;
		}
		else if(valIn >= 10)
		{
			n10++;
			valIn -= 10;
		}
		else if(valIn >= 5)
		{
			n5++;
			valIn -= 5;
		}
		else if(valIn >= 2)
		{
			n2++;
			valIn -= 2;
		}
		else if(valIn >= 1)
		{
			n1++;
			valIn -= 1;
		}
		else break;
	}
	
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n", valO, n100, n50);
	printf("%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n", n20, n10, n5);
	printf("%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n2, n1);
}
