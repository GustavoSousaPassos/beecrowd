#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "";
	
	gets(name);
	
	strlen(name) <= 80? printf("YES\n") : printf("NO\n");
}
