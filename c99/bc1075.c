#include <stdio.h>

int main()
{
	int val, i;
	
	scanf("%d", &val);
	
	for(i = 0; i <= 10000; i++)
		if(i % val == 2) printf("%d\n", i);
}
