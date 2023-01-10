#include <stdio.h>

int main()
{
	int fVal, sVal, tVal, foVal;
	
	scanf("%d %d %d %d", &fVal, &sVal, &tVal, &foVal);
	
	_Bool fVer = sVal > tVal && foVal > fVal;
	_Bool sVer = tVal + foVal > fVal + sVal;
	_Bool tVer = (tVal > 0 && foVal > 0) == (fVal % 2 == 0);
	

	if(fVer == 1 && sVer == 1 && tVer == 1) printf("Valores aceitos\n");
	else printf("Valores nao aceitos\n");
	
}
