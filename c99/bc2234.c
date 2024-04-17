#include <stdio.h>

int main()
{
	int fVal , sVal;
	
	float res;
	
	scanf("%d %d", &fVal, &sVal);
	
	res = (float) fVal / sVal;
	
	printf("%.2f\n", res);
}
