#include <stdio.h>

int main()
{
	int vIn, vGre, epa, nuG;
	vIn = vGre = epa = nuG = 0;
	
	while(1)
	{
		int fVal, sVal, opc;
		
		scanf("%d %d", &fVal, &sVal);
		
		if(fVal == sVal) epa++;
		else if(fVal > sVal) vIn++;
		else vGre++;
		
		nuG++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &opc);
		
		if(opc == 2) break;
	}
	
	printf("%d grenais\n", nuG);
	printf("Inter:%d\nGremio:%d\nEmpates:%d\n", vIn, vGre, epa);
	
	if(vIn == vGre) printf("Nao houve vencedor\n");
	else if(vIn > vGre) printf("Inter venceu mais\n");
	else printf("Gremio venceu\n");
}
