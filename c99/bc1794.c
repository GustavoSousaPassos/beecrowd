#include <stdio.h>
#include <string.h>
int main()
{
	int tRo, lA, lB, sA, sB;
	char res[10];
	
	scanf("%d\n%d %d\n%d %d", &tRo, &lA, &lB, &sA, &sB);
	(tRo >= lA && tRo <= lB) && (tRo >= sA && tRo <= sB)? puts("possivel") : puts("impossivel");
}
