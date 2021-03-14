#include <stdio.h>
main(){
    int A, B;
    scanf("%i", &A);
    scanf("%i", &B);
    if(A < B){
        if( B - A == 1){//quatro números
            printf("%i ", A -1);
            printf("%i ", A);
            printf("%i ", B);
            printf("%i ",B+1);
        } 
       else if( B - A == 2){//cinco números
            printf("%i ", A -1);
            printf("%i ",A);
            printf("%i ", A +1);
            printf("%i ",B);
            printf("%i ",B+1);
        } 
        else{
            printf("%i ", A-1);
            printf("%i ", A);
            printf("%i ",A+1);
            printf("%i ",B-1);
            printf("%i ",B);
            printf("%i ",B+1);
        } 
              
    }else if (A > B){
        if( A - B == 1){//quatro números
            printf("%i ", B -1);
            printf("%i ", B);
            printf("%i ", A);
            printf("%i ",A+1);
        }        
        else if( A - B == 2){//cinco números
            printf("%i ", B -1);
            printf("%i ",B);
            printf("%i ", B +1);
            printf("%i ",A);
            printf("%i ",A+1);
        }
        else{
            printf("%i ", A-1);
            printf("%i ", A);
            printf("%i ",A+1);
            printf("%i ",B-1);
            printf("%i ",B);
            printf("%i ",B+1);
        } 
    }
return 0;    
}