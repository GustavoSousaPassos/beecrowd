#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int di, nCa, tCa;
    scanf("%d", &di);
    char * res = malloc(9 * sizeof(char));

    for(int i = 0; i < di; i++)
    {
        scanf("%d", &nCa);
        
        for(int j = 0; j < nCa; j++)
        {
            scanf("%d", &tCa);

            switch(tCa)
            {
                case 1: strcpy(res, "Rolien"); break;
                case 2: strcpy(res, "Naej"); break;
                case 3: strcpy(res, "Elehcim"); break;
                case 4: strcpy(res, "Odranoel"); break;
            }

            puts(res);
        }
    }
    free(res);
}