/* https://www.hackerrank.com/challenges/30-loops */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int base_num;
    scanf("%d",&base_num);
    
    for(int i = 1; i <= 10; ++i){
        printf("%d x %d = %d\n", base_num, i, base_num * i);
    }
    
    return 0;
}