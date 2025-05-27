#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char res[] = {'A', 'B', 'C', 'D', 'E'};
    int alt[5];
    char cVal[99];
    int count, iCe, qBr;

    while(1)
    {
        scanf("%d", &count);
        getchar();
        
        if(count == 0) break;
        else
        {
            for(int i = 0; i < count; i++)
            {
                qBr = iCe = 0;
                char *line = fgets(cVal, sizeof(cVal), stdin);
                char *token = strtok(line, " \n");

                for(int j = 0; j < 5; j++)
                {
                    alt[j] = atoi(token);
                    token = strtok(NULL, " \n");

                    if(alt[j] <= 127) iCe = j;
                    else qBr++;
                }

                if(qBr == 4) printf("%c\n", res[iCe]);
                else printf("*\n");
            }
        }

    }
}
