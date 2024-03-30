#include <stdio.h>

int main()
{
	int count, i, ho, mi, val;
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		scanf("%d %d %d", &ho, &mi, &val);
		
		printf("%02d:%02d - ", ho, mi);
		val == 1? printf("A porta abriu!\n") : printf("A porta fechou!\n");
	}
}
