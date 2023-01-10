#include <stdio.h>
#include <math.h>

int main()
{
	int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01;
	float valIn;
	
	scanf("%f", &valIn);
	
	n100 = valIn / 100;
	n50 = (valIn - 100*n100) / 50;
	n20 = (valIn - 100*n100 - 50*n50) / 20;
	n10 = (valIn - 100*n100 - 50*n50 - 20*n20) / 10;
	n5 = (valIn - 100*n100 - 50*n50 - 20*n20 - 10*n10) / 5;
	n2 = (valIn - 100*n100 - 50*n50 - 20*n20 - 10*n10 - 5*n5) / 2;
	m1 = (valIn - 100*n100 - 50*n50 - 20*n20 - 10*n10 - 5*n5 - 2*n2) / 1;
	
	float valAux = (valIn - 100*n100 - 50*n50 - 20*n20 - 10*n10 - 5*n5 - 2*n2 - 1*m1);
	
	m50 = valAux / 0.50;
	m25 = (valAux - 0.50*m50) / 0.25;
	m10 = (valAux - 0.50*m50 - 0.25*m25) / 0.10;
	m5 = (valAux - 0.50*m50 - 0.25*m25 - 0.10*m10) / 0.05;
	m01 = (valAux - 0.50*m50 - 0.25*m25 - 0.10*m10 - 0.05*m5) / 0.01;
	
	if((valAux - 0.50*m50 - 0.25*m25 - 0.10*m10 - 0.05*m5 - 0.01*m01) > 0.001) m01++;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n", n100, n50, n20);
	printf("%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", n10, n5, n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n", m1, m50, m25);
	printf("%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", m10, m5, m01);
	
}
