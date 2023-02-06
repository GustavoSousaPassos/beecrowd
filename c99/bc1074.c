#include <stdio.h>

int main()
{
	int in, c;
	
	scanf("%d", &in);
	
	for(c = 0; c < in; c++)
	{
		int val;
		
		scanf("%d", &val);
		
		if(val == 0) printf("NULL\n");
		else
		{
			if(val % 2 == 0) printf("EVEN");
			else printf("ODD");
			if(val > 0) printf(" POSITIVE\n");
			else printf(" NEGATIVE\n");
		}
	}
}
