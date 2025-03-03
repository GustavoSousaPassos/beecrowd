#include <stdio.h>

int main()
{
	int sPa[3], qRe[3], res = 0, i;
	
	scanf("%d %d %d", &qRe[0], &qRe[1], &qRe[2]);
	scanf("%d %d %d", &sPa[0], &sPa[1], &sPa[2]);
	
	for(i = 0; i < 3; i++)
		if(qRe[i] < sPa[i]) res += sPa[i] - qRe[i];
	
	printf("%d\n", res);
}
