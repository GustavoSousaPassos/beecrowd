#include <stdio.h>

int main()
{
	int num, i;
	char nHex[10];
	
	scanf("%d", &num);

	sprintf(nHex, "%x", num); 	// Converte para hexadecimal
	
	for(i = 0; i < 10; i++)
		nHex[i] = toupper(nHex[i]);
	//strupr(nHex); 	// Deixa toda a string em maísculo
	
	printf("%s\n", nHex);
}
