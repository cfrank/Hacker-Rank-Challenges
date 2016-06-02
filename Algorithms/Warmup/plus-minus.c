/* https://www.hackerrank.com/challenges/plus-minus */
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
    int arr[n];
    
    unsigned int pos = 0;
    unsigned int neg = 0;
    unsigned int zer = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
        scanf("%d", &arr[arr_i]);
        if(arr[arr_i] > 0){
            pos++;
        }
        else if(arr[arr_i] == 0){
            ++zer;
        }
        else{
            ++neg;
        }
    }
    printf("%f\n", ((float)pos / n));
    printf("%f\n", ((float)neg / n));
    printf("%f", ((float)zer / n));
    return 0;
}