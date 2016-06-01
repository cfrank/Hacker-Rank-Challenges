#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int array_length; 
    scanf("%d",&array_length);

    int arr[array_length];
    long long int result = 0;

    for(unsigned int i = 0; i < array_length; i++){
       scanf("%d",&arr[i]);
       result += arr[i];
    }
    
    printf("%lld", result);
    return 0;
}