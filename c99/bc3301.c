#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int h, z, l;
	char res[10] = "";
	scanf("%d %d %d", &h, &z, &l);
	
	bool fVe, sVe;
	
	fVe = (h < z && h > l) || (h > z && h < l);
	sVe = (z < h && z > l) || (z > h && z < l);
	
	if(fVe == true) strcpy(res, "huguinho");
	else if(sVe == true) strcpy(res, "zezinho");
	else strcpy(res, "luisinho");
	
	puts(res);
}
