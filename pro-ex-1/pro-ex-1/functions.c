/* functions.c
* author: N
* date: 03.10.2019
* Main functionality implementation.
*/

#include "functions.h"

float calcCredit(float base, float tax, int years)
{
    float a = 1;
    int n = 0;

    while (n++ < years) {
        a = a * ((float) 1 + (tax / (float) 100));
    }

    return base * a;
}

float calcAmortizationRate(float amount, float creditTax, float debtTax)
{
    return amount * (creditTax / (float) 100 + debtTax / (float) 100);
}

float calcBalanceDue(float dueStart, float amortizationRate, float creditTax, int years)
{
    float be = dueStart - (amortizationRate - dueStart * (creditTax / (float) 100));

    if (years > 0)
        be = calcBalanceDue(be, amortizationRate, creditTax, --years);

    return be;
}