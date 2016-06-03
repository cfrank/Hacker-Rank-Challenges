/* https://www.hackerrank.com/challenges/tutorial-intro */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int needle, array_length, result;
    scanf("%d%d", &needle, &array_length);
    
    int *sorted_array = malloc(sizeof(int) * array_length);
    for(int i = 0; i < array_length; ++i){
        scanf("%d", &sorted_array[i]);
        
        if(sorted_array[i] == needle){
            result = i;
        }
    }
    
    printf("%d", result);
    
    free(sorted_array);
    return 0;
}