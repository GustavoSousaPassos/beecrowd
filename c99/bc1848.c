#include <stdio.h>
#include <string.h>

int main()
{
    int i, sum;
    char cVal[10]; // Aumente o tamanho para acomodar os caracteres e o terminador NULL

    for (i = 0; i < 3; i++)
    {
        sum = 0;

        while (1)
        {
            gets(cVal);

            if (strcmp(cVal, "caw caw") == 0) // Adicione "\n" para comparar a nova linha
            {
                printf("%d\n", sum);
                break;
            }
            else
            {
                if (strcmp(cVal, "*--\n") == 0)
                    sum += 4;
                else if (strcmp(cVal, "--*\n") == 0)
                    sum += 1;
                else if (strcmp(cVal, "*-*\n") == 0)
                    sum += 5;
                else if (strcmp(cVal, "-*-\n") == 0)
                    sum += 2;
                else if (strcmp(cVal, "**-\n") == 0)
                    sum += 6;
                else if (strcmp(cVal, "-**\n") == 0)
                    sum += 3;
                else if (strcmp(cVal, "***\n") == 0)
                    sum += 7;
                else
                    sum += 0;
            }
        }
    }

    return 0;
}

