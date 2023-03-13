#include <stdio.h>

int main()
{
	long long cFi[61];
	int nTes, i;
	
	cFi[0] = 0;
	cFi[1] = 1;
	
	for(i = 2; i < 61; i++)
		cFi[i] = cFi[i-1] + cFi[i-2];
	
	scanf("%d", &nTes);
	
	for(i = 0; i < nTes; i++)
	{
	    int val;
	    
		scanf("%d", &val);
		
	    printf("Fib(%d) = %lld\n", val, cFi[val]);
	}
}
