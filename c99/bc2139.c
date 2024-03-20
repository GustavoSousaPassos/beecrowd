#include <stdio.h>

int main()
{
	int dMo[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day, mo, sDay , i;
	
	while(scanf("%d %d", &mo, &day) == 2)
	{
		sDay = 0;
		if(mo == 12)
		{
			switch(day) 
			{
				case 25: printf("E natal!\n"); break;
				case 24: printf("E vespera de natal!\n"); break;
				default: printf("Ja passou!\n"); break;
			}	
		}
		else
		{
			
			for(i = mo; i < 12; i++)
				sDay += dMo[i-1];
			
			sDay -= day;
			sDay += 25;
			printf("Faltam %d dias para o natal!\n", sDay);
		}
	}
}
