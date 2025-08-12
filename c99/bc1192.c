#include <stdio.h>

int main()
{
    char le;
	int fVal, sVal, res, nCa;
	
	scanf("%d", &nCa);
	
	for(int i = 0; i < nCa; i++)
	{
	    scanf("%d%c%d", &fVal, &le, &sVal);
		
		if(fVal == sVal) res = fVal * sVal;
		else
		    res = (int) le < 97? sVal - fVal : fVal + sVal;
		    
		printf("%d\n", res);
	}
}
