#include <stdio.h>

int main()
{
	float sal;
	int pRe;
	
	scanf("%f", &sal);
	
	if(sal <= 400.00) pRe = 15;
	else if(sal <= 800.00) pRe = 12;
	else if(sal <= 1200.00) pRe = 10;
	else if(sal <= 2000.00) pRe = 7;
	else pRe = 4;
	
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", sal + (sal*pRe/100), sal*pRe/100, pRe);
}
