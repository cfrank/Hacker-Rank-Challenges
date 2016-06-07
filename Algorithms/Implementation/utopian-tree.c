/* https://www.hackerrank.com/challenges/utopian-tree */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int cases; 
    scanf("%d", &cases);
    
    for(int i = 0; i < cases; ++i){
        int cycles;
        int height = 1;
        scanf("%d",&cycles);
        
        for(int j = 0; j < cycles; ++j){
            if(j & 1 != 0){
                height += 1;
            }
            else{
                height *= 2;
            }
        }
        
        printf("%d\n", height);
    }
    return 0;
}