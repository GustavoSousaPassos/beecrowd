#include <stdio.h>

int main()
{
	int pa, hVi, fu, res;
	
	scanf("%d %d %d", &pa, &hVi, &fu);
	
	res = pa + hVi + fu;
	
	if(res < 0) res += 24;
	else if(res > 24) res -= 24;
	
	printf("%d\n", res);
}
