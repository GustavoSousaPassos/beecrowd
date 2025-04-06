#include <stdio.h>

int main()
{
	int num, res;
	
	scanf("%d", &num);
	
	num % 2 == 0? printf("%d\n", num+2) : printf("%d\n", num+1);
}
