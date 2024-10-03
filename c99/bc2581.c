#include <stdio.h>
#include <string.h>

int main()
{
	char fra[50];
	int count, i;
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		fgets(fra, sizeof(fra), stdin);
		printf("I am Toorg!");
	}
}
