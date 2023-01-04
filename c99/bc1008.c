#include <stdio.h>

int main()
{
	int num, hTra;
	float salH;
	
	scanf("%d\n%d\n%f", &num, &hTra, &salH);
	
	float salT = salH * hTra;
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, salT);
}
