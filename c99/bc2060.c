#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int tVec, c2, c3, c4, c5, i;
    c2 = c3 = c4 = c5 = 0;
    
    scanf("%d", &tVec);
    getchar();
    
    int tMax = tVec * (10+1);
    
    char cVal[tMax];
    int vec[tVec];
    
    fgets(cVal, sizeof(cVal), stdin);
    
    char *token = strtok(cVal, " \n");
    int pos = 0;
    
    while(token != NULL && pos < tVec)
    {
        vec[pos] = atoi(token);
        token = strtok(NULL, " \n");
        pos++;
    }
 
    for(i = 0;i < tVec; i++)
	{
		if(vec[i] % 2 == 0) c2++;
		if(vec[i] % 3 == 0) c3++;
		if(vec[i] % 4 == 0) c4++;
		if(vec[i] % 5 == 0) c5++;
	}
	
	printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", c2, c3, c4, c5);
    
    return 0;
}


