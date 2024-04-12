#include <stdio.h>

int main()
{
	int valX, valM;
	
	for(;;)
	{
		scanf("%d %d",  &valX, &valM);
		if(valX == 0 && valM == 0) break; 
		else printf("%d\n", valX*valM);
	}
}
