#include <stdio.h>

int main()
{
	int dis;
	float comG;
	
	scanf("%d\n%f", &dis, &comG);
	printf("%.3f km/l\n", dis / comG);
}
