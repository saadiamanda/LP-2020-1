#include <stdio.h>
int main()
{
    float A;
    scanf("%f", &A);

    if (A > 100.00 && A <= 200.00)
    {
        printf("R$%.2f ", A - 5.0/100.0 * A);
    }
    else if (A > 200.00)
    {
        printf("R$%.2f", A - 10.0/100.0 * A);
    }
    else
    {
        printf("R$ %.2f", A);
    }

    return 0;
}