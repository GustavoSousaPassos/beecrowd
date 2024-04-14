#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int count = 0, i;
	
	char cVal[101];
	
	scanf("%s", cVal);
	
	int tam = strlen(cVal);
	int vec[tam];
	
	for(i = 0; i < tam; i++)
		vec[i] = cVal[i] - '0';
	
	for(i = 0; i < tam; i++)
		if(vec[i] == 1) count++;
	
	count % 2 == 0? strcat(cVal, "0") : strcat(cVal, "1");
	
	puts(cVal);
}
