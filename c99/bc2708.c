#include <stdio.h>
#include <string.h>

int main()
{
    int nJi = 0, nPe, to = 0;
    char cmd[7], in[50];
    
    while(1)
    {       
        fgets(in, sizeof(in), stdin);
        
        char *token = strtok(in, " \n");
        strcpy(cmd, token);
        
        if(strcmp(cmd, "ABEND") == 0) break;
        
        token = strtok(NULL, " \n");
        nPe = atoi(token);
        
        if(strcmp(cmd, "SALIDA") == 0)
        {
        	nJi++;
        	to += nPe;
		}
		else if(strcmp(cmd, "VUELTA") == 0)
		{
			nJi--;
			to -= nPe;
		}
    }
    printf("%d\n%d\n", to, nJi);
}
