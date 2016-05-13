#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c;
    printf( "Input coefficient's of equation (a, b, c)\n" );
    scanf( "%d %d %d", &a, &b, &c );
    process( a, b, c );
    return 0;
}