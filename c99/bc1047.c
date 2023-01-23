#include <stdio.h>

int main()
{
	int dHor, dMin, hIni, mIni, hFin, mFin;
	
	scanf("%d %d %d %d",&hIni, &mIni, &hFin, &mFin);
	
	if(hFin < hIni || hFin == hIni) dHor = 24 + (hFin - hIni);
	else dHor = hFin - hIni;
	
	if(mFin < mIni || mFin == mIni) dMin = 60 + (mFin - mIni);
	else dMin = mFin - mIni;
	
	if(dMin == 60) dMin = 0;
	if(mIni - 60 > mFin - 60) dHor -= 1;
	if(dHor == 24 && dMin > 0) dHor = 0;
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dHor, dMin);
}
