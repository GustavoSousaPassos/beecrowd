#include<stdio.h>

int main()
{
	int count, valB = 0,  fVaG, sVaG, i;
	int fVaA, sVaA, fVaD, sVaD, fLv, sLv, bo;
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		scanf("%d\n%d %d %d", &bo, &fVaA, &fVaD, &fLv);
		scanf("%d %d %d", &sVaA, &sVaD, &sLv);
		
		valB = fLv % 2 == 0? bo : 0;
		
		fVaG = ((fVaA + fVaD) / 2) + valB;

		valB = sLv % 2 == 0? bo : 0;
		
		sVaG = ((sVaA + sVaD) / 2) + valB;
		
		if(fVaG > sVaG) printf("Dabriel\n");
		else if (fVaG < sVaG) printf("Guarte\n");
		else printf("Empate\n");
	}
}
