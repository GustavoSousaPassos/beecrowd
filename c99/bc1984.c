#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, d = 0;
	long long num;
	char nCo[999];
	char res[999];
	
	scanf("%lld", &num);
	
	snprintf(nCo, sizeof(nCo), "%lld", num);	//itoa(num, nCo, 10);
	
	int tam = strlen(nCo);
	
	for(i = tam-1; i >= 0; i--)
	{
		res[d] = nCo[i];
		d++;
	}
	
	res[d] = '\0';
	
	puts(res);
}
