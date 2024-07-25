#include <stdio.h>

int main()
{
	int aux, nCh, val, qtdN, i, j;
	
	while(scanf("%d %d", &qtdN, &nCh == 2))
	{
		int vec[qtdN];
		
		for(i = 0; i < qtdN; i++)
			scanf("%d", &vec[i]);
		
		for(j = 0; j < qtdN; j++)
		{
			for(i = 0; i < qtdN-1; i++)
			{
				if(vec[i+1] > vec[i])
				{
					aux = vec[i];
					vec[i] = vec[i+1];
					vec[i+1] = aux;
				}
			}
		}
		
		for(i = 0; i < nCh; i++)
		{
			scanf("%d", &val);
			printf("%d\n", vec[val-1]);
		}
		
	} 
}
