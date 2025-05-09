#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, count;
    double ra, be, ca;

    scanf("%d", &count);

    for(int i = 0; i < count; i++)
    {
        scanf("%d %d", &x, &y);

        ra = pow(3*x, 2) + pow(y, 2);
        be = (2 * pow(x, 2)) +  pow(5*y, 2);
        ca = -100*x + pow(y, 3);

        if(ra > be && ra > ca) printf("Rafael ganhou\n");
        else if(be > ra && be > ca) printf("Beto ganhou\n");
        else printf("Carlos ganhou\n");
    }

    return 0;
}