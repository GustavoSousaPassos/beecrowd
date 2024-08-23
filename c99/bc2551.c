#include <stdio.h>

int main()
{
	int nDi, dMi, dis, i;
	float vMe, vel;
	
	while(scanf("%d", &nDi) == 1)
	{
		vMe = 0.0;
	
		for(i = 0; i < nDi; i++)
		{
			scanf("%d %d", &dMi, &dis);
			
			vel = dis / dMi;
			
			if(vel > dMi) 
			{
				printf("%d\n", i);
				vMe = vel;
			}
		}
	}
	
}
