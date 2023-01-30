#include <stdio.h>

int main()
{
	int i, iVec, countIn, countOut, val;
	countIn = countOut = 0;
	
	scanf("%d", &iVec);
	
	for(i = 0; i < iVec; i++)
	{
		scanf("%d", &val);
		val >= 10 && val <= 20? countIn++ : countOut++;
	}
	
	printf("%d in\n%d out\n", countIn, countOut);
}
