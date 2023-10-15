#include <stdio.h>

int main()
{
	char msg[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int ind, i;
	
	scanf("%d", &ind);
	
	for(i = 0; i < ind; i++)
	{
		printf("%c", msg[i]);
	}
	
	printf("\n");
}
