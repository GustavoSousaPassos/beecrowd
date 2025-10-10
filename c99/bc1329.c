#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void calc(int co)
{
	char* line = malloc(sizeof(char) * (co*2+1));
	int rJo = 0, rMa = 0, cVal[co];
	
	
	fgets(line, co*2+1, stdin);
	
	char* token = strtok(line, " \n");
	
	for(int i  = 0; i < co; i++)
	{
	    cVal[i] = atoi(token);
	    token = strtok(NULL, " \n");
	}
	
	for(int i  = 0; i < co; i++) 
	{
	    if(cVal[i] == 0) rMa++;
	    else rJo++;
	}
	
	printf("Mary won %d times and John won %d times\n", rMa, rJo);
	free(line);
}

int main()
{
	int count;
	
	while(1)
	{
		scanf("%d", &count);
        getchar();	    
		if(count == 0) break;
		else calc(count);
	}
}
