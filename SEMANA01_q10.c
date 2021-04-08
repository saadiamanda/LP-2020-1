#include <stdio.h>
main (){
int resto, num, mil, cent, dez, un;
scanf ("%i",&num);
mil = num/1000;
resto = num%1000;
cent = resto/100;
resto = resto % 100;
dez = resto/10;
resto = resto % 10;
un = resto/1;
switch (mil){
    case 0:
    break;
    case 1:
    printf ("mil");
    break;
    case 2:
    printf ("dois mil");
    break;
    case 3:
    printf ("tres mil");
    break; 
    case 4:
    printf ("quatro mil");
    break; 
    case 5:
    printf ("cinco mil");
    break; 
    case 6:
    printf ("seis mil");
    break; 
    case 7:
    printf ("sete mil");
    break;
    case 8:
    printf ("oito mil");
    break; 
    case 9:
    printf ("nove mil");
    break;
}
    
switch (cent){
    case 0:
    break;
    case 1: 
    if ( dez != 0 || un != 0){
    printf (" cento");
    }else{
        printf ("cem");
    }
    break;
    case 2:
    printf ("duzentos");
    break;
    case 3:
    printf ("trezentos");
    break; 
    case 4:
    printf ("quatrocentos");
    break; 
    case 5:
    printf ("quinhentos");
    break; 
    case 6:
    printf ("seicentos");
    break; 
    case 7:
    printf ("setecentos");
    break;
    case 8:
    printf ("oitocentos");
    break; 
    case 9:
    printf ("novecentos");
    break;
}
    if ( dez != 0 && (cent != 0 || mil != 0)){
        printf (" e ");
    }
switch (dez){
    case 0:
    break;
    case 1:
    if ( un == 0){
        printf ( "dez");
    }else if ( un == 1){
        printf ("onze");
    }else if (un == 2){
        printf ("doze");
    }else if (un == 3){
        printf ("treze");
    }
    else if ( un == 4){
        printf ("quatorze");
    }else if ( un == 5){
        printf ("quinze");
    }
    else if ( un == 6){
        printf ("dezesseis");
    }else if ( un == 7){
        printf("dezessete");
    }else if ( un == 8){
        printf ( "dezoito");
    }else if( un == 9){
        printf ("dezenove");
    }
    break;
    case 2:
    printf ("vinte");
    break; 
    case 3:
    printf ("trinta");
    break; 
    case 4:
    printf ("quarenta");
    break; 
    case 5:
    printf ("cinquenta");
    break; 
    case 6:
    printf ("sessenta");
    break;
    case 7:
    printf ("setenta");
    break; 
    case 8:
    printf ("oitenta");
    break;
    case 9:
    printf ("noventa");
    break;
}
    if ( un != 0 && (cent != 0 || mil != 0 || dez != 01)){
    printf (" e");
    }
    if ( dez != 1){
switch (un){
    case 0:if (num == 0 ){
    printf ("zero");
    }
    break;
    case 1:
    printf ("um");
    break;
    case 2:
    printf ("dois");
    break; 
    case 3:
    printf ("tres");
    break; 
    case 4:
    printf ("quatro");
    break; 
    case 5:
    printf ("cinco");
    break; 
    case 6:
    printf ("seis");
    break;
    case 7:
    printf ("sete");
    break; 
    case 8:
    printf ("oito");
    break;
    case 9:
    printf ("nove");
    break;
}
    }
      return 0;
}
