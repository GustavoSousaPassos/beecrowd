#include <stdio.h>
#include <string.h>

int main()
{
	int val, k = 1;
	
	while(k == 1);
	{
		if(scanf("%d", &val) != 1) 
			k = 0;
		else
		{
			
			int i, j = 0, num, cat = 0, big = 0;
			
			int cVal[val];
			char cVa[val*2];
			
			fflush(stdin);
			gets(cVa);
			
			num = sizeof(cVa);
			
			for(i = 0; i < val*2; i++)
			{	
				if(cVa[i] != ' ')
				{
					cVal[j] = cVa[i] - '0';		// converte um char para um inteiro
					j++;
				}
			}
			
			for(i = 0; i < val; i++)
			{
				if(cVal[i] > big)
				{
					big = cVal[i];
					
					if(big < 10) cat = 1;
					else if(big < 20) cat = 2;
					else cat = 3;
				}
			}
			printf("%d\n", cat);
		}
	}
}
