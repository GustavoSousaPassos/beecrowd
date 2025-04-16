#include <stdio.h>
 
int main() 
{
    int res, val;
    
    scanf("%d", &val);
    
    if(val <= 800) res = 1;
    else if(val <= 1400) res = 2;
    else res = 3;
    
    printf("%d\n", res);
    return 0;
}
