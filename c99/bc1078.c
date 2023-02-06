#include <stdio.h>

int main()
{
	int val, i;
	
	scanf("%d", &val);
	
	for(i = 1; i <= 10; i++)
		printf("%d x %d = %d\n", i, val, val*i);
}
