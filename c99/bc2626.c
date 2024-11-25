#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char input[30], dodo[7], leo[7], pepper[7];
    
    while(1)
    {
    	if(fgets(input, sizeof(input), stdin) != NULL)
    	{
			
		    char *token = strtok(input, " \n");
		    
		    strcpy(dodo, token);
		    token = strtok(NULL, " \n");
		    strcpy(leo, token);
		    token = strtok(NULL, " \n");
		    strcpy(pepper, token);
		    
		    printf("%s %s %s\n", dodo, leo, pepper);
		    
		}
		else break;
	}
    return 0;
}
