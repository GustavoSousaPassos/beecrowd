#include <stdio.h>

int main()
{
	int hIni, hFin, dur;
	
	scanf("%d %d", &hIni, &hFin);
	
	if(hFin < hIni || hFin == hIni) dur = 24 + (hFin - hIni);
	else dur = hFin - hIni;
	
	printf("O JOGO DUROU %d HORA(S)\n", dur);
}
