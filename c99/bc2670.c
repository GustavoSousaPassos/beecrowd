#include <stdio.h>

int main()
{
	int pAn, sAn, tAn, cVal[3], res;
	
	scanf("%d\n%d\n%d", &cVal[0], &cVal[1], &cVal[2]);
	
	pAn = (cVal[1] * 2) + (cVal[2] * 4);
	sAn = (cVal[0] * 2) + (cVal[2] * 2);
	tAn = (cVal[0] * 4) + (cVal[1] * 2);
	
	if(pAn < sAn && pAn < tAn) res = pAn;
	else if(sAn < pAn && sAn < tAn) res = sAn;
	else if(tAn < pAn && tAn < sAn) res = tAn;
	else res = sAn;
	
	printf("%d\n", res);
}
