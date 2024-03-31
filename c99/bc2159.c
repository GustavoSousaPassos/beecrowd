#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	
	scanf("%d", &num);
	
	printf("%.1f %.1f\n", num/log(num), 1.25506*(num/log(num)));
}
