#include <stdio.h>
main(){
    int nota1, nota2, nota3;
    scanf("%i%i%i",&nota1,&nota2,&nota3);
    if ( nota1 != nota2 && nota2 != nota3 && nota3 != nota1){
        printf("INCONCLUSIVO");
    }else 
    if (nota1 == nota2){
        if ( nota1 == 1){
            printf("APROVADO COM A");
        }else if (nota1 == 2){
            printf("APROVADO COM B");
        }else if (nota1 == 3){
            printf("APROVADO COM C");
        }else{
            printf("REPROVADO");
        }
    }
    else if( nota1 == nota3){
        if ( nota1 == 1){
            printf("APROVADO COM A");
        }else if (nota1 == 2){
            printf("APROVADO COM B");
        }else if (nota1 == 3){
            printf("APROVADO COM C");
        }else{
            printf("REPROVADO");
        }
    }
    else if ( nota3 == nota2){
        if ( nota1 == 1){
            printf("APROVADO COM A");
        }else if (nota1 == 2){
            printf("APROVADO COM B");
        }else if (nota1 == 3){
            printf("APROVADO COM C");
        }else{
            printf("REPROVADO");
        }
    }
return 0;
}