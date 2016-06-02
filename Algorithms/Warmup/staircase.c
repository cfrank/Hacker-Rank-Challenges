/* https://www.hackerrank.com/challenges/staircase */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);
    int icr = n - 1;
    for(int top = 0; top < n; ++top){
        for(int bottom = 0; bottom < n; ++bottom){
            if(bottom < icr){
                printf(" ");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
        --icr;
    }
    return 0;
}