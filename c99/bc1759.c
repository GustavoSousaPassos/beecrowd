#include<stdio.h>

int main()
{
	int val, i;
	
	scanf("%d", &val);
	
	for(i = 0; i < val; i++)
		i == val-1? printf("Ho!\n") : printf("Ho ");
}
