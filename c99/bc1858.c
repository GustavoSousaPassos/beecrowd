#include<stdio.h>
#include<string.h>

int main()
{
	int nPe, menor, mIn = 1, val, i, j = 0;
	
	scanf("%d", &nPe);
	int cVal[nPe];
	char sIn[nPe*2];
	
	fflush(stdin);
	
	gets(sIn);
	
	for(i = 0; i < nPe*2; i++)
	{
		if(sIn[i] != ' ')
		{
			cVal[j] = sIn[i] - '0';
			j++;
		}
	}
	
	menor = cVal[0];
	
	for(i = 1;i < nPe; i++)
	{
		if(cVal[i] < menor)
		{
			menor = cVal[i];
			mIn = i + 1;
		}
	}
	
	printf("%d\n", mIn);
}
