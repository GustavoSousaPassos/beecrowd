#include <stdio.h>

int main()
{
	int val, fat = 1, i;
	
	scanf("%d", &val);
	
	for(i = val; i > 1; i--)
		fat *= i;
	
	printf("%d\n", fat);
}
