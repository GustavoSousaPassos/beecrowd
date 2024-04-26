#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	int fVal, sVal, tVal, i;
	char sRes;
	
	scanf("%d %d %d", &fVal, &sVal, &tVal);

	_Bool fVe, sVe, tVe, lVe;
	
	fVe = (fVal > sVal - tVal) && (fVal < sVal + tVal);
	sVe = (sVal > fVal - tVal) && (sVal < fVal + tVal);
	tVe = (tVal > fVal - sVal) && (tVal < fVal + sVal);
	
	lVe = (fVe == true) && (sVe == true) && (tVe == true);
	
	if(lVe == false) 
		printf("Invalido\n");
	else
	{
		_Bool tEq, tIs;
		
		tEq = (fVal == sVal) && (sVal == tVal);
		tIs = (fVal == sVal && tVal != fVal) || (fVal != sVal && tVal == sVal) || (fVal == tVal && tVal != sVal);
        
		if(tEq == true) printf("Valido-Equilatero\n");
		else if(tIs == true) printf("Valido-Isoceles\n");
		else printf("Valido-Escaleno\n");
		
		if(fVal > sVal && fVal > tVal)
			sRes = pow(fVal, 2) == pow(sVal, 2) + pow(tVal, 2)? 'S' : 'N';
		else if(sVal > fVal && sVal > tVal)
			sRes = pow(sVal, 2) == pow(fVal, 2) + pow(tVal, 2)? 'S' : 'N';
		else 
			sRes = pow(tVal, 2) == pow(fVal, 2) + pow(sVal, 2)? 'S' : 'N';
		
		printf("Retangulo: %c\n", sRes);
	}
	
}
