#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int nLi, nCol, i, j, sum;
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
		
		for(i = 0; i < nCol; i++)
		{
			sum = 0;
			sVe = (nLi > 1)  && (mat[1][i] == 1);
			tVe = (i > 0) && (mat[0][i-1] == 1);
			qVe = (i < nCol-1) && (mat[0][i+1] == 1);
			
			if(mat[0][i] == 1) mat[0][i] = 9;
			else
			{
				if(sVe) sum++;
				if(tVe) sum++;
				if(qVe) sum++;
				
				mat[0][i] = sum;
			}
		}
		
		for(i = 1; i < nLi; i++)
		{
			for(j = 0; j < nCol; j++)
			{
				fVe = (i > 0) && (mat[i-1][j] >= 1);
				sVe =  (i < nLi-1) && (mat[i+1][j] >= 1);
				tVe = (j > 0 ) && (mat[i][j-1] >= 1);
				qVe = (j < nCol-1) && (mat[i][j+1] >= 1);
				
				if(mat[i][j] == 1) mat[i][j] = 9;
				else
				{
					sum = 0;
					
					if(fVe) sum++;
					if(sVe) sum++;
					if(tVe) sum++;
					if(qVe) sum++;
					
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
