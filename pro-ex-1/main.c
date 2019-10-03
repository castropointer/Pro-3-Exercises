/* main.c
* author: 
* date: 03.10.2019
* Test
*/

// Terminal with: (CMD)+J
// Compile with: gcc functions.c main.c -o f && ./f

#include <stdio.h>
#include "functions.h"

int main(int argc, char * argv[]) {
    float p = 100000;
    float z = -0.1;
    int n = 8;
    float a = calcCredit(p, z, n);

    printf("Guthaben nach %i Jahren: %f\n", n, a);

    z = 2.5;

    float k = 40000;
    float t = 1;
    float s = calcAmortizationRate(k, z, t);
    float be = calcBalanceDue(k, s, z, n);

    printf("Tilgungsrate: %f\n", s);
    printf("Restschuld nach %i Jahre(n): %f\n", n, be);

    return 0;
}