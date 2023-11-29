#include <stdio.h>

int main()
{
	int pTo, sTo, tTo, qTo;
	
	scanf("%d %d %d %d", &pTo, &sTo, &tTo, &qTo);
	
	int res = (pTo + sTo + tTo + qTo) - 3;
	
	printf("%d\n", res);
}
