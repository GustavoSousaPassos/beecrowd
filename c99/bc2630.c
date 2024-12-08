#include <stdio.h>
#include <string.h>

int main()
{
	char opc[5];
	int res, r, g, b, nCa, i;
	
	scanf("%d", &nCa);
	getchar();

	for(i = 0; i < nCa; i++)
	{
		res = 0;
		
		scanf("%s", &opc);
		
		scanf("%d %d %d", &r, &g, &b);
		
		if(strcmp(opc, "mean") == 0) res = (r + g + b) / 3;
		else if(strcmp(opc, "eye") == 0) res = 0.3*r + 0.59*g + 0.11*b;
		else if(strcmp(opc, "min") == 0)
		{
			if(r < g && r < b) res = r;
			else if(g < r && g < b) res = g;
			else if(b < r && b < g) res = b;
			else res = r;
		}
		else if(strcmp(opc, "max") == 0)
		{
		 	if(r > g && r > b) res = r;
		 	else if(g > r && g > b) res = g;
		 	else if(b > r && b > g) res = b;
		 	else res = r;
		}
		
		printf("Caso #%d: %d\n", i+1, res);
	}
}
