#include <stdio.h>
#include <string.h>

int main()
{
	char opc[5];
	int res, r, g, b, nCa, i;
	
	scanf("%d", &nCa);
	for(i = 0; i < nCa; i++)
	{
		fflush(stdin);
		fgets(opc, sizeof(opc), stdin);
		
		scanf("%d %d %d", &r, &g, &b);
		
		if(strcmp(opc, "mean") == 0) res = (r + g + b) / 3;
		else if(strcmp(opc, "eye") == 0) res = res = 0.3*r + 0.59*g + 0.11*b;
		
		printf("%d\n", res);
	}
}
