#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int count, i = 0, res = 0;
	
	scanf("%d", &count);
	getchar();
	
	int vec[count];
	char cVal[count*2];
	
	fgets(cVal, sizeof(cVal), stdin);
	
	char * token = strtok(cVal, " \n");
	
	while(token != NULL)
	{
	    vec[i] = atoi(token);
	    i++;
	    token = strtok(NULL, " \n");
	}
	
	for(i = 0; i < count; i++)
	    if(vec[i] == 1) res++;
	    
	printf("%d\n", res);
}
