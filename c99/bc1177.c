#include <stdio.h>

int main()
{
	int vec[1000], val, j = 0, i;
	
	scanf("%d", &val);
	
	for(i = 0; i < 1000; i++)
	{
		vec[i] = j;
		
		if(j == val-1) j = 0;
		else j++;
	}
	
	for(i = 0; i < 1000; i++) printf("N[%d] = %d\n", i, vec[i]);
}
