#include <stdio.h>
#include <string.h>

int main()
{
	int count, fVal, sVal, i, so;
	char al[][14] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		scanf("%d %d", &fVal, &sVal);
		so = fVal+sVal;
		printf("%s\n", al[so]);
	}
}
