#include <stdio.h>

int main()
{
    float fVa, sVa;
    double tVa, qVa;
    
    scanf("%f %f\n%lf %lf", &fVa, &sVa, &tVa, &qVa);
    printf("A = %.6f, B = %.6f\nC = %.6f, D = %.6f\n", fVa, sVa, tVa, qVa);
    printf("A = %.1f, B = %.1f\nC = %.1f, D = %.1f\n", fVa, sVa, tVa, qVa);
    printf("A = %.2f, B = %.2f\nC = %.2f, D = %.2f\n", fVa, sVa, tVa, qVa);
    printf("A = %.3f, B = %.3f\nC = %.3f, D = %.3f\n", fVa, sVa, tVa, qVa);
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", fVa, sVa, tVa, qVa);
    printf("A = %.0f, B = %.0f\nC = %.0f, D = %.0f\n", fVa, sVa, tVa, qVa);

    return 0;
}
