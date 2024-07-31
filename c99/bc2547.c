#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nPe, aMi, aMax, i, count;
	
	while(scanf("%d %d %d", &nPe, &aMi, &aMax) == 3)
	{
		count = 0;
		int *vec = (int *) malloc(nPe * sizeof(int));
		
		for(i = 0; i < nPe; i++)
			scanf("%d", &vec[i]);
		
		for(i = 0; i < nPe; i++)
			if(vec[i] >= aMi &&  vec[i] <= aMax) count++;
		
		printf("%d\n", count);
	}
}
