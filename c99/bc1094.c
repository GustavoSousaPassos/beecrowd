#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	int i, qTotal, qCo, qSa, qRa, iVec, fVal;
	qTotal = qCo = qSa = qRa = 0;
	char li[3];
	char tAn;
	
	scanf("%d", &iVec);
	//fflsuh(stdin);
	
	for(i = 0; i < iVec; i++)
	{
		fgets(li);
		
		char val = li[2];
		
		fVal = (int) li[0];
		strcpy(tAn, val);
		
		_Bool fVer = strcmp(tAn, "C");
		_Bool sVer = strcmp(tAn, "R");
		_Bool tVer = strcmp(tAn, "S");
		
		qTotal += fVal;
		
		if(fVer == 0) qCo += fVal;
		else if(sVer == 0) qRa += fVal;
		else if(tVer == 0) qSa += fVal;
		
	}
	
	printf("Total: %d cobaias\n", qTotal);
	printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", qCo, qRa, qSa);
	printf("Percentual de coelhos: %.2f %\n", (double) qCo / qTotal*100);
	printf("Percentual de ratos: %.2f %\n", (double) qRa / qTotal*100);
	printf("Percentual de sapos: %.2f %\n", (double) qSa / qTotal*100);
	
}
