#include <stdio.h>
#include <math.h>
#include "functional.c"

int main () {
    float a, b, c;
    printf( "Input coefficient's of equation (a, b, c)\n" );
    scanf( "%f %f %f", &a, &b, &c );
    process( a, b, c );
    return 0;
}