#include <stdio.h>

int main()
{
	int pCodP, pNumP, sCodP, sNumP;
	float pValP, sValP;
	
	scanf("%d %d %f", &pCodP, &pNumP, &pValP);
	scanf("%d %d %f", &sCodP, &sNumP, &sValP);
	
	float tCom = pValP*pNumP + sValP*sNumP;
	
	printf("VALOR A PAGAR: R$ %.2f\n", tCom);
}
