#include <stdio.h>
#include <string.h>

int main()
{
	char res[99999] = "Feliz nat";
	
	int ind, i;
	
	scanf("%d", &ind);
	
	for(i = 0; i < ind; i++)
		strcat(res, "a");
	
	strcat(res, "l!");
	
	printf("%s\n", res);
}
