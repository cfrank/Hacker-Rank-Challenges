/* https://www.hackerrank.com/challenges/30-arrays */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int array_size; 
    scanf("%d",&array_size);
    
    int *array = malloc(sizeof(int) * array_size);
    
    for(int i = 0; i < array_size; ++i){
       scanf("%d", &array[i]);
    }
    
    for(int max = array_size - 1; max >= 0; --max){
        printf("%d ", array[max]);
    }
    
    free(array);
    
    return 0;
}
