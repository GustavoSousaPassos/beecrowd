#include <stdio.h>
#include <string.h>

float res()
{
	float tDi;
	char pal[10000];
	scanf("%s", pal);
	tDi = strlen(pal) / 100.0;
	
	return tDi;
}

int main()
{
    int nCa, i;
    float tDi;
    
    scanf("%d", &nCa);
    
    for(i = 0; i < nCa; i++)
    	printf("%.2f\n", res());
    return 0;
}

