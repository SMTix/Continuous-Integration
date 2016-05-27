#include <stdio.h>
#include <math.h>
#include <functional.h>

int main () {
    float a, b, c, d, x1, x2;
    int CountRoots;
    printf( "Input coefficient's of equation (a, b, c)\n" );
    scanf( "%f %f %f", &a, &b, &c );
    process( a, b, c, &d, &x1, &x2, &CountRoots );
    return 0;
}