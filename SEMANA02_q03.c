#include <stdio.h>
main()
{
    int A, B, C;
    scanf("%i%i%i", &A, &B, &C);
    if (A >= B && A >= C){
        //A maior
        if( B + C > A){
            // forma
            if( A == B && B == C){
                printf("EQUILATERO");
            }else if (A == B){
                 printf("ISOSCELES");
            }else if (B == C){
                 printf("ISÓSCELES");
            } else if(C == A){
                printf("ISÓSCELES");
            }else{
                printf("ESCALENO");
            }
            
        }else{
            printf("NÃO FORMA");
        }
    }else if( B >= A && B >= C){
        // B maior
        if( A + C > B){
            //forma
            if( A == B && B == C){
                printf("EQUILATERO");
            }else if (A == B){
                 printf("ISÓSCELES");
            }else if (B == C){
                 printf("ISÓSCELES");
            } else if(C == A){
                printf("ISÓSCELES");
            }else{
                printf("ESCALENO");
            }
        }else{
            printf("NÃO FORMA");
        }
    }else{
        // C maior
        if(B + A > C){
            //forma
            if( A == B && B == C){
                printf("EQUILATERO");
            }else if (A == B){
                 printf("ISÓSCELES");
            }else if (B == C){
                 printf("ISÓSCELES");
            } else if(C == A){
                printf("ISÓSCELES");
            }else{
                printf("ESCALENO");
            }
        }else{
            printf("NAO FORMA");
        }
    }
    return 0;
}
