#include <stdio.h>

int main()
{
	long long int fVal, sVal;
	long long int res;
	
	scanf("%lld %lld", &fVal, &sVal);
	
	res = fVal*sVal;
	
	printf("%lld\n", res);
}
