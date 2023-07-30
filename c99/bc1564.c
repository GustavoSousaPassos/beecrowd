#include <stdio.h>
 
int main() 
{
    int val;
    
    while(scanf("%d", &val) == 1)
    {    
		if(val == 0) printf("vai ter copa!\n");
		else printf("vai ter duas!\n");
    }
    
    return 0;
}
