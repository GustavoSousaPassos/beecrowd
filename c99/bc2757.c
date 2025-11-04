#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d\n%d\n%d", &a, &b, &c);
    
    _Bool fVe = a < 0;
    _Bool sVe = b < 0;
    _Bool tVe = c < 0;
    
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    
    if(fVe == 1) printf("A = %+.9d, B = %.10d, C = %.10d\n", a, b, c);
    else if(sVe == 1) printf("A = %.10d, B = %+.9d, C = %.10d\n", a, b, c);
    else if(tVe == 1) printf("A = %.10d, B = %.10d, C = %+.9d\n", a, b, c);
    else printf("A = %.10d, B = %.10d, C = %.10d\n", a, b, c);
    
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);

    return 0;
}
