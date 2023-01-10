#include <stdio.h>

int main()
{
	int valIn, h, m, s;
	
	scanf("%d", &valIn);
	
	h = (valIn/60) / 60;
	m = valIn/60 - h*60;
	s = valIn % 60;
	
	printf("%d:%d:%d\n", h, m, s);
}
