#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float vec[7], med, res, biggest, smallest;
	int nCa, i, j, pos;
	char name[50], line[100];
	scanf("%d", &nCa);
	
	getchar();
	
	for(i = 0; i < nCa;i++)
	{
		res = 0;
		pos = 0;
		
		fgets(name, sizeof(name), stdin);
		name[strcspn(name, "\n")] = '\0';
		scanf("%f", &med);
		getchar();
		fgets(line, sizeof(line), stdin);
		
		char *cVal = strtok(line, " \n");
		
		while(cVal != NULL && pos < 7)
		{
			vec[pos] = atof(cVal);
			cVal = strtok(NULL, " \n");
			pos++;
		}
		
		biggest = vec[0];
		smallest = biggest;
		
		for(j = 0; j < 7; j++)
			if(vec[j] > biggest) biggest = vec[j];
			
		for(j = 0; j < 7; j++)
			if(vec[j] < smallest) smallest = vec[j];
		
		for(j = 0; j < 7; j++)
			res += vec[j];
		
		res = (res - biggest - smallest) * med; 
		
		printf("%s %.2f\n", name, res);
	}
}
