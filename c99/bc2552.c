#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
int main()
{
	int nLi, nCol, i, j;
	char str[50];
	bool fVe, sVe, tVe, qVe;
	
	while(scanf("%d %d", &nLi, &nCol) == 2)
	{
		int mat[nLi][nCol];
		getchar();
		
		for(i = 0; i < nLi; i++)
		{
			fgets(str, sizeof(str), stdin);
			char* token = strtok(str, " \n");
			
			for(j = 0; j < nCol; j++)
			{
				mat[i][j] = atoi(token);
				token = strtok(NULL, " \n");
			}
		}
		
		for(i = 0; i < nLi; i++)
		{
			int sum = 0;
			for(j = 0; j < nCol; j++)
			{
				if(mat[i][j] == 1) mat[i][j] = 9;
				else
				{
					if(mat[i-1][j] == 1) sum++;
					if(mat[i+1][j] == 1) sum++;
					if(mat[i][j-1] == 1) sum++;
					if(mat[i][j+1] == 1) sum++;
					
					mat[i][j] = sum;
				}
			}
		}
		
		for(i = 0; i < nLi; i++)
		{
			for(j = 0; j < nCol; j++)
				printf("%d", mat[i][j]);
			
			printf("\n");
		}
	}
}
