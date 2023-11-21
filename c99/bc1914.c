#include <stdio.h>
#include <string.h>

int main()
{
	int fPe, sPe, nCa, i;
	char fP[50], sP[50], fOp[6], sOp[6], res[6];
	
	scanf("%d", &nCa);
	
	for(i = 0; i < nCa; i++)
	{
		scanf("%s %s %s %s", fP, fOp, sP, sOp);
		
		scanf("%d %d", &fPe, &sPe);
		
		(fPe + sPe) % 2 == 0? strcpy(res, "PAR") : strcpy(res, "IMPAR");
		
		if(strcmp(res, fOp) == 0) puts(fP);
		else puts(sP);
	}
}
