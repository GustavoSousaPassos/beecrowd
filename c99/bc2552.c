#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int nLi, nCol, i, j;
	char str[50];
	
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
			for(j = 0; j < nCol; j++)
				printf("%d", mat[i][j]);
			
			printf("\n");
		}
	}
}
