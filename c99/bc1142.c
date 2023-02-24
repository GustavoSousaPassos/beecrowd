#include <stdio.h>

int main()
{
	int li, j = 1, i;
	
	scanf("%d", &li);
	
	for(i = 0; i < li; i++)
	{
		int k = 0;
		
		while(k != 4)
		{
			if(j % 4 == 0) printf("PUM\n");
			else printf("%d ", j);
			
			j++;
			k++;
		}
	}
}
