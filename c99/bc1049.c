#include <stdio.h>
#include <string.h>

int main()
{
    char fDe[20], sDe[20], tDe[20], res[20] = "";
    
    gets(fDe);
    gets(sDe);
    gets(tDe);
    
    if(strcmp(fDe, "vertebrado") == 0)
    {
        if(strcmp(sDe, "ave") == 0)
        {
            if(strcmp(tDe, "carnivoro") == 0) strcat(res, "aguia");
            else strcat(res, "pomba");
        }
        else
        {
            if(strcmp(tDe,"onivoro") == 0) strcat(res, "homem");
            else strcat(res, "vaca");
        }
    }
    else
    {
        if(strcmp(sDe, "inseto") == 0)
        {
            if(strcmp(tDe, "hematofago") == 0) strcat(res, "pulga");
            else strcat(res, "lagarta");
        }
        else
        {
            if(strcmp(tDe, "hematofago") == 0) strcat(res, "sanguessuga");
            else strcat(res, "minhoca");
        }
    }
    printf("%s\n", res);
}

