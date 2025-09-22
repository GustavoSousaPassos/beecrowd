#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0;
    char fLi[] = "---------------------------------------";
    char cVal[3][8] = {"Roberto", "5786", "UNIFEI"};
    
    for(i = 0; i < 7;i++)
    {
        if(i == 0 ||i == 6) puts(fLi);
        else i % 2 != 0? printf("|        %-29s|\n", cVal[j++]) : puts("|                                     |");
    }
    return 0;
}
