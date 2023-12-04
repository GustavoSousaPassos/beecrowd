#include <stdio.h>
#include <stdbool.h>
int main()
{
	int cVal[] = {4, 7, 10, 12, 15, 20, 22, 25, 30, 40, 52, 55, 60, 70, 100, 102, 105, 110, 120, 150, 200};
	int fVal, sVal, trc;
	
	for(;;)
	{
		_Bool ver = false;
		scanf("%d %d", &fVal, &sVal);
		
		if(fVal == 0 && sVal == 0) break;
		else
		{
			int i;
			trc = abs(fVal - sVal);
			
			for(i = 0; i < 21; i++)
			{
				if(trc == cVal[i])
				{
					ver = true;
					break;
				}
			}
			
			ver == 1? printf("possible\n") : printf("impossible\n");
		}
	}
}
