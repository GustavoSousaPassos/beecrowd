#include <stdio.h>
#include <string.h>

int main()
{
	char res[20];
	int val;
	
	while(1)
	{
		if(scanf("%d", &val) == 1)
		{
			if(val < 90 || val == 360) strcpy(res, "Bom dia!!");
			else if(val < 180) strcpy(res, "Boa Tarde!!");
			else if(val < 270) strcpy(res, "Boa noite!!");
			else strcpy(res, "Boa madrugada!!");
			
			puts(res);
			getchar();
			
		}
		else break;
	}
}
