#include <stdio.h>
#include <math.h>

int main()
{
	float fVal, sVal, tVal, aTri, aCi, aTra, aQua, aRe;
	
	scanf("%f %f %f", &fVal, &sVal, &tVal);
	
	aTri = (fVal * tVal) / 2;
	aCi = pow(tVal, 2) * 3.144159;
	aTra = ((fVal + sVal) * tVal) / 2;
	aQua = pow(sVal, 2);
	aRe = fVal * sVal;
	
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nREATANGULO: %.3f\n", aTri, aCi, aTra, aQua, aRe);
}

