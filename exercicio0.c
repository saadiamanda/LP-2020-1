#include <stdio.h>
int main()
{
    int A, B;
    scanf("%i", &A);
    scanf("%i", &B);
    if (A < B)
    {
        printf("%i %i", A, B);
    }
    else
    {
        printf("%i %i", B, A);
    }

    return 0;
}
