#include <stdio.h>

int main()
{
	int p, r;
	char res;
	scanf("%d %d", &p, &r);
	
	if(p == 0) res = 'C';
	else
		res = r == 0? 'B' : 'A';
		
	printf("%c\n", res);
}
