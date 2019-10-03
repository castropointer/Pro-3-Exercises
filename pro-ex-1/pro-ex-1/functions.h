/* functions.h
* author: 
* date: 03.10.2019
* Main functionality declaration.
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

float calcCredit(float base, float tax, int years);
float calcAmortizationRate(float amount, float creditTax, float debtTax /* Schuldzins? */); // Tilgungsrate
float calcBalanceDue(float dueStart, float amortizationRate, float creditTax, int years);

#endif