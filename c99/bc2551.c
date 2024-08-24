#include <stdio.h>

int main()
{
	int nDi, dMi, dis, i;
	double vMe, vel;
	
	while(scanf("%d", &nDi) == 1)
	{
		vMe = 0.0;
	
		for(i = 0; i < nDi; i++)
		{
			scanf("%d %d", &dMi, &dis);
			
			vel = (double)(dis *1000) / (dMi*60);
			
			if(vel > vMe) 
			{
				printf("%d\n", i+1);
				vMe = vel;
			}
		}
	}
	
}
