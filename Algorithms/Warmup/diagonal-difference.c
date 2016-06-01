/* https://www.hackerrank.com/challenges/diagonal-difference */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int size;
    scanf("%d",&size);
    int a[size][size];

    int prim_result = 0;
    int sec_result = 0;

    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
            scanf("%d",&a[a_i][a_j]);
       }
    }
    
    for(int i = 0; i < n; ++i){
        prim_result += a[i][i];
        sec_result += a[i][(n - i) - 1];
    }
    
    printf("%d", abs(prim_result - sec_result));

    return 0;
}