#include <stdio.h>
#include <string.h>

int main()
{
	float valIn;
	
	scanf("%f", &valIn);
	
	if(valIn < 0 || valIn > 100.00) printf("Fora de intervalo\n");
	else if(valIn <= 25.00) printf("Intervalo [0,25]\n");
	else if(valIn <= 50.00) printf("Intervalo (25,50]\n");
	else if(valIn <= 75.00) printf("Intervalo (50,75]\n");
	else printf("Intervalo (75,100]\n");
}
