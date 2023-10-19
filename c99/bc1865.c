#include <stdio.h>
#include <string.h>

int main()
{
	int count, force, i;
	char name[10];
	
	scanf("%d", &count);
	
	for(i = 0; i < count; i++)
	{
		char res;
		
		scanf("%s %d", name, &force);
		
		if(strcmp(name, "Thor") == 0) res = 'Y';
		else res = 'N';
		
		printf("%c\n", res);
	}
	
}
