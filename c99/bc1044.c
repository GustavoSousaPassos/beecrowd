#include <stdio.h>

int main()
{
	int fVal, sVal;
	
	scanf("%d %d", &fVal, &sVal);
	
	sVal%fVal == 0 || fVal%sVal == 0? printf("Sao Multiplos\n") : printf("Nao sao Multiplos\n");
}
