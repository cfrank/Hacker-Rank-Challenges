/* https://www.hackerrank.com/challenges/30-recursion */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int number);

int main()
{
    int number;
    scanf("%d", &number);
    
    printf("%d", factorial(number));
    
    return 0;
}

int factorial(int number)
{
    if(number <= 1){
        return 1;
    }
    else{
        return number * factorial(number - 1);
    }
}