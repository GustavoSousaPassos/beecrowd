#include <stdio.h>
#include <string.h>

int main()
{
    int nCa;
    char input[99];

    scanf("%d", &nCa);
    getchar();
    for(int i = 0; i < nCa; i++)
    {
        fgets(input, sizeof(input), stdin);
        printf("gzuz\n");
    }
}