#include <stdio.h>

int main()
{
	float fVal, sVal, tVal, area, per;
	
	scanf("%f %f %f", &fVal, &sVal, &tVal);
	
	fVal+sVal > tVal && sVal+tVal > fVal && fVal+tVal > sVal? printf("Perimetro = %.1f\n", fVal+sVal+tVal) : printf("Area = %.1f\n", ((fVal+sVal)*tVal) / 2);  
}
