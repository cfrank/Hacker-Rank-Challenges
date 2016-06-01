/* https://www.hackerrank.com/challenges/30-operators */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float meal_cost;
    int tip_pct;
    int tax_pct;
    
    scanf("%f", &meal_cost);
    scanf("%d", &tip_pct);
    scanf("%d", &tax_pct);
    
    // Get tip
    float tip = meal_cost * (float)tip_pct * 0.01;
    // Get tax
    float tax = meal_cost * (float)tax_pct * 0.01;
    // Get total cost
    float total_cost = meal_cost + tip + tax;
    
    printf("The total meal cost is %d dollars.", abs(roundf(total_cost)));
    
    return 0;
}