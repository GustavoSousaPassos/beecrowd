#include <stdio.h>
#include <string.h>

int main()
{
    char fStr[100], sStr[100], tStr[100], fMo[10], sMo[10], tMo[10];
    
    fgets(fStr, sizeof(fStr), stdin);
    fgets(sStr, sizeof(sStr), stdin);
    fgets(tStr, sizeof(tStr), stdin);

    strncpy(fMo, fStr, 10);
    strncpy(sMo, sStr, 10);
    strncpy(tMo, tStr, 10);
    printf("%s%s%s\n", fStr, sStr, tStr);    
    printf("%s%s%s\n", sStr, tStr, fStr);    
    printf("%s%s%s\n", tStr, fStr, sStr); 
    printf("%s%s%s\n", fMo, sMo, tMo);    
}
