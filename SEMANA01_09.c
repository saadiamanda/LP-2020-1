#include <stdio.h>
main (){
    int valor, notas, resto;
    scanf ("%i",&valor);
    notas = valor/100;
    if (notas != 0 ){
        printf ("%i notas de R$100\n", notas);
    }
    resto = valor % 100;
    notas = resto/50;
    if (notas != 0){
        printf("%i notas de R$50\n", notas);
    }
    resto = resto % 50;
    notas = resto/20;
    if (notas != 0){
        printf("%i notas de R$20\n",notas);
    }
    resto = resto % 20;
    notas = resto/10;
    if ( notas != 0){
        printf("%i notas de R$10\n", notas);
    }
    resto = resto % 10;
    notas = resto/5;
    if ( notas != 0){
        printf("%i notas de R$5\n", notas);
    }
    resto = resto % 5;
    notas = resto/2;
    if ( notas != 0){
        printf("%i notas de R$2\n", notas);
    }
    resto = resto % 2;
    notas = resto/1;3
    if ( notas != 0){
        printf("%i notas de R$1\n", notas);
    }
    














return 0;

}