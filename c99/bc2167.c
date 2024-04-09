#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int count, pos = 0, i, res = 0;
	
	scanf("%d", &count);
	getchar();
	
	int tMax = count*(10+1);
	
	int vec[count];
	char cVal[tMax];
	
	fgets(cVal, sizeof(cVal), stdin);
	
	char *token = strtok(cVal, " \n");
	
	while(token != NULL && pos < count)
	{
		vec[pos] = atoi(token);
		token = strtok(NULL, " \n");
		pos++;
	}
	
	for(i = 0; i < count-1; i++)
	{
		if(vec[i] > vec[i+1])
		{
			res = i + 2;
			break;
		}
	}
	
	printf("%d\n", res);
}
