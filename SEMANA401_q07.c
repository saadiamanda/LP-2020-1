#include <stdio.h>
int main (){
    int real, resto;
    scanf ("%i",&real);
    printf ("%i notas de R$100\n", real/100);
    resto = real%100;
    printf ("%i notas de 50\n", resto/50);
    resto = resto%50;
    printf ("%i notas de 20\n",resto/20);
    resto = resto%20;
    printf ("%i notas de 10\n",resto/10);
    resto = resto%10;
    printf ("%i notas de 5\n",resto/5);
    resto = resto%5;
    printf ("%i notas de 2\n",resto/2);
    resto = resto%2;
    printf ("%i notas de 1\n",resto/1);
    return 0;
}
