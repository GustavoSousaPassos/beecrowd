#include <stdio.h>

int main()
{
	int val, i;
	
	scanf("%d", &val);
	
	for(i = 1; i <= val; i++)
	{
		if(val % i == 0) printf("%d\n", i);
	}
}
