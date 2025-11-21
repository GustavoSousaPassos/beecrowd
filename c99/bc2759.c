#include <stdio.h>
 
int main() 
{
    char fCa, sCa, tCa;
    
    scanf("%c\n%c\n%c", &fCa, &sCa, &tCa);
    
    printf("A = %c, B = %c, C = %c\n", fCa, sCa, tCa);
    printf("A = %c, B = %c, C = %c\n", sCa, tCa, fCa);
    printf("A = %c, B = %c, C = %c\n", tCa, fCa, sCa);
    return 0;
}
