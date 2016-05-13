#include <stdio.h>
#include <math.h>

void process ( float a, float b, float c ) {
    float D, x1, x2;
    if ( a == 0 ) {
    x1 = ( -1 ) * ( c / b );
    x2 = x1;
    }
    D = ( b * b ) - ( 4 * a * c);
    if ( D < 0 ) {
    printf ( "The equation has no roots\n" );
    } else {
    x1 = ( -b + sqrt(D) ) / ( 2 * a );
    x2 = ( -b - sqrt(D) ) / ( 2 * a );
    printf ( " x1 = %f, x2 = %f\n", x1, x2 );
    }
}
