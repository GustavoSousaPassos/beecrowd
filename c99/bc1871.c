#include <stdio.h>
#include <string.h>

int main()
{
	int fVal, sVal, i;
	char res[20];
	
	while(1)
	{
	    int j = 0;
		scanf("%d %d", &fVal, &sVal);
		
		if(fVal == 0 && sVal == 0) break;
		else
		{
		    res[0] = '\0';
			char so [99];
			
			sprintf(so, "%d", fVal+sVal);
			
			for(i = 0; i < 20; i++)
			    if(so[i] != '0') res[j++] = so[i];
			
			puts(res);
		}
	}
	
}
