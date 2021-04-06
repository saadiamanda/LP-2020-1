#include <stdio.h>
int main(){
    float x, y;
    scanf ("%f",&x);
    scanf ("%f",&y);
    if ( x >= 58 && x <= 98 && y >= 204 && y <= 244){
        printf ("GOLACO");
    }else if ( x >= 750 && x <=790 &&  y >= 204 && y <= 244){
        printf ("GOLACO");
    }if (x > 58 && x < 790 && y >= 0 && y <= 204 ){
        printf ("GOL");
    }if ( x >= 98 && x <= 750 && y >= 204 && y <=244){
        printf ("GOL");
    }if ( x < 58 || x > 790 || y > 244){
        printf ("UHHH");
}
return 0;
}